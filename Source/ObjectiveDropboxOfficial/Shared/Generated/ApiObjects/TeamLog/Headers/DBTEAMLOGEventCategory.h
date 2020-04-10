///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGEventCategory;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `EventCategory` union.
///
/// Category of events in event audit log.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGEventCategory : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGEventCategoryTag` enum type represents the possible tag states
/// with which the `DBTEAMLOGEventCategory` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGEventCategoryTag) {
  /// Events that apply to management of linked apps.
  DBTEAMLOGEventCategoryApps,

  /// Events that have to do with comments on files and Paper documents.
  DBTEAMLOGEventCategoryComments,

  /// Events that apply to linked devices on mobile, desktop and Web
  /// platforms.
  DBTEAMLOGEventCategoryDevices,

  /// Events that involve domain management feature: domain verification,
  /// invite enforcement and account capture.
  DBTEAMLOGEventCategoryDomains,

  /// Events that have to do with filesystem operations on files and folders:
  /// copy, move, delete, etc.
  DBTEAMLOGEventCategoryFileOperations,

  /// Events that apply to the file requests feature.
  DBTEAMLOGEventCategoryFileRequests,

  /// Events that involve group management.
  DBTEAMLOGEventCategoryGroups,

  /// Events that involve placing holds on content for litigation reasons
  DBTEAMLOGEventCategoryLegalHolds,

  /// Events that involve users signing in to or out of Dropbox.
  DBTEAMLOGEventCategoryLogins,

  /// Events that involve team member management.
  DBTEAMLOGEventCategoryMembers,

  /// Events that apply to Dropbox Paper.
  DBTEAMLOGEventCategoryPaper,

  /// Events that involve using, changing or resetting passwords.
  DBTEAMLOGEventCategoryPasswords,

  /// Events that concern generation of admin reports, including team activity
  /// and device usage.
  DBTEAMLOGEventCategoryReports,

  /// Events that apply to all types of sharing and collaboration.
  DBTEAMLOGEventCategorySharing,

  /// Events that apply to Dropbox Showcase.
  DBTEAMLOGEventCategoryShowcase,

  /// Events that involve using or configuring single sign-on as well as
  /// administrative policies concerning single sign-on.
  DBTEAMLOGEventCategorySso,

  /// Events that involve team folder management.
  DBTEAMLOGEventCategoryTeamFolders,

  /// Events that involve a change in team-wide policies.
  DBTEAMLOGEventCategoryTeamPolicies,

  /// Events that involve a change in the team profile.
  DBTEAMLOGEventCategoryTeamProfile,

  /// Events that involve using or configuring two factor authentication as
  /// well as administrative policies concerning two factor authentication.
  DBTEAMLOGEventCategoryTfa,

  /// Events that apply to cross-team trust establishment.
  DBTEAMLOGEventCategoryTrustedTeams,

  /// (no description).
  DBTEAMLOGEventCategoryOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGEventCategoryTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "apps".
///
/// Description of the "apps" tag state: Events that apply to management of
/// linked apps.
///
/// @return An initialized instance.
///
- (instancetype)initWithApps;

///
/// Initializes union class with tag state of "comments".
///
/// Description of the "comments" tag state: Events that have to do with
/// comments on files and Paper documents.
///
/// @return An initialized instance.
///
- (instancetype)initWithComments;

///
/// Initializes union class with tag state of "devices".
///
/// Description of the "devices" tag state: Events that apply to linked devices
/// on mobile, desktop and Web platforms.
///
/// @return An initialized instance.
///
- (instancetype)initWithDevices;

///
/// Initializes union class with tag state of "domains".
///
/// Description of the "domains" tag state: Events that involve domain
/// management feature: domain verification, invite enforcement and account
/// capture.
///
/// @return An initialized instance.
///
- (instancetype)initWithDomains;

///
/// Initializes union class with tag state of "file_operations".
///
/// Description of the "file_operations" tag state: Events that have to do with
/// filesystem operations on files and folders: copy, move, delete, etc.
///
/// @return An initialized instance.
///
- (instancetype)initWithFileOperations;

///
/// Initializes union class with tag state of "file_requests".
///
/// Description of the "file_requests" tag state: Events that apply to the file
/// requests feature.
///
/// @return An initialized instance.
///
- (instancetype)initWithFileRequests;

///
/// Initializes union class with tag state of "groups".
///
/// Description of the "groups" tag state: Events that involve group management.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroups;

///
/// Initializes union class with tag state of "legal_holds".
///
/// Description of the "legal_holds" tag state: Events that involve placing
/// holds on content for litigation reasons
///
/// @return An initialized instance.
///
- (instancetype)initWithLegalHolds;

///
/// Initializes union class with tag state of "logins".
///
/// Description of the "logins" tag state: Events that involve users signing in
/// to or out of Dropbox.
///
/// @return An initialized instance.
///
- (instancetype)initWithLogins;

///
/// Initializes union class with tag state of "members".
///
/// Description of the "members" tag state: Events that involve team member
/// management.
///
/// @return An initialized instance.
///
- (instancetype)initWithMembers;

///
/// Initializes union class with tag state of "paper".
///
/// Description of the "paper" tag state: Events that apply to Dropbox Paper.
///
/// @return An initialized instance.
///
- (instancetype)initWithPaper;

///
/// Initializes union class with tag state of "passwords".
///
/// Description of the "passwords" tag state: Events that involve using,
/// changing or resetting passwords.
///
/// @return An initialized instance.
///
- (instancetype)initWithPasswords;

///
/// Initializes union class with tag state of "reports".
///
/// Description of the "reports" tag state: Events that concern generation of
/// admin reports, including team activity and device usage.
///
/// @return An initialized instance.
///
- (instancetype)initWithReports;

///
/// Initializes union class with tag state of "sharing".
///
/// Description of the "sharing" tag state: Events that apply to all types of
/// sharing and collaboration.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharing;

///
/// Initializes union class with tag state of "showcase".
///
/// Description of the "showcase" tag state: Events that apply to Dropbox
/// Showcase.
///
/// @return An initialized instance.
///
- (instancetype)initWithShowcase;

///
/// Initializes union class with tag state of "sso".
///
/// Description of the "sso" tag state: Events that involve using or configuring
/// single sign-on as well as administrative policies concerning single sign-on.
///
/// @return An initialized instance.
///
- (instancetype)initWithSso;

///
/// Initializes union class with tag state of "team_folders".
///
/// Description of the "team_folders" tag state: Events that involve team folder
/// management.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamFolders;

///
/// Initializes union class with tag state of "team_policies".
///
/// Description of the "team_policies" tag state: Events that involve a change
/// in team-wide policies.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamPolicies;

///
/// Initializes union class with tag state of "team_profile".
///
/// Description of the "team_profile" tag state: Events that involve a change in
/// the team profile.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamProfile;

///
/// Initializes union class with tag state of "tfa".
///
/// Description of the "tfa" tag state: Events that involve using or configuring
/// two factor authentication as well as administrative policies concerning two
/// factor authentication.
///
/// @return An initialized instance.
///
- (instancetype)initWithTfa;

///
/// Initializes union class with tag state of "trusted_teams".
///
/// Description of the "trusted_teams" tag state: Events that apply to
/// cross-team trust establishment.
///
/// @return An initialized instance.
///
- (instancetype)initWithTrustedTeams;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "apps".
///
/// @return Whether the union's current tag state has value "apps".
///
- (BOOL)isApps;

///
/// Retrieves whether the union's current tag state has value "comments".
///
/// @return Whether the union's current tag state has value "comments".
///
- (BOOL)isComments;

///
/// Retrieves whether the union's current tag state has value "devices".
///
/// @return Whether the union's current tag state has value "devices".
///
- (BOOL)isDevices;

///
/// Retrieves whether the union's current tag state has value "domains".
///
/// @return Whether the union's current tag state has value "domains".
///
- (BOOL)isDomains;

///
/// Retrieves whether the union's current tag state has value "file_operations".
///
/// @return Whether the union's current tag state has value "file_operations".
///
- (BOOL)isFileOperations;

///
/// Retrieves whether the union's current tag state has value "file_requests".
///
/// @return Whether the union's current tag state has value "file_requests".
///
- (BOOL)isFileRequests;

///
/// Retrieves whether the union's current tag state has value "groups".
///
/// @return Whether the union's current tag state has value "groups".
///
- (BOOL)isGroups;

///
/// Retrieves whether the union's current tag state has value "legal_holds".
///
/// @return Whether the union's current tag state has value "legal_holds".
///
- (BOOL)isLegalHolds;

///
/// Retrieves whether the union's current tag state has value "logins".
///
/// @return Whether the union's current tag state has value "logins".
///
- (BOOL)isLogins;

///
/// Retrieves whether the union's current tag state has value "members".
///
/// @return Whether the union's current tag state has value "members".
///
- (BOOL)isMembers;

///
/// Retrieves whether the union's current tag state has value "paper".
///
/// @return Whether the union's current tag state has value "paper".
///
- (BOOL)isPaper;

///
/// Retrieves whether the union's current tag state has value "passwords".
///
/// @return Whether the union's current tag state has value "passwords".
///
- (BOOL)isPasswords;

///
/// Retrieves whether the union's current tag state has value "reports".
///
/// @return Whether the union's current tag state has value "reports".
///
- (BOOL)isReports;

///
/// Retrieves whether the union's current tag state has value "sharing".
///
/// @return Whether the union's current tag state has value "sharing".
///
- (BOOL)isSharing;

///
/// Retrieves whether the union's current tag state has value "showcase".
///
/// @return Whether the union's current tag state has value "showcase".
///
- (BOOL)isShowcase;

///
/// Retrieves whether the union's current tag state has value "sso".
///
/// @return Whether the union's current tag state has value "sso".
///
- (BOOL)isSso;

///
/// Retrieves whether the union's current tag state has value "team_folders".
///
/// @return Whether the union's current tag state has value "team_folders".
///
- (BOOL)isTeamFolders;

///
/// Retrieves whether the union's current tag state has value "team_policies".
///
/// @return Whether the union's current tag state has value "team_policies".
///
- (BOOL)isTeamPolicies;

///
/// Retrieves whether the union's current tag state has value "team_profile".
///
/// @return Whether the union's current tag state has value "team_profile".
///
- (BOOL)isTeamProfile;

///
/// Retrieves whether the union's current tag state has value "tfa".
///
/// @return Whether the union's current tag state has value "tfa".
///
- (BOOL)isTfa;

///
/// Retrieves whether the union's current tag state has value "trusted_teams".
///
/// @return Whether the union's current tag state has value "trusted_teams".
///
- (BOOL)isTrustedTeams;

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
/// The serialization class for the `DBTEAMLOGEventCategory` union.
///
@interface DBTEAMLOGEventCategorySerializer : NSObject

///
/// Serializes `DBTEAMLOGEventCategory` instances.
///
/// @param instance An instance of the `DBTEAMLOGEventCategory` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGEventCategory` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGEventCategory *)instance;

///
/// Deserializes `DBTEAMLOGEventCategory` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGEventCategory` API object.
///
/// @return An instantiation of the `DBTEAMLOGEventCategory` object.
///
+ (DBTEAMLOGEventCategory *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
