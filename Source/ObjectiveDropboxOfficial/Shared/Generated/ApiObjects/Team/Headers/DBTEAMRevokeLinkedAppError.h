///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMRevokeLinkedAppError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RevokeLinkedAppError` union.
///
/// Error returned by `linkedAppsRevokeLinkedApp`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMRevokeLinkedAppError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMRevokeLinkedAppErrorTag` enum type represents the possible tag
/// states with which the `DBTEAMRevokeLinkedAppError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMRevokeLinkedAppErrorTag){
    /// Application not found.
    DBTEAMRevokeLinkedAppErrorAppNotFound,

    /// Member not found.
    DBTEAMRevokeLinkedAppErrorMemberNotFound,

    /// App folder removal is not supported.
    DBTEAMRevokeLinkedAppErrorAppFolderRemovalNotSupported,

    /// (no description).
    DBTEAMRevokeLinkedAppErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMRevokeLinkedAppErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "app_not_found".
///
/// Description of the "app_not_found" tag state: Application not found.
///
/// @return An initialized instance.
///
- (instancetype)initWithAppNotFound;

///
/// Initializes union class with tag state of "member_not_found".
///
/// Description of the "member_not_found" tag state: Member not found.
///
/// @return An initialized instance.
///
- (instancetype)initWithMemberNotFound;

///
/// Initializes union class with tag state of
/// "app_folder_removal_not_supported".
///
/// Description of the "app_folder_removal_not_supported" tag state: App folder
/// removal is not supported.
///
/// @return An initialized instance.
///
- (instancetype)initWithAppFolderRemovalNotSupported;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "app_not_found".
///
/// @return Whether the union's current tag state has value "app_not_found".
///
- (BOOL)isAppNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "member_not_found".
///
/// @return Whether the union's current tag state has value "member_not_found".
///
- (BOOL)isMemberNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "app_folder_removal_not_supported".
///
/// @return Whether the union's current tag state has value
/// "app_folder_removal_not_supported".
///
- (BOOL)isAppFolderRemovalNotSupported;

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
/// The serialization class for the `DBTEAMRevokeLinkedAppError` union.
///
@interface DBTEAMRevokeLinkedAppErrorSerializer : NSObject

///
/// Serializes `DBTEAMRevokeLinkedAppError` instances.
///
/// @param instance An instance of the `DBTEAMRevokeLinkedAppError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMRevokeLinkedAppError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMRevokeLinkedAppError *)instance;

///
/// Deserializes `DBTEAMRevokeLinkedAppError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMRevokeLinkedAppError` API object.
///
/// @return An instantiation of the `DBTEAMRevokeLinkedAppError` object.
///
+ (DBTEAMRevokeLinkedAppError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
