///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGChangedEnterpriseAdminRoleDetails;
@class DBTEAMLOGFedAdminRole;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ChangedEnterpriseAdminRoleDetails` struct.
///
/// Changed enterprise admin role.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGChangedEnterpriseAdminRoleDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The member&#x2019s previous enterprise admin role.
@property (nonatomic, readonly) DBTEAMLOGFedAdminRole *previousValue;

/// The member&#x2019s new enterprise admin role.
@property (nonatomic, readonly) DBTEAMLOGFedAdminRole *dNewValue;

/// The name of the member&#x2019s team.
@property (nonatomic, readonly, copy) NSString *teamName;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param previousValue The member&#x2019s previous enterprise admin role.
/// @param dNewValue The member&#x2019s new enterprise admin role.
/// @param teamName The name of the member&#x2019s team.
///
/// @return An initialized instance.
///
- (instancetype)initWithPreviousValue:(DBTEAMLOGFedAdminRole *)previousValue
                            dNewValue:(DBTEAMLOGFedAdminRole *)dNewValue
                             teamName:(NSString *)teamName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ChangedEnterpriseAdminRoleDetails` struct.
///
@interface DBTEAMLOGChangedEnterpriseAdminRoleDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGChangedEnterpriseAdminRoleDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGChangedEnterpriseAdminRoleDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGChangedEnterpriseAdminRoleDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGChangedEnterpriseAdminRoleDetails *)instance;

///
/// Deserializes `DBTEAMLOGChangedEnterpriseAdminRoleDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGChangedEnterpriseAdminRoleDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGChangedEnterpriseAdminRoleDetails`
/// object.
///
+ (DBTEAMLOGChangedEnterpriseAdminRoleDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
