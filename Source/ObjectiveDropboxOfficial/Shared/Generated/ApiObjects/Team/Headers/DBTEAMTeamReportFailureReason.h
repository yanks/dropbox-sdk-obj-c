///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMTeamReportFailureReason;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamReportFailureReason` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMTeamReportFailureReason : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMTeamReportFailureReasonTag` enum type represents the possible tag
/// states with which the `DBTEAMTeamReportFailureReason` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMTeamReportFailureReasonTag) {
  /// We couldn't create the report, but we think this was a fluke. Everything
  /// should work if you try it again.
  DBTEAMTeamReportFailureReasonTemporaryError,

  /// Too many other reports are being created right now. Try creating this
  /// report again once the others finish.
  DBTEAMTeamReportFailureReasonManyReportsAtOnce,

  /// We couldn't create the report. Try creating the report again with less
  /// data.
  DBTEAMTeamReportFailureReasonTooMuchData,

  /// (no description).
  DBTEAMTeamReportFailureReasonOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMTeamReportFailureReasonTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "temporary_error".
///
/// Description of the "temporary_error" tag state: We couldn't create the
/// report, but we think this was a fluke. Everything should work if you try it
/// again.
///
/// @return An initialized instance.
///
- (instancetype)initWithTemporaryError;

///
/// Initializes union class with tag state of "many_reports_at_once".
///
/// Description of the "many_reports_at_once" tag state: Too many other reports
/// are being created right now. Try creating this report again once the others
/// finish.
///
/// @return An initialized instance.
///
- (instancetype)initWithManyReportsAtOnce;

///
/// Initializes union class with tag state of "too_much_data".
///
/// Description of the "too_much_data" tag state: We couldn't create the report.
/// Try creating the report again with less data.
///
/// @return An initialized instance.
///
- (instancetype)initWithTooMuchData;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "temporary_error".
///
/// @return Whether the union's current tag state has value "temporary_error".
///
- (BOOL)isTemporaryError;

///
/// Retrieves whether the union's current tag state has value
/// "many_reports_at_once".
///
/// @return Whether the union's current tag state has value
/// "many_reports_at_once".
///
- (BOOL)isManyReportsAtOnce;

///
/// Retrieves whether the union's current tag state has value "too_much_data".
///
/// @return Whether the union's current tag state has value "too_much_data".
///
- (BOOL)isTooMuchData;

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
/// The serialization class for the `DBTEAMTeamReportFailureReason` union.
///
@interface DBTEAMTeamReportFailureReasonSerializer : NSObject

///
/// Serializes `DBTEAMTeamReportFailureReason` instances.
///
/// @param instance An instance of the `DBTEAMTeamReportFailureReason` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMTeamReportFailureReason` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMTeamReportFailureReason *)instance;

///
/// Deserializes `DBTEAMTeamReportFailureReason` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMTeamReportFailureReason` API object.
///
/// @return An instantiation of the `DBTEAMTeamReportFailureReason` object.
///
+ (DBTEAMTeamReportFailureReason *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
