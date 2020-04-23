///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMGroupSelectorError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupSelectorError` union.
///
/// Error that can be raised when GroupSelector is used.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGroupSelectorError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMGroupSelectorErrorTag` enum type represents the possible tag
/// states with which the `DBTEAMGroupSelectorError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMGroupSelectorErrorTag){
    /// No matching group found. No groups match the specified group ID.
    DBTEAMGroupSelectorErrorGroupNotFound,

    /// (no description).
    DBTEAMGroupSelectorErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMGroupSelectorErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "group_not_found".
///
/// Description of the "group_not_found" tag state: No matching group found. No
/// groups match the specified group ID.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroupNotFound;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "group_not_found".
///
/// @return Whether the union's current tag state has value "group_not_found".
///
- (BOOL)isGroupNotFound;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMGroupSelectorError` union.
///
@interface DBTEAMGroupSelectorErrorSerializer : NSObject

///
/// Serializes `DBTEAMGroupSelectorError` instances.
///
/// @param instance An instance of the `DBTEAMGroupSelectorError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGroupSelectorError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMGroupSelectorError *)instance;

///
/// Deserializes `DBTEAMGroupSelectorError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGroupSelectorError` API object.
///
/// @return An instantiation of the `DBTEAMGroupSelectorError` object.
///
+ (DBTEAMGroupSelectorError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
