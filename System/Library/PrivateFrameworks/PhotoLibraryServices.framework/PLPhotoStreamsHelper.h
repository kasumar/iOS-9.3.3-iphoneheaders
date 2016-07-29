/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLPhotoStreamsHelper : NSObject {

	BOOL _appHasPolledOnceThisForegroundSession;

}
+(id)iCloudServiceAccount;
+(id)publishBreadcrumbsPath;
+(BOOL)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2 ;
+(BOOL)canInitiateDistributedPhotoStreamDeletionForAssetUUID:(id)arg1 ;
+(id)sharedPhotoStreamsHelper;
+(BOOL)photoStreamsEnabled;
-(void)dealloc;
-(id)init;
-(void)initiateDeletionOfPhotoStreamAssets:(id)arg1 ;
-(void)initiateDeletionOfOriginalAssets:(id)arg1 ;
-(void)clearCachedAccountState;
-(id)photoStreamsPublishStreamID;
-(void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2 ;
-(BOOL)enqueueAssetForPSPublishing:(id)arg1 assetHash:(id)arg2 fullPath:(id)arg3 fileSize:(id)arg4 type:(id)arg5 reenqueueCount:(id)arg6 publicGlobalUUID:(id*)arg7 ;
-(void)resetMstreamdStateForPersonID:(id)arg1 ;
-(void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2 ;
-(void)pollForNewSubscriptionContent;
-(BOOL)shouldUploadVideos;
-(void)_clearPhotoStreamAccountSettings;
-(id)imageLimitsByAssetType;
-(BOOL)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3 ;
-(long long)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2 ;
-(id)psHashAsString:(id)arg1 ;
-(long long)maxPixelSizeForDerivative;
-(id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(BOOL)arg3 ;
-(BOOL)dequeueAssetsForPSPublishing:(id)arg1 ;
-(id)psHashForData:(id)arg1 ;
-(id)lastPhotoStreamUpdateDate;
-(BOOL)removeBreadcrumbsForHashString:(id)arg1 ;
-(void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2 ;
-(BOOL)shouldPublishScreenShots;
-(long long)imageLimitForOwnStream;
-(long long)imageLimitForFriendStream;
-(long long)friendsLimit;
-(id)temporaryPathForRecentlyUploadedAsset:(id)arg1 ;
-(CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 ;
-(id)derivedAssetForMasterAsset:(id)arg1 ;
-(void)resetServerState;
-(void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)resume_mstreamd:(id)arg1 ;
-(id)pause_mstreamd;
-(void)pollForNewSubscriptionContentOncePerAppForegroundSession;
-(void)_appDidEnterBackground:(id)arg1 ;
@end

