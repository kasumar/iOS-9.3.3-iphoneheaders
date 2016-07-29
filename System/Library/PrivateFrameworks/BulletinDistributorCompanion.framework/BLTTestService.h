/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface BLTTestService : NSObject {

	NSXPCConnection* _connection;

}
+(id)sharedTestService;
-(void)_disconnect;
-(void)dealloc;
-(id)init;
-(void)_connectIfNecessary;
-(void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)sendSectionInfoWithSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendAllSectionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)clearSectionInfoSentCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)getStandaloneTestModeEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)disableStandaloneTestModeWithCompletion:(/*^block*/id)arg1 ;
-(void)willAlertForSectionID:(id)arg1 subtype:(long long)arg2 considerSubtype:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)settingOverridesWithCompletion:(/*^block*/id)arg1 ;
-(void)originalSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)overriddenSettingsWithCompletion:(/*^block*/id)arg1 ;
@end

