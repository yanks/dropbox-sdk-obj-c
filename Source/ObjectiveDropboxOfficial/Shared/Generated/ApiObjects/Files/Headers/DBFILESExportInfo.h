///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESExportInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ExportInfo` struct.
///
/// Export information for a file.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESExportInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Format to which the file can be exported to.
@property (nonatomic, readonly, copy, nullable) NSString *exportAs;

/// Additional formats to which the file can be exported. These values can be
/// specified as the export_format in /files/export.
@property (nonatomic, readonly, nullable) NSArray<NSString *> *exportOptions;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param exportAs Format to which the file can be exported to.
/// @param exportOptions Additional formats to which the file can be exported.
/// These values can be specified as the export_format in /files/export.
///
/// @return An initialized instance.
///
- (instancetype)initWithExportAs:(nullable NSString *)exportAs
                   exportOptions:(nullable NSArray<NSString *> *)exportOptions;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ExportInfo` struct.
///
@interface DBFILESExportInfoSerializer : NSObject

///
/// Serializes `DBFILESExportInfo` instances.
///
/// @param instance An instance of the `DBFILESExportInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESExportInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESExportInfo *)instance;

///
/// Deserializes `DBFILESExportInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESExportInfo` API object.
///
/// @return An instantiation of the `DBFILESExportInfo` object.
///
+ (DBFILESExportInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
