/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDServer.h>

@class HDClient, NSError, NSString;

@interface HDErrorServer : NSObject <HDServer> {

	HDClient* _client;
	NSError* _error;

}

@property (nonatomic,retain) HDClient * client;                     //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)start;
-(void)setClient:(HDClient *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(BOOL)hasActiveWorkouts;
-(id)firstPartyWorkoutSnapshot;
-(void)pauseActiveWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)nukeActiveWorkoutServers;
-(void)deliverWorkoutSessionChangedToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 forSessionUUID:(id)arg4 ;
-(void)deliverWorkoutSessionError:(id)arg1 forSessionUUID:(id)arg2 ;
-(void)setDebuggingIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)authorizationStatusForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleAuthorizationForExtensionWithCompletion:(/*^block*/id)arg1 ;
-(void)allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)allAuthorizationRecordsForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 prompt:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)endAuthorizationDelegateTransactionWithError:(id)arg1 ;
-(void)startQueryWithUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 client:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)saveDataObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)saveDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)deleteDataObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)deleteDataObjectsOfType:(id)arg1 matchingFilter:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_remote_fetchAllDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)hasAnyActiveWorkouts:(/*^block*/id)arg1 ;
-(void)getFirstPartyWorkoutSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)addSamples:(id)arg1 toWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)attachWorkoutServerWithClient:(id)arg1 workoutConfiguration:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)pauseAllActiveWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)associateSamplesWithUUIDs:(id)arg1 withWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startWorkoutSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopWorkoutSessionWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)hasSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)allSourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)orderedSourcesForObjectType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)currentlyPairedWatchIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)_remote_fetchDataTypesForSource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_remote_fetchDataTypesForDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_remote_fetchDevicesMatchingProperty:(id)arg1 values:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteObjectsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)medicalIDDataCreateIfNecessary:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMedicalIDData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteMedicalIDDataWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCharacteristicWithDataType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)beginBluetoothStatusUpdates:(/*^block*/id)arg1 ;
-(void)endBluetoothStatusUpdates;
-(void)startHealthServiceDiscovery:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)endHealthServiceDiscovery:(unsigned long long)arg1 ;
-(void)startHealthServiceSession:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)endHealthServiceSession:(unsigned long long)arg1 ;
-(void)getHealthServicePairingsWithHandler:(/*^block*/id)arg1 ;
-(void)addPairingForHealthService:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removePairingForHealthService:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getSupportedPropertyNamesWithHandler:(/*^block*/id)arg1 ;
-(void)getHealthServiceProperty:(id)arg1 forSession:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)performHealthServiceOperation:(id)arg1 onSession:(unsigned long long)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addPeripheral:(id)arg1 name:(id)arg2 forServices:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)removePeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setEnabledStatus:(BOOL)arg1 forPeripheral:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)getDefaultForKey:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setDefaultValue:(id)arg1 forKey:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)removeDefaultForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_getHealthLiteValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetNanoSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)getDatabaseSizeInBytesWithCompletion:(/*^block*/id)arg1 ;
-(void)performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)submitMetricsIgnoringAnchor:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopFakingDataWithCompletion:(/*^block*/id)arg1 ;
-(void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchDiagnosticsWithKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createBluetoothSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveDataObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 sourceVersion:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)select:(id)arg1 from:(id)arg2 where:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)dropEntitlement:(id)arg1 ;
-(void)restoreEntitlement:(id)arg1 ;
-(void)registerKeepAliveWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unregisterKeepAliveWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchUnitPreferencesForTypes:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)weeklySummaryInfoForDate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithClient:(id)arg1 error:(id)arg2 ;
-(HDClient *)client;
@end

