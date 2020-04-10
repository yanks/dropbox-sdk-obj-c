///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBACCOUNTSetProfilePhotoError;
@class DBTEAMMembersSetProfilePhotoError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MembersSetProfilePhotoError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersSetProfilePhotoError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMMembersSetProfilePhotoErrorTag` enum type represents the possible
/// tag states with which the `DBTEAMMembersSetProfilePhotoError` union can
/// exist.
typedef NS_ENUM(NSInteger, DBTEAMMembersSetProfilePhotoErrorTag) {
  /// No matching user found. The provided team_member_id, email, or
  /// external_id does not exist on this team.
  DBTEAMMembersSetProfilePhotoErrorUserNotFound,

  /// The user is not a member of the team.
  DBTEAMMembersSetProfilePhotoErrorUserNotInTeam,

  /// Modifying deleted users is not allowed.
  DBTEAMMembersSetProfilePhotoErrorSetProfileDisallowed,

  /// (no description).
  DBTEAMMembersSetProfilePhotoErrorPhotoError,

  /// (no description).
  DBTEAMMembersSetProfilePhotoErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMMembersSetProfilePhotoErrorTag tag;

/// (no description). @note Ensure the `isPhotoError` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBACCOUNTSetProfilePhotoError *photoError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "user_not_found".
///
/// Description of the "user_not_found" tag state: No matching user found. The
/// provided team_member_id, email, or external_id does not exist on this team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserNotFound;

///
/// Initializes union class with tag state of "user_not_in_team".
///
/// Description of the "user_not_in_team" tag state: The user is not a member of
/// the team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserNotInTeam;

///
/// Initializes union class with tag state of "set_profile_disallowed".
///
/// Description of the "set_profile_disallowed" tag state: Modifying deleted
/// users is not allowed.
///
/// @return An initialized instance.
///
- (instancetype)initWithSetProfileDisallowed;

///
/// Initializes union class with tag state of "photo_error".
///
/// @param photoError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPhotoError:(DBACCOUNTSetProfilePhotoError *)photoError;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "user_not_found".
///
/// @return Whether the union's current tag state has value "user_not_found".
///
- (BOOL)isUserNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "user_not_in_team".
///
/// @return Whether the union's current tag state has value "user_not_in_team".
///
- (BOOL)isUserNotInTeam;

///
/// Retrieves whether the union's current tag state has value
/// "set_profile_disallowed".
///
/// @return Whether the union's current tag state has value
/// "set_profile_disallowed".
///
- (BOOL)isSetProfileDisallowed;

///
/// Retrieves whether the union's current tag state has value "photo_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `photoError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "photo_error".
///
- (BOOL)isPhotoError;

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
/// The serialization class for the `DBTEAMMembersSetProfilePhotoError` union.
///
@interface DBTEAMMembersSetProfilePhotoErrorSerializer : NSObject

///
/// Serializes `DBTEAMMembersSetProfilePhotoError` instances.
///
/// @param instance An instance of the `DBTEAMMembersSetProfilePhotoError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersSetProfilePhotoError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMMembersSetProfilePhotoError *)instance;

///
/// Deserializes `DBTEAMMembersSetProfilePhotoError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersSetProfilePhotoError` API object.
///
/// @return An instantiation of the `DBTEAMMembersSetProfilePhotoError` object.
///
+ (DBTEAMMembersSetProfilePhotoError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
