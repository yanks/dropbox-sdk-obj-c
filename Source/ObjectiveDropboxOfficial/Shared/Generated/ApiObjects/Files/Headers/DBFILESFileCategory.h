///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESFileCategory;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileCategory` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESFileCategory : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESFileCategoryTag` enum type represents the possible tag states
/// with which the `DBFILESFileCategory` union can exist.
typedef NS_ENUM(NSInteger, DBFILESFileCategoryTag) {
  /// jpg, png, gif, and more.
  DBFILESFileCategoryImage,

  /// doc, docx, txt, and more.
  DBFILESFileCategoryDocument,

  /// pdf.
  DBFILESFileCategoryPdf,

  /// xlsx, xls, csv, and more.
  DBFILESFileCategorySpreadsheet,

  /// ppt, pptx, key, and more.
  DBFILESFileCategoryPresentation,

  /// mp3, wav, mid, and more.
  DBFILESFileCategoryAudio,

  /// mov, wmv, mp4, and more.
  DBFILESFileCategoryVideo,

  /// dropbox folder.
  DBFILESFileCategoryFolder,

  /// dropbox paper doc.
  DBFILESFileCategoryPaper,

  /// any file not in one of the categories above.
  DBFILESFileCategoryOthers,

  /// (no description).
  DBFILESFileCategoryOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESFileCategoryTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "image".
///
/// Description of the "image" tag state: jpg, png, gif, and more.
///
/// @return An initialized instance.
///
- (instancetype)initWithImage;

///
/// Initializes union class with tag state of "document".
///
/// Description of the "document" tag state: doc, docx, txt, and more.
///
/// @return An initialized instance.
///
- (instancetype)initWithDocument;

///
/// Initializes union class with tag state of "pdf".
///
/// Description of the "pdf" tag state: pdf.
///
/// @return An initialized instance.
///
- (instancetype)initWithPdf;

///
/// Initializes union class with tag state of "spreadsheet".
///
/// Description of the "spreadsheet" tag state: xlsx, xls, csv, and more.
///
/// @return An initialized instance.
///
- (instancetype)initWithSpreadsheet;

///
/// Initializes union class with tag state of "presentation".
///
/// Description of the "presentation" tag state: ppt, pptx, key, and more.
///
/// @return An initialized instance.
///
- (instancetype)initWithPresentation;

///
/// Initializes union class with tag state of "audio".
///
/// Description of the "audio" tag state: mp3, wav, mid, and more.
///
/// @return An initialized instance.
///
- (instancetype)initWithAudio;

///
/// Initializes union class with tag state of "video".
///
/// Description of the "video" tag state: mov, wmv, mp4, and more.
///
/// @return An initialized instance.
///
- (instancetype)initWithVideo;

///
/// Initializes union class with tag state of "folder".
///
/// Description of the "folder" tag state: dropbox folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithFolder;

///
/// Initializes union class with tag state of "paper".
///
/// Description of the "paper" tag state: dropbox paper doc.
///
/// @return An initialized instance.
///
- (instancetype)initWithPaper;

///
/// Initializes union class with tag state of "others".
///
/// Description of the "others" tag state: any file not in one of the categories
/// above.
///
/// @return An initialized instance.
///
- (instancetype)initWithOthers;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "image".
///
/// @return Whether the union's current tag state has value "image".
///
- (BOOL)isImage;

///
/// Retrieves whether the union's current tag state has value "document".
///
/// @return Whether the union's current tag state has value "document".
///
- (BOOL)isDocument;

///
/// Retrieves whether the union's current tag state has value "pdf".
///
/// @return Whether the union's current tag state has value "pdf".
///
- (BOOL)isPdf;

///
/// Retrieves whether the union's current tag state has value "spreadsheet".
///
/// @return Whether the union's current tag state has value "spreadsheet".
///
- (BOOL)isSpreadsheet;

///
/// Retrieves whether the union's current tag state has value "presentation".
///
/// @return Whether the union's current tag state has value "presentation".
///
- (BOOL)isPresentation;

///
/// Retrieves whether the union's current tag state has value "audio".
///
/// @return Whether the union's current tag state has value "audio".
///
- (BOOL)isAudio;

///
/// Retrieves whether the union's current tag state has value "video".
///
/// @return Whether the union's current tag state has value "video".
///
- (BOOL)isVideo;

///
/// Retrieves whether the union's current tag state has value "folder".
///
/// @return Whether the union's current tag state has value "folder".
///
- (BOOL)isFolder;

///
/// Retrieves whether the union's current tag state has value "paper".
///
/// @return Whether the union's current tag state has value "paper".
///
- (BOOL)isPaper;

///
/// Retrieves whether the union's current tag state has value "others".
///
/// @return Whether the union's current tag state has value "others".
///
- (BOOL)isOthers;

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
/// The serialization class for the `DBFILESFileCategory` union.
///
@interface DBFILESFileCategorySerializer : NSObject

///
/// Serializes `DBFILESFileCategory` instances.
///
/// @param instance An instance of the `DBFILESFileCategory` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESFileCategory` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESFileCategory *)instance;

///
/// Deserializes `DBFILESFileCategory` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESFileCategory` API object.
///
/// @return An instantiation of the `DBFILESFileCategory` object.
///
+ (DBFILESFileCategory *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
