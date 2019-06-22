///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGTeamMergeRequestReminderShownToPrimaryTeamDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamMergeRequestReminderShownToPrimaryTeamDetails` struct.
///
/// Sent a team merge request reminder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamMergeRequestReminderShownToPrimaryTeamDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The secondary team name.
@property (nonatomic, readonly, copy) NSString *secondaryTeam;

/// The name of the primary team admin the request was sent to.
@property (nonatomic, readonly, copy) NSString *sentTo;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param secondaryTeam The secondary team name.
/// @param sentTo The name of the primary team admin the request was sent to.
///
/// @return An initialized instance.
///
- (instancetype)initWithSecondaryTeam:(NSString *)secondaryTeam sentTo:(NSString *)sentTo;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the
/// `TeamMergeRequestReminderShownToPrimaryTeamDetails` struct.
///
@interface DBTEAMLOGTeamMergeRequestReminderShownToPrimaryTeamDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamMergeRequestReminderShownToPrimaryTeamDetails`
/// instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGTeamMergeRequestReminderShownToPrimaryTeamDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestReminderShownToPrimaryTeamDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:
    (DBTEAMLOGTeamMergeRequestReminderShownToPrimaryTeamDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamMergeRequestReminderShownToPrimaryTeamDetails`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestReminderShownToPrimaryTeamDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGTeamMergeRequestReminderShownToPrimaryTeamDetails` object.
///
+ (DBTEAMLOGTeamMergeRequestReminderShownToPrimaryTeamDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
