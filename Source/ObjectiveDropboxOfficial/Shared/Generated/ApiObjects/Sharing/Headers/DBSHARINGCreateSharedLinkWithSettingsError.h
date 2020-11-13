///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESLookupError;
@class DBSHARINGCreateSharedLinkWithSettingsError;
@class DBSHARINGSharedLinkAlreadyExistsMetadata;
@class DBSHARINGSharedLinkSettingsError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `CreateSharedLinkWithSettingsError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGCreateSharedLinkWithSettingsError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGCreateSharedLinkWithSettingsErrorTag` enum type represents the
/// possible tag states with which the
/// `DBSHARINGCreateSharedLinkWithSettingsError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBSHARINGCreateSharedLinkWithSettingsErrorTag){
    /// (no description).
    DBSHARINGCreateSharedLinkWithSettingsErrorPath,

    /// This user's email address is not verified. This functionality is only
    /// available on accounts with a verified email address. Users can verify
    /// their email address here https://www.dropbox.com/help/317.
    DBSHARINGCreateSharedLinkWithSettingsErrorEmailNotVerified,

    /// The shared link already exists. You can call `listSharedLinks` to get
    /// the  existing link, or use the provided metadata if it is returned.
    DBSHARINGCreateSharedLinkWithSettingsErrorSharedLinkAlreadyExists,

    /// There is an error with the given settings.
    DBSHARINGCreateSharedLinkWithSettingsErrorSettingsError,

    /// Access to the requested path is forbidden.
    DBSHARINGCreateSharedLinkWithSettingsErrorAccessDenied,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGCreateSharedLinkWithSettingsErrorTag tag;

/// (no description). @note Ensure the `isPath` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESLookupError *path;

/// The shared link already exists. You can call `listSharedLinks` to get the
/// existing link, or use the provided metadata if it is returned. @note Ensure
/// the `isSharedLinkAlreadyExists` method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property (nonatomic, readonly, nullable) DBSHARINGSharedLinkAlreadyExistsMetadata *sharedLinkAlreadyExists;

/// There is an error with the given settings. @note Ensure the
/// `isSettingsError` method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property (nonatomic, readonly) DBSHARINGSharedLinkSettingsError *settingsError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path".
///
/// @param path (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(DBFILESLookupError *)path;

///
/// Initializes union class with tag state of "email_not_verified".
///
/// Description of the "email_not_verified" tag state: This user's email address
/// is not verified. This functionality is only available on accounts with a
/// verified email address. Users can verify their email address here
/// https://www.dropbox.com/help/317.
///
/// @return An initialized instance.
///
- (instancetype)initWithEmailNotVerified;

///
/// Initializes union class with tag state of "shared_link_already_exists".
///
/// Description of the "shared_link_already_exists" tag state: The shared link
/// already exists. You can call `listSharedLinks` to get the  existing link, or
/// use the provided metadata if it is returned.
///
/// @param sharedLinkAlreadyExists The shared link already exists. You can call
/// `listSharedLinks` to get the  existing link, or use the provided metadata if
/// it is returned.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedLinkAlreadyExists:
    (nullable DBSHARINGSharedLinkAlreadyExistsMetadata *)sharedLinkAlreadyExists;

///
/// Initializes union class with tag state of "settings_error".
///
/// Description of the "settings_error" tag state: There is an error with the
/// given settings.
///
/// @param settingsError There is an error with the given settings.
///
/// @return An initialized instance.
///
- (instancetype)initWithSettingsError:(DBSHARINGSharedLinkSettingsError *)settingsError;

///
/// Initializes union class with tag state of "access_denied".
///
/// Description of the "access_denied" tag state: Access to the requested path
/// is forbidden.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessDenied;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "path".
///
/// @note Call this method and ensure it returns true before accessing the
/// `path` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path".
///
- (BOOL)isPath;

///
/// Retrieves whether the union's current tag state has value
/// "email_not_verified".
///
/// @return Whether the union's current tag state has value
/// "email_not_verified".
///
- (BOOL)isEmailNotVerified;

///
/// Retrieves whether the union's current tag state has value
/// "shared_link_already_exists".
///
/// @note Call this method and ensure it returns true before accessing the
/// `sharedLinkAlreadyExists` property, otherwise a runtime exception will be
/// thrown.
///
/// @return Whether the union's current tag state has value
/// "shared_link_already_exists".
///
- (BOOL)isSharedLinkAlreadyExists;

///
/// Retrieves whether the union's current tag state has value "settings_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `settingsError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "settings_error".
///
- (BOOL)isSettingsError;

///
/// Retrieves whether the union's current tag state has value "access_denied".
///
/// @return Whether the union's current tag state has value "access_denied".
///
- (BOOL)isAccessDenied;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGCreateSharedLinkWithSettingsError`
/// union.
///
@interface DBSHARINGCreateSharedLinkWithSettingsErrorSerializer : NSObject

///
/// Serializes `DBSHARINGCreateSharedLinkWithSettingsError` instances.
///
/// @param instance An instance of the
/// `DBSHARINGCreateSharedLinkWithSettingsError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGCreateSharedLinkWithSettingsError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGCreateSharedLinkWithSettingsError *)instance;

///
/// Deserializes `DBSHARINGCreateSharedLinkWithSettingsError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGCreateSharedLinkWithSettingsError` API object.
///
/// @return An instantiation of the `DBSHARINGCreateSharedLinkWithSettingsError`
/// object.
///
+ (DBSHARINGCreateSharedLinkWithSettingsError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
