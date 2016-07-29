/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKExtendedServerInterface <NSObject>
@required
-(void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3;
-(void)registerForAchievementNotificationsAndFetchUnalertedCountWithCompletion:(/*^block*/id)arg1;
-(void)fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchUnalertedAchievementsWithCompletion:(/*^block*/id)arg1;
-(void)markAchievementsAlerted:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchNumberOfUnviewedAchievementsWithCompletion:(/*^block*/id)arg1;
-(void)markAchievementAsViewed:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addAchievement:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteAchievementWithUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteAllAchievementsWithCompletion:(/*^block*/id)arg1;
-(void)runAchievementsFixupAsDryRun:(BOOL)arg1 completion:(/*^block*/id)arg2;

@end
