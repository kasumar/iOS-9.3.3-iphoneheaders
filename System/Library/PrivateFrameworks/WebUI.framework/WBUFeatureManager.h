/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, ACAccount;

@interface WBUFeatureManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	ACAccountStore* _accountStore;
	ACAccount* _account;
	BOOL _autoFillAvailable;
	BOOL _readingListAvailable;
	BOOL _offlineReadingListAvailable;
	BOOL _cloudSyncAvailable;

}

@property (getter=isAutoFillAvailable,nonatomic,readonly) BOOL autoFillAvailable;                                    //@synthesize autoFillAvailable=_autoFillAvailable - In the implementation block
@property (getter=isReadingListAvailable,nonatomic,readonly) BOOL readingListAvailable;                              //@synthesize readingListAvailable=_readingListAvailable - In the implementation block
@property (getter=isOfflineReadingListAvailable,nonatomic,readonly) BOOL offlineReadingListAvailable;                //@synthesize offlineReadingListAvailable=_offlineReadingListAvailable - In the implementation block
@property (getter=isCloudTabsAvailable,nonatomic,readonly) BOOL cloudTabsAvailable; 
@property (getter=isCloudSyncAvailable,nonatomic,readonly) BOOL cloudSyncAvailable;                                  //@synthesize cloudSyncAvailable=_cloudSyncAvailable - In the implementation block
@property (getter=isCloudHistorySyncAvailable,nonatomic,readonly) BOOL cloudHistorySyncAvailable; 
@property (getter=isCreditCardStorageAvailable,nonatomic,readonly) BOOL creditCardStorageAvailable; 
@property (getter=isParsecITunesResultsAvailable,nonatomic,readonly) BOOL parsecITunesResultsAvailable; 
+(long long)accessLevel;
+(id)webui_sharedFeatureManager;
-(void)dealloc;
-(id)init;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_updateAppleAccount;
-(void)_updateFeatureAvailabilityByAccessLevel;
-(void)_setupAccountStore;
-(BOOL)isCloudTabsAvailable;
-(BOOL)isParsecITunesResultsAvailable;
-(BOOL)_isUsingManagedAppleID;
-(BOOL)isCloudSyncAvailable;
-(BOOL)isCreditCardStorageAvailable;
-(BOOL)isCloudHistorySyncAvailable;
-(BOOL)isAutoFillAvailable;
-(BOOL)isReadingListAvailable;
-(BOOL)isOfflineReadingListAvailable;
@end
