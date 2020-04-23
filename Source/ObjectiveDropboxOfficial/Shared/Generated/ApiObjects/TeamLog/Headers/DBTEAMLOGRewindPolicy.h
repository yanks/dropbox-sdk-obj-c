///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGRewindPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RewindPolicy` union.
///
/// Policy for controlling whether team members can rewind
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGRewindPolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGRewindPolicyTag` enum type represents the possible tag states
/// with which the `DBTEAMLOGRewindPolicy` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGRewindPolicyTag){
    /// (no description).
    DBTEAMLOGRewindPolicyAdminsOnly,

    /// (no description).
    DBTEAMLOGRewindPolicyEveryone,

    /// (no description).
    DBTEAMLOGRewindPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGRewindPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "admins_only".
///
/// @return An initialized instance.
///
- (instancetype)initWithAdminsOnly;

///
/// Initializes union class with tag state of "everyone".
///
/// @return An initialized instance.
///
- (instancetype)initWithEveryone;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "admins_only".
///
/// @return Whether the union's current tag state has value "admins_only".
///
- (BOOL)isAdminsOnly;

///
/// Retrieves whether the union's current tag state has value "everyone".
///
/// @return Whether the union's current tag state has value "everyone".
///
- (BOOL)isEveryone;

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
/// The serialization class for the `DBTEAMLOGRewindPolicy` union.
///
@interface DBTEAMLOGRewindPolicySerializer : NSObject

///
/// Serializes `DBTEAMLOGRewindPolicy` instances.
///
/// @param instance An instance of the `DBTEAMLOGRewindPolicy` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGRewindPolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGRewindPolicy *)instance;

///
/// Deserializes `DBTEAMLOGRewindPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGRewindPolicy` API object.
///
/// @return An instantiation of the `DBTEAMLOGRewindPolicy` object.
///
+ (DBTEAMLOGRewindPolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
