/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class SagaLibrary, NSObject, CloudUpdateLibraryOperation, NSMutableArray, SagaArtworkImporter, HSConnectionConfiguration;

@interface SagaRequestHandler : NSObject {

	SagaLibrary* _library;
	NSObject*<OS_dispatch_queue> _geniusDownloadQueue;
	NSObject*<OS_dispatch_queue> _uploadItemPropertiesQueue;
	NSObject*<OS_dispatch_queue> _uploadPlaylistPropertiesQueue;
	NSObject*<OS_dispatch_queue> _updateCloudLibraryQueue;
	CloudUpdateLibraryOperation* _updateCloudLibraryOperation;
	NSMutableArray* _updateLibraryCompletionHandlers;
	SagaArtworkImporter* _artworkImporter;
	NSObject*<OS_dispatch_queue> _loadURLBagQueue;
	NSMutableArray* _loadURLBagCompletionHandlers;
	NSObject*<OS_dispatch_source> _itemPropertiesCoalescingTimer;
	NSObject*<OS_dispatch_source> _playlistPropertiesCoalescingTimer;
	HSConnectionConfiguration* _configuration;

}

@property (nonatomic,copy) HSConnectionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)handler;
-(void)updateLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addOperation:(id)arg1 priority:(int)arg2 ;
-(void)addBackgroundOperation:(id)arg1 priority:(int)arg2 ;
-(void)cancelPendingChanges;
-(void)unregisterForStoreDownloadNotifications;
-(void)deauthenticateDeletingDB:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)uploadItemPropertiesWithMinimumTimeInterval:(double)arg1 ;
-(void)uploadPlaylistPropertiesWithMinimumTimeInterval:(double)arg1 ;
-(void)processPendingGeniusData;
-(void)_addLibraryOperation:(id)arg1 priority:(int)arg2 noLibraryHandler:(/*^block*/id)arg3 ;
-(void)registerForStoreDownloadNotifications;
-(BOOL)aggregatePlayDataProperties:(id)arg1 forSagaID:(unsigned long long)arg2 forceCheck:(BOOL)arg3 ;
-(void)handleAccountsDidChange:(BOOL)arg1 ;
-(void)updateItemPlayData;
-(void)updatePlaylistPlayData;
-(void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 requestingBundleID:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 requestingBundleID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(BOOL)arg2 requestReason:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addStoreItemWithOpaqueID:(id)arg1 requestingBundleID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAlbumProperties:(id)arg1 forItemsWithAlbumPersistentID:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isUpdateInProgressWithIsInitialImport:(BOOL*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)setConfiguration:(HSConnectionConfiguration *)arg1 ;
-(HSConnectionConfiguration *)configuration;
-(void)downloadGeniusDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForContainerSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 ;
-(void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)uploadArtworkForPlaylistWithPersistentID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importItemArtworkForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importContainerArtworkForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deprioritizeItemArtworkForSagaID:(long long)arg1 ;
-(void)deprioritizeContainerArtworkForSagaID:(long long)arg1 ;
-(void)deauthenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)isExpiredWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_library;
-(void)_loadURLBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(float)updateProgress;
-(void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

