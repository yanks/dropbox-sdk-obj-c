///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESRelocationBatchV2Launch;
@class DBFILESRelocationBatchV2Result;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RelocationBatchV2Launch` union.
///
/// Result returned by `dCopyBatch` or `moveBatch` that may either launch an
/// asynchronous job or complete synchronously.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESRelocationBatchV2Launch : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESRelocationBatchV2LaunchTag` enum type represents the possible
/// tag states with which the `DBFILESRelocationBatchV2Launch` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESRelocationBatchV2LaunchTag){
    /// This response indicates that the processing is asynchronous. The string
    /// is an id that can be used to obtain the status of the asynchronous job.
    DBFILESRelocationBatchV2LaunchAsyncJobId,

    /// (no description).
    DBFILESRelocationBatchV2LaunchComplete,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESRelocationBatchV2LaunchTag tag;

/// This response indicates that the processing is asynchronous. The string is
/// an id that can be used to obtain the status of the asynchronous job. @note
/// Ensure the `isAsyncJobId` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *asyncJobId;

/// (no description). @note Ensure the `isComplete` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESRelocationBatchV2Result *complete;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "async_job_id".
///
/// Description of the "async_job_id" tag state: This response indicates that
/// the processing is asynchronous. The string is an id that can be used to
/// obtain the status of the asynchronous job.
///
/// @param asyncJobId This response indicates that the processing is
/// asynchronous. The string is an id that can be used to obtain the status of
/// the asynchronous job.
///
/// @return An initialized instance.
///
- (instancetype)initWithAsyncJobId:(NSString *)asyncJobId;

///
/// Initializes union class with tag state of "complete".
///
/// @param complete (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithComplete:(DBFILESRelocationBatchV2Result *)complete;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "async_job_id".
///
/// @note Call this method and ensure it returns true before accessing the
/// `asyncJobId` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "async_job_id".
///
- (BOOL)isAsyncJobId;

///
/// Retrieves whether the union's current tag state has value "complete".
///
/// @note Call this method and ensure it returns true before accessing the
/// `complete` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "complete".
///
- (BOOL)isComplete;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESRelocationBatchV2Launch` union.
///
@interface DBFILESRelocationBatchV2LaunchSerializer : NSObject

///
/// Serializes `DBFILESRelocationBatchV2Launch` instances.
///
/// @param instance An instance of the `DBFILESRelocationBatchV2Launch` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESRelocationBatchV2Launch` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESRelocationBatchV2Launch *)instance;

///
/// Deserializes `DBFILESRelocationBatchV2Launch` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESRelocationBatchV2Launch` API object.
///
/// @return An instantiation of the `DBFILESRelocationBatchV2Launch` object.
///
+ (DBFILESRelocationBatchV2Launch *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
