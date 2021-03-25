///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGGroupDeleteDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupDeleteDetails` struct.
///
/// Deleted group.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGGroupDeleteDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Is company managed group.
@property (nonatomic, readonly, nullable) NSNumber *isCompanyManaged;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param isCompanyManaged Is company managed group.
///
/// @return An initialized instance.
///
- (instancetype)initWithIsCompanyManaged:(nullable NSNumber *)isCompanyManaged;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupDeleteDetails` struct.
///
@interface DBTEAMLOGGroupDeleteDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGGroupDeleteDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGGroupDeleteDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupDeleteDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGGroupDeleteDetails *)instance;

///
/// Deserializes `DBTEAMLOGGroupDeleteDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupDeleteDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGGroupDeleteDetails` object.
///
+ (DBTEAMLOGGroupDeleteDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
