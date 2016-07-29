/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicEntityProviderDownloadInformationController.h>
#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@class NSArray, MusicStoreEntityProvider, NSString;

@interface MusicStoreEntityProviderDownloadInformationController : MusicEntityProviderDownloadInformationController <MPStoreDownloadManagerObserver> {

	unsigned long long _keepLocalEntityCount;
	unsigned long long _nonPurgeableEntityCount;
	NSArray* _relevantActiveDownloads;
	BOOL _shouldUseDetailedDownloadProgress;
	MusicStoreEntityProvider* _storeEntityProvider;

}

@property (nonatomic,readonly) MusicStoreEntityProvider * storeEntityProvider;              //@synthesize storeEntityProvider=_storeEntityProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(id)initWithStoreEntityProvider:(id)arg1 ;
-(void)_beginGeneratingDownloadInformationChanges;
-(void)_endGeneratingDownloadInformationChanges;
-(void)_storeEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_reloadStoreDownloadInformation;
-(unsigned long long)_countOfItemsForQuery:(id)arg1 withStoreIDsFromStoreItemMetadataContexts:(id)arg2 ;
-(void)_enumateItemsForQuery:(id)arg1 withStoreIDsFromStoreItemMetadataContexts:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(MusicStoreEntityProvider *)storeEntityProvider;
@end

