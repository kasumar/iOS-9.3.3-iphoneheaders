/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocsClient/DCDocumentManagerDelegate.h>

@class NSArray, SVMetadataItem, DCService, NSDate, NSMutableArray, NSOperationQueue, DCDocumentManager;

@interface SVMetadataCache : NSObject <DCDocumentManagerDelegate> {

	BOOL _enableWriteOnlyFolders;
	BOOL _firstUpdate;
	NSArray* _validTypes;
	long long _sortOrder;
	SVMetadataItem* _directoryItem;
	DCService* _server;
	NSDate* _lastSnapshotDate;
	NSMutableArray* _metadataItems;
	NSOperationQueue* _thumbnailOperationQueue;

}

@property (nonatomic,copy) NSArray * validTypes;                                      //@synthesize validTypes=_validTypes - In the implementation block
@property (assign,nonatomic) BOOL enableWriteOnlyFolders;                             //@synthesize enableWriteOnlyFolders=_enableWriteOnlyFolders - In the implementation block
@property (assign,nonatomic) long long sortOrder;                                     //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,readonly) BOOL firstUpdate;                                      //@synthesize firstUpdate=_firstUpdate - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfItems; 
@property (nonatomic,readonly) BOOL hasLoadedContents; 
@property (nonatomic,retain) SVMetadataItem * directoryItem;                          //@synthesize directoryItem=_directoryItem - In the implementation block
@property (nonatomic,retain) DCService * server;                                      //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) DCDocumentManager * documentManager; 
@property (nonatomic,retain) NSDate * lastSnapshotDate;                               //@synthesize lastSnapshotDate=_lastSnapshotDate - In the implementation block
@property (nonatomic,readonly) NSMutableArray * metadataItems;                        //@synthesize metadataItems=_metadataItems - In the implementation block
@property (nonatomic,retain) NSOperationQueue * thumbnailOperationQueue;              //@synthesize thumbnailOperationQueue=_thumbnailOperationQueue - In the implementation block
-(id)initWithServer:(id)arg1 directoryItem:(id)arg2 ;
-(void)setDirectoryItem:(SVMetadataItem *)arg1 ;
-(void)setValidTypes:(NSArray *)arg1 ;
-(void)cancelAllThumbnailRequests;
-(void)fetchDirectoryContents:(/*^block*/id)arg1 ;
-(SVMetadataItem *)directoryItem;
-(BOOL)hasLoadedContents;
-(BOOL)firstUpdate;
-(void)cancelDownloadForItem:(id)arg1 ;
-(void)thumbnailForItem:(id)arg1 size:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)uploadDidFail:(id)arg1 ;
-(void)updateEnabledStateForItems;
-(BOOL)enableWriteOnlyFolders;
-(void)sortMetadataItems;
-(void)processNewMetadataItemsWithOldSnapshot:(id)arg1 ;
-(DCDocumentManager *)documentManager;
-(void)updateMetadataItemsWithNewContents:(id)arg1 ;
-(id)itemAtPath:(id)arg1 ;
-(void)documentManager:(id)arg1 didUpdateConnectionStatus:(BOOL)arg2 ;
-(id)itemsAtIndexPaths:(id)arg1 ;
-(void)setEnableWriteOnlyFolders:(BOOL)arg1 ;
-(void)contentsOfItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setThumbnailOperationQueue:(NSOperationQueue *)arg1 ;
-(void)dealloc;
-(DCService *)server;
-(NSDate *)lastSnapshotDate;
-(void)setLastSnapshotDate:(NSDate *)arg1 ;
-(void)startMonitoringChanges;
-(void)stopMonitoringChanges;
-(void)setSortOrder:(long long)arg1 ;
-(long long)sortOrder;
-(NSArray *)validTypes;
-(unsigned long long)numberOfItems;
-(id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2 ;
-(NSMutableArray *)metadataItems;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)indexPathOfItem:(id)arg1 ;
-(id)allItems;
-(NSOperationQueue *)thumbnailOperationQueue;
-(void)setServer:(DCService *)arg1 ;
-(id)directoryPath;
-(void)documentManager:(id)arg1 didUpdateAttributesOfItemAtPath:(id)arg2 attributes:(id)arg3 ;
-(void)documentManager:(id)arg1 didUpdateContentsOfDirectoryAtPath:(id)arg2 contents:(id)arg3 ;
-(void)documentManager:(id)arg1 didUpdateContentsOfFileAtPath:(id)arg2 ;
-(void)documentManager:(id)arg1 didFailToUpdateItemAtPath:(id)arg2 error:(id)arg3 ;
-(void)documentManager:(id)arg1 didStartDownloadingItemAtPath:(id)arg2 downloadTask:(id)arg3 ;
-(void)documentManager:(id)arg1 didStartUploadingItemAtPath:(id)arg2 upload:(id)arg3 ;
-(void)documentManager:(id)arg1 didUpdateThumbnailOfFileAtPath:(id)arg2 url:(id)arg3 ;
@end

