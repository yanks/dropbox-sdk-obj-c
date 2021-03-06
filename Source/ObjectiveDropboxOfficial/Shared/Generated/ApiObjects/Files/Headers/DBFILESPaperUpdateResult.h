///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESPaperUpdateResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperUpdateResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESPaperUpdateResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The current doc revision.
@property (nonatomic, readonly) NSNumber *paperRevision;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param paperRevision The current doc revision.
///
/// @return An initialized instance.
///
- (instancetype)initWithPaperRevision:(NSNumber *)paperRevision;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperUpdateResult` struct.
///
@interface DBFILESPaperUpdateResultSerializer : NSObject

///
/// Serializes `DBFILESPaperUpdateResult` instances.
///
/// @param instance An instance of the `DBFILESPaperUpdateResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESPaperUpdateResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESPaperUpdateResult *)instance;

///
/// Deserializes `DBFILESPaperUpdateResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESPaperUpdateResult` API object.
///
/// @return An instantiation of the `DBFILESPaperUpdateResult` object.
///
+ (DBFILESPaperUpdateResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
