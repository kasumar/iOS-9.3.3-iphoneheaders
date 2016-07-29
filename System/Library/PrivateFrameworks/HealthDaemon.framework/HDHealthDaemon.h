/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, HDSourceManager, HDDeviceManager, HDHealthServiceManager, HDUserCharacteristicsManager, HDContentProtectionManager, HDBackgroundTaskScheduler, HDProcessStateManager, HDPluginManager, HDDataProvenanceManager, HDRoutineGateway, HDAppSubscriptionManager, HDUnitPreferencesManager, HDNanoSyncManager, HDAuthorizationManager, HDWorkoutManager, HDDatabasePruningManager, HDServiceConnectionManager, HDCurrentActivitySummaryHelper;


@protocol HDHealthDaemon <NSObject>
@property (readonly) NSString * homeDirectoryPath; 
@property (readonly) NSURL * homeDirectoryURL; 
@property (readonly) NSObject*<OS_dispatch_queue> mainQueue; 
@property (readonly) id<HDHealthDatabase> healthDatabase; 
@property (readonly) id<HDHealthDataCollectionManager> healthDataCollectionManager; 
@property (readonly) id<HDHealthDataManager> healthDataManager; 
@property (readonly) id<HDSyncEngine> syncEngine; 
@property (readonly) HDSourceManager * healthSourceManager; 
@property (readonly) HDDeviceManager * healthDeviceManager; 
@property (readonly) id<HDHealthMetadataManager> healthMetadataManager; 
@property (readonly) HDHealthServiceManager * healthServiceManager; 
@property (readonly) HDUserCharacteristicsManager * userCharacteristicsManager; 
@property (readonly) HDContentProtectionManager * contentProtectionManager; 
@property (readonly) HDBackgroundTaskScheduler * backgroundTaskScheduler; 
@property (readonly) HDProcessStateManager * processStateManager; 
@property (readonly) HDPluginManager * pluginManager; 
@property (readonly) HDDataProvenanceManager * dataProvenanceManager; 
@property (nonatomic,readonly) HDRoutineGateway * routineGateway; 
@property (nonatomic,readonly) HDAppSubscriptionManager * subscriptionManager; 
@property (nonatomic,readonly) HDUnitPreferencesManager * unitPreferencesManager; 
@property (nonatomic,readonly) HDNanoSyncManager * nanoSyncManager; 
@property (nonatomic,readonly) HDAuthorizationManager * authorizationManager; 
@property (nonatomic,retain) HDWorkoutManager * workoutManager; 
@property (nonatomic,retain) id<HDViewOnWakeService> viewOnWakeService; 
@property (nonatomic,readonly) HDDatabasePruningManager * databasePruningManager; 
@property (nonatomic,readonly) HDServiceConnectionManager * serviceConnectionManager; 
@property (nonatomic,readonly) HDCurrentActivitySummaryHelper * currentActivitySummaryHelper; 
@property (readonly) BOOL isAppleWatch; 
@required
-(NSObject*<OS_dispatch_queue>)mainQueue;
-(id<HDHealthDatabase>)healthDatabase;
-(BOOL)isAppleWatch;
-(HDSourceManager *)healthSourceManager;
-(id)firstPartyWorkoutSnapshot;
-(void)pauseAllActiveWorkoutsWithCompletion:(/*^block*/id)arg1;
-(void)registerForDaemonReady:(id)arg1;
-(HDContentProtectionManager *)contentProtectionManager;
-(HDProcessStateManager *)processStateManager;
-(NSURL *)homeDirectoryURL;
-(id<HDSyncEngine>)syncEngine;
-(void)beginTransaction:(id)arg1;
-(void)endTransaction:(id)arg1;
-(id<HDHealthDataManager>)healthDataManager;
-(HDRoutineGateway *)routineGateway;
-(HDAuthorizationManager *)authorizationManager;
-(HDDataProvenanceManager *)dataProvenanceManager;
-(HDUserCharacteristicsManager *)userCharacteristicsManager;
-(HDUnitPreferencesManager *)unitPreferencesManager;
-(void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4;
-(void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3;
-(void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1;
-(void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)persistAndNotifyDataObjects:(id)arg1 device:(id)arg2 error:(id*)arg3;
-(BOOL)hasAnyActiveWorkouts;
-(BOOL)persistAndNotifyDataObject:(id)arg1 device:(id)arg2 error:(id*)arg3;
-(void)registerForLaunchNotification:(const char*)arg1;
-(void)unregisterForLaunchNotification:(const char*)arg1;
-(void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(/*^block*/id)arg4;
-(void)terminate;
-(void)didUpdateActiveWorkoutServers;
-(NSString *)homeDirectoryPath;
-(id<HDHealthDataCollectionManager>)healthDataCollectionManager;
-(HDDeviceManager *)healthDeviceManager;
-(id<HDHealthMetadataManager>)healthMetadataManager;
-(HDHealthServiceManager *)healthServiceManager;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(HDPluginManager *)pluginManager;
-(HDAppSubscriptionManager *)subscriptionManager;
-(HDNanoSyncManager *)nanoSyncManager;
-(HDWorkoutManager *)workoutManager;
-(void)setWorkoutManager:(id)arg1;
-(id<HDViewOnWakeService>)viewOnWakeService;
-(void)setViewOnWakeService:(id)arg1;
-(HDDatabasePruningManager *)databasePruningManager;
-(HDServiceConnectionManager *)serviceConnectionManager;
-(HDCurrentActivitySummaryHelper *)currentActivitySummaryHelper;

@end

