///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGAlertRecipientsSettingType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AlertRecipientsSettingType` union.
///
/// Alert recipients setting type
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGAlertRecipientsSettingType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGAlertRecipientsSettingTypeTag` enum type represents the
/// possible tag states with which the `DBTEAMLOGAlertRecipientsSettingType`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGAlertRecipientsSettingTypeTag){
    /// (no description).
    DBTEAMLOGAlertRecipientsSettingTypeCustomList,

    /// (no description).
    DBTEAMLOGAlertRecipientsSettingTypeInvalid,

    /// (no description).
    DBTEAMLOGAlertRecipientsSettingTypeNone,

    /// (no description).
    DBTEAMLOGAlertRecipientsSettingTypeTeamAdmins,

    /// (no description).
    DBTEAMLOGAlertRecipientsSettingTypeOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGAlertRecipientsSettingTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "custom_list".
///
/// @return An initialized instance.
///
- (instancetype)initWithCustomList;

///
/// Initializes union class with tag state of "invalid".
///
/// @return An initialized instance.
///
- (instancetype)initWithInvalid;

///
/// Initializes union class with tag state of "none".
///
/// @return An initialized instance.
///
- (instancetype)initWithNone;

///
/// Initializes union class with tag state of "team_admins".
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamAdmins;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "custom_list".
///
/// @return Whether the union's current tag state has value "custom_list".
///
- (BOOL)isCustomList;

///
/// Retrieves whether the union's current tag state has value "invalid".
///
/// @return Whether the union's current tag state has value "invalid".
///
- (BOOL)isInvalid;

///
/// Retrieves whether the union's current tag state has value "none".
///
/// @return Whether the union's current tag state has value "none".
///
- (BOOL)isNone;

///
/// Retrieves whether the union's current tag state has value "team_admins".
///
/// @return Whether the union's current tag state has value "team_admins".
///
- (BOOL)isTeamAdmins;

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
/// The serialization class for the `DBTEAMLOGAlertRecipientsSettingType` union.
///
@interface DBTEAMLOGAlertRecipientsSettingTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGAlertRecipientsSettingType` instances.
///
/// @param instance An instance of the `DBTEAMLOGAlertRecipientsSettingType` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGAlertRecipientsSettingType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGAlertRecipientsSettingType *)instance;

///
/// Deserializes `DBTEAMLOGAlertRecipientsSettingType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGAlertRecipientsSettingType` API object.
///
/// @return An instantiation of the `DBTEAMLOGAlertRecipientsSettingType`
/// object.
///
+ (DBTEAMLOGAlertRecipientsSettingType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
