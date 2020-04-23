///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMGroupSelectorWithTeamGroupError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupSelectorWithTeamGroupError` union.
///
/// Error that can be raised when GroupSelector is used and team groups are
/// disallowed from being used.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGroupSelectorWithTeamGroupError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMGroupSelectorWithTeamGroupErrorTag` enum type represents the
/// possible tag states with which the `DBTEAMGroupSelectorWithTeamGroupError`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMGroupSelectorWithTeamGroupErrorTag){
    /// No matching group found. No groups match the specified group ID.
    DBTEAMGroupSelectorWithTeamGroupErrorGroupNotFound,

    /// (no description).
    DBTEAMGroupSelectorWithTeamGroupErrorOther,

    /// This operation is not supported on system-managed groups.
    DBTEAMGroupSelectorWithTeamGroupErrorSystemManagedGroupDisallowed,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMGroupSelectorWithTeamGroupErrorTag tag;

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

///
/// Initializes union class with tag state of "system_managed_group_disallowed".
///
/// Description of the "system_managed_group_disallowed" tag state: This
/// operation is not supported on system-managed groups.
///
/// @return An initialized instance.
///
- (instancetype)initWithSystemManagedGroupDisallowed;

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
/// Retrieves whether the union's current tag state has value
/// "system_managed_group_disallowed".
///
/// @return Whether the union's current tag state has value
/// "system_managed_group_disallowed".
///
- (BOOL)isSystemManagedGroupDisallowed;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMGroupSelectorWithTeamGroupError`
/// union.
///
@interface DBTEAMGroupSelectorWithTeamGroupErrorSerializer : NSObject

///
/// Serializes `DBTEAMGroupSelectorWithTeamGroupError` instances.
///
/// @param instance An instance of the `DBTEAMGroupSelectorWithTeamGroupError`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGroupSelectorWithTeamGroupError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMGroupSelectorWithTeamGroupError *)instance;

///
/// Deserializes `DBTEAMGroupSelectorWithTeamGroupError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGroupSelectorWithTeamGroupError` API object.
///
/// @return An instantiation of the `DBTEAMGroupSelectorWithTeamGroupError`
/// object.
///
+ (DBTEAMGroupSelectorWithTeamGroupError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
