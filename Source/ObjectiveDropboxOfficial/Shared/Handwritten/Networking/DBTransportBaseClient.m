///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///

#import <Foundation/Foundation.h>

#import "DBAUTHAccessError.h"
#import "DBAUTHAuthError.h"
#import "DBAUTHRateLimitError.h"
#import "DBCOMMONPathRootError.h"
#import "DBRequestErrors.h"
#import "DBSDKConstants.h"
#import "DBStoneBase.h"
#import "DBTransportBaseClient.h"
#import "DBTransportBaseConfig.h"
#import "DBTransportBaseHostnameConfig.h"

#pragma mark - Internal serialization helpers

@interface DBTransportBaseClient ()
@property (nonatomic, readonly, copy) DBTransportBaseHostnameConfig *hostnameConfig;
@end

@implementation DBTransportBaseClient

- (instancetype)initWithAccessToken:(NSString *)accessToken
                           tokenUid:(NSString *)tokenUid
                    transportConfig:(DBTransportBaseConfig *)transportConfig {
  if (self = [super init]) {
    _accessToken = accessToken;
    _tokenUid = [tokenUid copy];
    _appKey = transportConfig.appKey;
    _appSecret = transportConfig.appSecret;
    _hostnameConfig = transportConfig.hostnameConfig ?: [[DBTransportBaseHostnameConfig alloc] init];
    NSString *defaultUserAgent = [NSString stringWithFormat:@"%@/%@", kDBSDKDefaultUserAgentPrefix, kDBSDKVersion];
    _userAgent = transportConfig.userAgent ? [[transportConfig.userAgent stringByAppendingString:@"/"]
                                                 stringByAppendingString:defaultUserAgent]
                                           : defaultUserAgent;
    _asMemberId = transportConfig.asMemberId;
    _pathRoot = transportConfig.pathRoot;
    _additionalHeaders = transportConfig.additionalHeaders;
  }
  return self;
}

- (NSDictionary *)headersWithRouteInfo:(NSDictionary<NSString *, NSString *> *)routeAttributes
                         serializedArg:(NSString *)serializedArg {
  return [self headersWithRouteInfo:routeAttributes serializedArg:serializedArg byteOffsetStart:nil byteOffsetEnd:nil];
}

- (NSDictionary *)headersWithRouteInfo:(NSDictionary<NSString *, NSString *> *)routeAttributes
                         serializedArg:(NSString *)serializedArg
                       byteOffsetStart:(NSNumber *)byteOffsetStart
                         byteOffsetEnd:(NSNumber *)byteOffsetEnd {
  NSString *routeStyle = routeAttributes[@"style"];
  NSString *routeHost = routeAttributes[@"host"];
  NSString *routeAuth = routeAttributes[@"auth"];

  NSMutableDictionary<NSString *, NSString *> *headers = [[NSMutableDictionary alloc] init];
  [headers setObject:_userAgent forKey:@"User-Agent"];

  BOOL noauth = [routeHost isEqualToString:@"notify"];

  if (!noauth) {
    if (_asMemberId) {
      [headers setObject:_asMemberId forKey:@"Dropbox-Api-Select-User"];
    }

    if (_pathRoot) {
      NSString *pathRootStr = [[self class] serializeStringWithRoute:nil routeArg:_pathRoot];
      [headers setObject:pathRootStr forKey:@"Dropbox-Api-Path-Root"];
    }

    if (routeAuth && [routeAuth isEqualToString:@"app"]) {
      if (!_appKey || !_appSecret) {
        NSLog(@"App key and/or secret not properly configured. Use custom `DBTransportDefaultConfig` instance to set.");
      }
      NSString *authString = [NSString stringWithFormat:@"%@:%@", _appKey, _appSecret];
      NSData *authData = [authString dataUsingEncoding:NSUTF8StringEncoding];
      [headers setObject:[NSString stringWithFormat:@"Basic %@", [authData base64EncodedStringWithOptions:0]]
                  forKey:@"Authorization"];
    } else {
      [headers setObject:[NSString stringWithFormat:@"Bearer %@", _accessToken] forKey:@"Authorization"];
    }
  }

  if ([routeStyle isEqualToString:@"rpc"]) {
    if (serializedArg) {
      [headers setObject:@"application/json" forKey:@"Content-Type"];
    }
  } else if ([routeStyle isEqualToString:@"upload"]) {
    [headers setObject:@"application/octet-stream" forKey:@"Content-Type"];
    if (serializedArg) {
      [headers setObject:serializedArg forKey:@"Dropbox-API-Arg"];
    }
  } else if ([routeStyle isEqualToString:@"download"]) {
    if (serializedArg) {
      [headers setObject:serializedArg forKey:@"Dropbox-API-Arg"];
    }
  }

  if (byteOffsetStart && byteOffsetEnd) {
    NSString *bytesRangeSpecifier = [NSString
        stringWithFormat:@"bytes=%lu-%lu", [byteOffsetStart unsignedLongValue], [byteOffsetEnd unsignedLongValue]];
    [headers setObject:bytesRangeSpecifier forKey:@"Range"];
  }

  if (_additionalHeaders != nil) {
    [headers addEntriesFromDictionary:_additionalHeaders];
  }

  return headers;
}

+ (NSMutableURLRequest *)requestWithHeaders:(NSDictionary *)httpHeaders
                                        url:(NSURL *)url
                                    content:(NSData *)content
                                     stream:(NSInputStream *)stream {
  NSMutableURLRequest *request = [[NSMutableURLRequest alloc] initWithURL:url];
  for (NSString *key in httpHeaders) {
    [request addValue:httpHeaders[key] forHTTPHeaderField:key];
  }
  request.HTTPMethod = @"POST";
  if (content) {
    request.HTTPBody = content;
  }
  if (stream) {
    request.HTTPBodyStream = stream;
  }
  return request;
}

- (NSURL *)urlWithRoute:(DBRoute *)route {
  NSString *routePrefix = [_hostnameConfig apiV2PrefixWithRoute:route];
  return [NSURL URLWithString:[NSString stringWithFormat:@"%@/%@/%@", routePrefix, route.namespace_, route.name]];
}

+ (NSData *)serializeDataWithRoute:(DBRoute *)route routeArg:(id<DBSerializable>)arg {
  if (!arg) {
    return nil;
  }

  if (route != nil && route.dataStructSerialBlock) {
    return [[self class] jsonDataWithJsonObj:route.dataStructSerialBlock(arg)];
  }

  NSDictionary *serializedDict = [[arg class] serialize:arg];
  return [[self class] jsonDataWithJsonObj:serializedDict];
}

+ (NSString *)serializeStringWithRoute:(DBRoute *)route routeArg:(id<DBSerializable>)arg {
  if (!arg) {
    return nil;
  }
  NSData *jsonData = [self serializeDataWithRoute:route routeArg:arg];
  if (!jsonData) {
    return nil;
  }
  NSString *asciiEscapedStr = [[self class] asciiEscapeWithString:[[self class] utf8StringWithData:jsonData]];
  NSMutableString *filteredStr = [[NSMutableString alloc] initWithString:asciiEscapedStr];
  [filteredStr replaceOccurrencesOfString:@"\\/"
                               withString:@"/"
                                  options:NSLiteralSearch
                                    range:NSMakeRange(0, [filteredStr length])];
  return filteredStr;
}

+ (NSData *)jsonDataWithJsonObj:(id)jsonObj {
  if (!jsonObj) {
    return nil;
  }

  NSError *error;
  NSData *jsonData = [NSJSONSerialization dataWithJSONObject:jsonObj options:0 error:&error];

  if (!jsonData) {
    NSLog(@"Error serializing dictionary: %@", error.localizedDescription);
    return nil;
  } else {
    return jsonData;
  }
}

+ (NSString *)utf8StringWithData:(NSData *)jsonData {
  return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
}

+ (NSString *)asciiEscapeWithString:(NSString *)string {
  NSMutableString *result = [[NSMutableString alloc] init];
  for (NSUInteger i = 0; i < string.length; i++) {
    NSString *substring = [string substringWithRange:NSMakeRange(i, 1)];
    if ([substring canBeConvertedToEncoding:NSASCIIStringEncoding]) {
      [result appendString:substring];
    } else {
      [result appendFormat:@"\\u%04x", [string characterAtIndex:i]];
    }
  }
  return result;
}

+ (DBRequestError *)dBRequestErrorWithErrorData:(NSData *)errorData
                                    clientError:(NSError *)clientError
                                     statusCode:(int)statusCode
                                    httpHeaders:(NSDictionary *)httpHeaders {
  DBRequestError *dbxError;

  if (clientError && errorData == nil) {
    return [[DBRequestError alloc] initAsClientError:clientError];
  }

  if (statusCode == 200) {
    return nil;
  }

  NSDictionary *deserializedData = [self deserializeHttpData:errorData];

  NSString *requestId = httpHeaders[@"X-Dropbox-Request-Id"];
  NSString *errorContent;
  if (deserializedData) {
    if (deserializedData[@"error_summary"]) {
      errorContent = deserializedData[@"error_summary"];
    } else if (deserializedData[@"error"]) {
      errorContent = deserializedData[@"error"];
    } else {
      errorContent = errorData ? [[NSString alloc] initWithData:errorData encoding:NSUTF8StringEncoding] : nil;
    }
  } else {
    errorContent = errorData ? [[NSString alloc] initWithData:errorData encoding:NSUTF8StringEncoding] : nil;
  }
  DBLocalizedUserMessage *userMessage = nil;
  NSDictionary *userMessageDict = deserializedData[@"user_message"];
  if ([userMessageDict isKindOfClass:[NSDictionary class]]) {
    NSString *text = userMessageDict[@"text"];
    NSString *locale = userMessageDict[@"locale"];
    if ([text isKindOfClass:[NSString class]] && [locale isKindOfClass:[NSString class]]) {
      userMessage = [[DBLocalizedUserMessage alloc] initWithText:text locale:locale];
    }
  }

  if (statusCode >= 500 && statusCode < 600) {
    dbxError = [[DBRequestError alloc] initAsInternalServerError:requestId
                                                      statusCode:@(statusCode)
                                                    errorContent:errorContent
                                                     userMessage:userMessage];
  } else if (statusCode == 400) {
    dbxError = [[DBRequestError alloc] initAsBadInputError:requestId
                                                statusCode:@(statusCode)
                                              errorContent:errorContent
                                               userMessage:userMessage];
  } else if (statusCode == 401) {
    DBAUTHAuthError *authError = [DBAUTHAuthErrorSerializer deserialize:deserializedData[@"error"]];
    dbxError = [[DBRequestError alloc] initAsAuthError:requestId
                                            statusCode:@(statusCode)
                                          errorContent:errorContent
                                           userMessage:userMessage
                                   structuredAuthError:authError];
  } else if (statusCode == 403) {
    DBAUTHAccessError *accessError = [DBAUTHAccessErrorSerializer deserialize:deserializedData[@"error"]];
    dbxError = [[DBRequestError alloc] initAsAccessError:requestId
                                              statusCode:@(statusCode)
                                            errorContent:errorContent
                                             userMessage:userMessage
                                   structuredAccessError:accessError];
  } else if (statusCode == 422) {
    DBCOMMONPathRootError *pathRootError = [DBCOMMONPathRootErrorSerializer deserialize:deserializedData[@"error"]];
    dbxError = [[DBRequestError alloc] initAsPathRootError:requestId
                                                statusCode:@(statusCode)
                                              errorContent:errorContent
                                               userMessage:userMessage
                                   structuredPathRootError:pathRootError];
  } else if (statusCode == 429) {
    DBAUTHRateLimitError *rateLimitError = [DBAUTHRateLimitErrorSerializer deserialize:deserializedData[@"error"]];
    NSString *retryAfter = httpHeaders[@"Retry-After"];
    double retryAfterSeconds = retryAfter.doubleValue;
    dbxError = [[DBRequestError alloc] initAsRateLimitError:requestId
                                                 statusCode:@(statusCode)
                                               errorContent:errorContent
                                                userMessage:userMessage
                                   structuredRateLimitError:rateLimitError
                                                    backoff:@(retryAfterSeconds)];
  } else if ([[self class] statusCodeIsRouteError:statusCode]) {
    dbxError = [[DBRequestError alloc] initAsHttpError:requestId
                                            statusCode:@(statusCode)
                                          errorContent:errorContent
                                           userMessage:userMessage];
  } else {
    dbxError = [[DBRequestError alloc] initAsHttpError:requestId
                                            statusCode:@(statusCode)
                                          errorContent:errorContent
                                           userMessage:userMessage];
  }

  return dbxError;
}

+ (id)routeErrorWithRoute:(DBRoute *)route data:(NSData *)data statusCode:(int)statusCode {
  if (!data) {
    return nil;
  }
  id routeError = nil;
  NSDictionary *deserializedData = [self deserializeHttpData:data];
  if ([[self class] statusCodeIsRouteError:statusCode]) {
    routeError = [route.errorType deserialize:deserializedData[@"error"]];
  }
  return routeError;
}

+ (NSDictionary *)deserializeHttpData:(NSData *)data {
  if (!data) {
    return nil;
  }
  NSError *error;
  return [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableContainers error:&error];
}

+ (id)routeResultWithRoute:(DBRoute *)route data:(NSData *)data serializationError:(NSError **)serializationError {
  if (!data) {
    return nil;
  }

  if (!route.resultType) {
    return nil;
  }
  id jsonData =
      [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableContainers error:serializationError];
  if (*serializationError) {
    return nil;
  }

  if (route.resultType) {
    if (route.dataStructDeserialBlock) {
      return route.dataStructDeserialBlock(jsonData);
    }
    return [(Class)route.resultType deserialize:jsonData];
  }

  return nil;
}

+ (BOOL)statusCodeIsRouteError:(int)statusCode {
  return statusCode == 409;
}

+ (nullable id)caseInsensitiveLookupWithKey:(nullable NSString *)lookupKey
                     headerFieldsDictionary:(nullable NSDictionary<id, id> *)headerFieldsDictionary {
  NSString *lowercaseLookupKey = lookupKey.lowercaseString;
  for (id key in headerFieldsDictionary) {
    if ([key isKindOfClass:[NSString class]]) {
      NSString *keyString = (NSString *)key;
      if ([keyString.lowercaseString isEqualToString:lowercaseLookupKey]) {
        return headerFieldsDictionary[key];
      }
    }
  }
  return nil;
}

+ (NSString *)sdkVersion {
  return kDBSDKVersion;
}

+ (NSString *)defaultUserAgent {
  return kDBSDKDefaultUserAgentPrefix;
}

@end
