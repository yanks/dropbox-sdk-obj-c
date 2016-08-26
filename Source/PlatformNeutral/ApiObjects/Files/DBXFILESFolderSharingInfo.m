///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESFolderSharingInfo.h"
#import "DBXFILESSharingInfo.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESFolderSharingInfo 

- (instancetype)initWithReadOnly:(NSNumber *)readOnly parentSharedFolderId:(NSString *)parentSharedFolderId sharedFolderId:(NSString *)sharedFolderId {
    [DBXStoneValidators nullableValidator:[DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"[-_0-9a-zA-Z:]+"]](parentSharedFolderId);
    [DBXStoneValidators nullableValidator:[DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"[-_0-9a-zA-Z:]+"]](sharedFolderId);

    self = [super initWithReadOnly:readOnly];
    if (self != nil) {
        _parentSharedFolderId = parentSharedFolderId;
        _sharedFolderId = sharedFolderId;
    }
    return self;
}

- (instancetype)initWithReadOnly:(NSNumber *)readOnly {
    return [self initWithReadOnly:readOnly parentSharedFolderId:nil sharedFolderId:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESFolderSharingInfoSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESFolderSharingInfoSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESFolderSharingInfoSerializer serialize:self] description];
}

@end


@implementation DBXFILESFolderSharingInfoSerializer 

+ (NSDictionary *)serialize:(DBXFILESFolderSharingInfo *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"read_only"] = valueObj.readOnly;
    if (valueObj.parentSharedFolderId) {
        jsonDict[@"parent_shared_folder_id"] = valueObj.parentSharedFolderId;
    }
    if (valueObj.sharedFolderId) {
        jsonDict[@"shared_folder_id"] = valueObj.sharedFolderId;
    }

    return jsonDict;
}

+ (DBXFILESFolderSharingInfo *)deserialize:(NSDictionary *)valueDict {
    NSNumber *readOnly = valueDict[@"read_only"];
    NSString *parentSharedFolderId = valueDict[@"parent_shared_folder_id"] ?: nil;
    NSString *sharedFolderId = valueDict[@"shared_folder_id"] ?: nil;

    return [[DBXFILESFolderSharingInfo alloc] initWithReadOnly:readOnly parentSharedFolderId:parentSharedFolderId sharedFolderId:sharedFolderId];
}

@end