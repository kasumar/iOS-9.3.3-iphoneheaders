/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HSCloudAvailability, OS_dispatch_queue;
@class NSObject, SSVMediaContentTasteController, MSVDistributedNotificationObserver, HSCloudClient;

@interface MPCloudController : NSObject {

	NSObject*<HSCloudAvailability> _cloudAvailabilityController;
	SSVMediaContentTasteController* _contentTasteController;
	BOOL _isUpdateInProgress;
	int _preferencesChangedNotifyToken;
	BOOL _preferencesChangedNotifyTokenIsValid;
	NSObject*<OS_dispatch_queue> _queue;
	MSVDistributedNotificationObserver* _addToPlaylistBehaviorChangedObserver;
	BOOL _isInitialImport;
	BOOL _isCloudEnabled;
	BOOL _jaliscoGeniusEnabled;
	HSCloudClient* _cloudClient;

}

@property (nonatomic,readonly) BOOL canShowCloudDownloadButtons; 
@property (nonatomic,readonly) BOOL canDefaultMediaLibraryShowCloudContent; 
@property (nonatomic,readonly) BOOL canShowCloudMusic; 
@property (nonatomic,readonly) BOOL canShowCloudVideo; 
@property (nonatomic,readonly) BOOL isCloudEnabled;                                                  //@synthesize isCloudEnabled=_isCloudEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudLockerAccount; 
@property (nonatomic,readonly) BOOL hasPurchaseHistoryAccount; 
@property (nonatomic,readonly) HSCloudClient * cloudClient;                                          //@synthesize cloudClient=_cloudClient - In the implementation block
@property (nonatomic,readonly) BOOL isUpdateInProgress;                                              //@synthesize isUpdateInProgress=_isUpdateInProgress - In the implementation block
@property (nonatomic,readonly) BOOL isInitialImport;                                                 //@synthesize isInitialImport=_isInitialImport - In the implementation block
@property (nonatomic,readonly) BOOL isGeniusEnabled; 
@property (getter=isJaliscoGeniusEnabled,nonatomic,readonly) BOOL jaliscoGeniusEnabled;              //@synthesize jaliscoGeniusEnabled=_jaliscoGeniusEnabled - In the implementation block
@property (nonatomic,readonly) BOOL enablingJaliscoGeniusRequiresTerms; 
+(BOOL)isMediaApplication;
+(void)migrateCellularDataPreferencesIfNeeded;
+(id)sharedCloudController;
-(void)dealloc;
-(id)init;
-(void)resignActive;
-(void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2 ;
-(void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3 ;
-(void)uploadArtworkForPlaylist:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sdk_createPlaylistWithPersistenID:(unsigned long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)uploadCloudItemProperties;
-(void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 ;
-(void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)uploadCloudPlaylistProperties;
-(void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canShowCloudMusic;
-(BOOL)canShowCloudVideo;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(void)loadArtworkForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deprioritizeArtworkRequestForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 ;
-(void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1 ;
-(void)canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)isCellularDataRestrictedDidChangeNotification:(id)arg1 ;
-(BOOL)isCellularDataRestricted;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)canShowCloudDownloadButtons;
-(void)becomeActiveAndWaitUntilDone:(BOOL)arg1 ;
-(void)becomeActive;
-(void)_initializeUpdateInProgressState;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 ;
-(BOOL)canDefaultMediaLibraryShowCloudContent;
-(HSCloudClient *)cloudClient;
-(BOOL)isCloudLibraryEnabled;
-(void)loadJaliscoGeniusTermsAndConditionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)acceptJaliscGeniusTermsAndConditionsVersion:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)enablingJaliscoGeniusRequiresTerms;
-(BOOL)isGeniusEnabled;
-(void)fetchRecommendedContentWithSeedTrackID:(long long)arg1 seedTrackIDType:(long long)arg2 count:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isUpdateInProgress;
-(BOOL)isInitialImport;
-(BOOL)isCloudEnabled;
-(void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enableCloudLibraryWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disableCloudLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)evaluateKeepLocalRulesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(long long)cloudAddToPlaylistBehavior;
-(void)loadUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateSubscribedPlaylistWithSagaID:(unsigned long long)arg1 ignoreMinRefreshInterval:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)hasCloudLockerAccount;
-(BOOL)hasPurchaseHistoryAccount;
-(BOOL)isJaliscoGeniusEnabled;
-(void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

