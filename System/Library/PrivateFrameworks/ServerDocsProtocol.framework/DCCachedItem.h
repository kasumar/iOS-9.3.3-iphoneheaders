/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DCCachedItem.h>
@class DCRelativePath, DCFullPath, NSData, NSDictionary, NSDate;


@protocol DCCachedItem
@property (retain,readonly) DCRelativePath * relativePath; 
@property (retain,readonly) DCFullPath * fullPath; 
@property (retain,readonly) NSData * documentIdentifier; 
@property (retain,readonly) NSData * versionIdentifier; 
@property (retain,readonly) NSDictionary * localMetadata; 
@property (retain,readonly) NSDictionary * otherMetadata; 
@property (retain,readonly) NSDictionary * remoteMetadata; 
@property (retain,readonly) NSDictionary * parentContentsMetadata; 
@property (readonly) BOOL existsOnDisk; 
@property (readonly) BOOL isRoot; 
@property (readonly) BOOL isUpToDate; 
@property (readonly) BOOL isRemoteMetadataUpToDate; 
@property (readonly) BOOL isContentsUpToDate; 
@property (retain,readonly) NSDictionary * remoteMetadataFromDisk; 
@property (retain,readonly) NSDate * lastRemoteMetadataUpdate; 
@property (retain,readonly) NSData * lastRemoteMetadataVersionIdentifier; 
@property (retain) NSDate * lastUploadDate; 
@property (retain) NSDate * lastDownloadDate; 
@required
-(DCFullPath *)fullPath;
-(NSData *)documentIdentifier;
-(BOOL)hasBeenDownloaded;
-(BOOL)isRoot;
-(NSData *)versionIdentifier;
-(BOOL)needsUpload;
-(id)parent;
-(DCRelativePath *)relativePath;
-(NSDictionary *)remoteMetadata;
-(unsigned long long)relativeAge;
-(NSDictionary *)localMetadata;
-(NSDate *)lastRemoteMetadataUpdate;
-(NSDictionary *)otherMetadata;
-(BOOL)updateDocumentIdentifier:(id)arg1;
-(void)setLastDownloadDate:(id)arg1;
-(void)updateItemFromResponseContainer:(id)arg1;
-(NSDictionary *)parentContentsMetadata;
-(BOOL)isUpToDate;
-(BOOL)needsDownload;
-(BOOL)needsInitialUpload;
-(BOOL)needsInitialSynchronization;
-(void)setLastUploadDate:(id)arg1;
-(BOOL)needsInitialDownload;
-(BOOL)existsOnDisk;
-(NSDictionary *)remoteMetadataFromDisk;
-(NSData *)lastRemoteMetadataVersionIdentifier;
-(NSDate *)lastUploadDate;
-(BOOL)hasBeenUploaded;
-(NSDate *)lastDownloadDate;
-(BOOL)existsOnServer;
-(BOOL)hasBeenRemoved;
-(void)setHasBeenRemoved:(BOOL)arg1;
-(void)clearRemoteMetadata;
-(void)renameRelativePath:(id)arg1;
-(BOOL)isRemoteMetadataUpToDate;
-(BOOL)isContentsUpToDate;

@end


@class DCRelativePath, DCFullPath, NSData, NSDictionary, NSDate, DCService;

@interface DCCachedItem : NSObject <DCCachedItem> {

	DCRelativePath* _path;
	NSData* _documentIdentifier;
	BOOL _hasBeenRemoved;
	DCService* _service;

}

@property (nonatomic,retain) DCService * service;                                      //@synthesize service=_service - In the implementation block
@property (retain,readonly) DCRelativePath * relativePath;                             //@synthesize path=_path - In the implementation block
@property (retain,readonly) DCFullPath * fullPath; 
@property (retain,readonly) NSData * documentIdentifier; 
@property (retain,readonly) NSData * versionIdentifier; 
@property (retain,readonly) NSDictionary * localMetadata; 
@property (retain,readonly) NSDictionary * otherMetadata; 
@property (retain,readonly) NSDictionary * remoteMetadata; 
@property (retain,readonly) NSDictionary * parentContentsMetadata; 
@property (readonly) BOOL existsOnDisk; 
@property (readonly) BOOL isRoot; 
@property (readonly) BOOL isUpToDate; 
@property (readonly) BOOL isRemoteMetadataUpToDate; 
@property (readonly) BOOL isContentsUpToDate; 
@property (retain,readonly) NSDictionary * remoteMetadataFromDisk; 
@property (retain,readonly) NSDate * lastRemoteMetadataUpdate; 
@property (retain,readonly) NSData * lastRemoteMetadataVersionIdentifier; 
@property (retain) NSDate * lastUploadDate; 
@property (retain) NSDate * lastDownloadDate; 
-(id)description;
-(id)debugDescription;
-(DCFullPath *)fullPath;
-(void)setService:(DCService *)arg1 ;
-(DCService *)service;
-(NSData *)documentIdentifier;
-(BOOL)hasBeenDownloaded;
-(id)database;
-(BOOL)isRoot;
-(NSData *)versionIdentifier;
-(id)initWithRelativePath:(id)arg1 ;
-(BOOL)needsUpload;
-(id)parent;
-(DCRelativePath *)relativePath;
-(NSDictionary *)remoteMetadata;
-(unsigned long long)relativeAge;
-(NSDictionary *)localMetadata;
-(NSDate *)lastRemoteMetadataUpdate;
-(NSDictionary *)otherMetadata;
-(BOOL)updateDocumentIdentifier:(id)arg1 ;
-(void)setLastDownloadDate:(NSDate *)arg1 ;
-(void)updateItemFromResponseContainer:(id)arg1 ;
-(NSDictionary *)parentContentsMetadata;
-(BOOL)isUpToDate;
-(BOOL)needsDownload;
-(BOOL)needsInitialUpload;
-(BOOL)needsInitialSynchronization;
-(void)setLastUploadDate:(NSDate *)arg1 ;
-(BOOL)needsInitialDownload;
-(BOOL)existsOnDisk;
-(NSDictionary *)remoteMetadataFromDisk;
-(id)_pathsKeyString;
-(id)_dataKey;
-(id)_storedLocalMetadataWithoutNeedingLocking;
-(id)_contentsFullPath;
-(id)_fileSystemMetadataWithoutNeedingLocking;
-(void)_setLastRemoteMetadataVersionIdentifier:(id)arg1 ;
-(void)_setLastRemoteMetadataUpdate:(id)arg1 ;
-(void)_clearRemoteMetadataWithDocumentIdentifier:(id)arg1 versionIdentifier:(id)arg2 ;
-(void)_clearRemoteMetadataOnDiskWithDocumentIdentifier:(id)arg1 versionIdentifier:(id)arg2 ;
-(id)managedOtherMetadata;
-(id)_otherMetadataWithoutNeedingLocking;
-(NSData *)lastRemoteMetadataVersionIdentifier;
-(NSDate *)lastUploadDate;
-(id)_localGenerationIdentifierFullPath;
-(id)_localGenerationIdentifier;
-(void)_saveRemoteMetadataOnDisk:(id)arg1 documentIdentifier:(id)arg2 previousVersionIdentifier:(id)arg3 ;
-(void)_saveRootDocumentIdentifierOnDisk:(id)arg1 ;
-(void)_setRemoteMetadataWithoutNeedingLocking:(id)arg1 error:(id*)arg2 ;
-(BOOL)_replaceFileWithURL:(id)arg1 error:(id*)arg2 ;
-(void)_setOtherMetadataWithoutNeedingLocking:(id)arg1 ;
-(void)_setStoredLocalMetadataWithoutNeedingLocking:(id)arg1 ;
-(void)_saveLastUpdateGenerationIdentifier;
-(BOOL)hasBeenUploaded;
-(BOOL)_replaceFileAtURL:(id)arg1 withData:(id)arg2 error:(id*)arg3 ;
-(void)_saveDictionary:(id)arg1 toPath:(id)arg2 previousVersionPath:(id)arg3 ;
-(NSDate *)lastDownloadDate;
-(BOOL)_isUpToDateWithoutNeedingLocking;
-(BOOL)existsOnServer;
-(BOOL)hasBeenRemoved;
-(void)setHasBeenRemoved:(BOOL)arg1 ;
-(void)clearRemoteMetadata;
-(void)renameRelativePath:(id)arg1 ;
-(BOOL)isRemoteMetadataUpToDate;
-(BOOL)isContentsUpToDate;
-(id)_storedLocalMetadata;
-(id)_storedLocalMetadataObjectForKey:(id)arg1 ;
-(id)_fileSystemMetadata;
-(id)_contents;
-(id)_readDictionaryFromPath:(id)arg1 ;
@end

