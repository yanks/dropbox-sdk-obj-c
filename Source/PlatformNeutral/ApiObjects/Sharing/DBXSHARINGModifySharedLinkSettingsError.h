///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGModifySharedLinkSettingsError;
@class DBXSHARINGSharedLinkSettingsError;

/// 
/// The `DBXSHARINGModifySharedLinkSettingsError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGModifySharedLinkSettingsError : NSObject <DBXSerializable> 

/// The `DBXSHARINGModifySharedLinkSettingsErrorTag` enum type represents the
/// possible tag states that the `DBXSHARINGModifySharedLinkSettingsError` union
/// can exist in.
typedef NS_ENUM(NSInteger, DBXSHARINGModifySharedLinkSettingsErrorTag) {
    /// The shared link wasn't found
    DBXSHARINGModifySharedLinkSettingsErrorSharedLinkNotFound,

    /// The caller is not allowed to access this shared link
    DBXSHARINGModifySharedLinkSettingsErrorSharedLinkAccessDenied,

    /// (no description).
    DBXSHARINGModifySharedLinkSettingsErrorOther,

    /// There is an error with the given settings
    DBXSHARINGModifySharedLinkSettingsErrorSettingsError,

    /// The caller's email should be verified
    DBXSHARINGModifySharedLinkSettingsErrorEmailNotVerified,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXSHARINGModifySharedLinkSettingsErrorTag tag;

/// There is an error with the given settings
@property (nonatomic) DBXSHARINGSharedLinkSettingsError * _Nonnull settingsError;

/// Initializes union class with tag state of `SharedLinkNotFound`.
- (nonnull instancetype)initWithSharedLinkNotFound;

/// Initializes union class with tag state of `SharedLinkAccessDenied`.
- (nonnull instancetype)initWithSharedLinkAccessDenied;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Initializes union class with tag state of `SettingsError`.
- (nonnull instancetype)initWithSettingsError:(DBXSHARINGSharedLinkSettingsError * _Nonnull)settingsError;

/// Initializes union class with tag state of `EmailNotVerified`.
- (nonnull instancetype)initWithEmailNotVerified;

/// Returns whether the union's current tag state has value
/// `SharedLinkNotFound`.
- (BOOL)isSharedLinkNotFound;

/// Returns whether the union's current tag state has value
/// `SharedLinkAccessDenied`.
- (BOOL)isSharedLinkAccessDenied;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns whether the union's current tag state has value `SettingsError`.
- (BOOL)isSettingsError;

/// Returns whether the union's current tag state has value `EmailNotVerified`.
- (BOOL)isEmailNotVerified;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DBXSHARINGModifySharedLinkSettingsError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGModifySharedLinkSettingsError`
/// union.
/// 
@interface DBXSHARINGModifySharedLinkSettingsErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGModifySharedLinkSettingsError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGModifySharedLinkSettingsError * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGModifySharedLinkSettingsError`
/// object from a json-compatible dictionary representation.
+ (DBXSHARINGModifySharedLinkSettingsError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end