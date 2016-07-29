/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKActiveWorkoutServer.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/_HKWorkoutSessionDelegate.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@protocol HDActiveWorkoutServerDelegate, OS_dispatch_queue, NSXPCProxyCreating, HDHealthDaemon;
@class HKSource, _HKActiveWorkoutServerConfiguration, NSUUID, NSObject, HDServer, HKQuantityType, NSMutableArray, NSMutableDictionary, NSSet, NSDate, NSArray, NSString;

@interface HDActiveWorkoutServer : NSObject <_HKActiveWorkoutServer, HDDataObserver, _HKWorkoutSessionDelegate, HDDatabaseProtectedDataObserver> {

	HKSource* _localDeviceSource;
	long long _state;
	_HKActiveWorkoutServerConfiguration* _configuration;
	NSUUID* _workoutSessionUUID;
	BOOL _observingChanges;
	id<HDActiveWorkoutServerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	id<NSXPCProxyCreating> _clientServer;
	id<HDHealthDaemon> _daemon;
	HDServer* _server;
	HKQuantityType* _distanceType;
	long long _serverState;
	NSMutableArray* _workoutEvents;
	NSMutableDictionary* _currentAnchors;
	NSMutableDictionary* _resumeDataByType;
	NSSet* _observedTypes;

}

@property (nonatomic,__weak,readonly) id<HDActiveWorkoutServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * workoutUUID; 
@property (readonly) long long activeWorkoutState; 
@property (readonly) BOOL isActivated; 
@property (readonly) NSDate * startDate; 
@property (readonly) unsigned long long workoutActivityType; 
@property (readonly) NSArray * currentWorkoutEvents; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                       //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerQueue;                       //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,readonly) id<NSXPCProxyCreating> clientServer;                            //@synthesize clientServer=_clientServer - In the implementation block
@property (nonatomic,readonly) id<HDHealthDaemon> daemon;                                      //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,__weak,readonly) HDServer * server;                                       //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) HKQuantityType * distanceType;                                  //@synthesize distanceType=_distanceType - In the implementation block
@property (assign) long long state; 
@property (assign,nonatomic) long long serverState;                                            //@synthesize serverState=_serverState - In the implementation block
@property (nonatomic,retain) NSMutableArray * workoutEvents;                                   //@synthesize workoutEvents=_workoutEvents - In the implementation block
@property (readonly) HKSource * localDeviceSource; 
@property (nonatomic,retain) NSMutableDictionary * currentAnchors;                             //@synthesize currentAnchors=_currentAnchors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resumeDataByType;                           //@synthesize resumeDataByType=_resumeDataByType - In the implementation block
@property (nonatomic,retain) NSSet * observedTypes;                                            //@synthesize observedTypes=_observedTypes - In the implementation block
@property (assign,nonatomic) BOOL observingChanges;                                            //@synthesize observingChanges=_observingChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<HDActiveWorkoutServerDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(HDServer *)server;
-(void)deactivate;
-(NSDate *)startDate;
-(BOOL)isActivated;
-(id<HDHealthDaemon>)daemon;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesJournaled:(id)arg1 type:(id)arg2 ;
-(id)diagnosticDescription;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(unsigned long long)workoutActivityType;
-(NSMutableArray *)workoutEvents;
-(id)_transactionIdentifier;
-(NSUUID *)workoutUUID;
-(NSMutableDictionary *)resumeDataByType;
-(void)_setupObservedTypes;
-(unsigned long long)_workoutActivityType;
-(void)_broadcastActivityTypeWithWorkoutState:(long long)arg1 serverState:(long long)arg2 ;
-(BOOL)_shouldUseDeviceData;
-(void)_observerQueue_initObservedTypes;
-(void)_observerQueue_registerObservers;
-(long long)serverState;
-(void)_observerQueue_reactivateWorkoutWithData:(id)arg1 startDate:(id)arg2 ;
-(void)_startWorkoutSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateClientTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3 ;
-(void)_addEventType:(long long)arg1 forDate:(id)arg2 ;
-(void)_observerQueue_resolveGaps;
-(BOOL)_observerQueue_gapsResolved;
-(BOOL)_observerQueue_updateTotalsWithResumeData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 database:(id)arg4 localDeviceEntity:(id)arg5 error:(id*)arg6 ;
-(void)deactivateServer;
-(BOOL)_observerQueue_resolveGap:(id)arg1 quantityType:(id)arg2 ;
-(BOOL)_observerQueue_updateTotalsWithDataGap:(id)arg1 quantityType:(id)arg2 database:(id)arg3 localDeviceEntity:(id)arg4 ;
-(void)_observerQueue_deactivate;
-(id)clientWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_stopWorkoutSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)_observerQueue_generateGapForType:(id)arg1 resumeData:(id)arg2 ;
-(id)_observerQueue_sumQuantityForType:(id)arg1 startUUID:(id)arg2 endUUID:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 database:(id)arg6 localDeviceEntity:(id)arg7 newUUIDs:(id)arg8 lastUUID:(id*)arg9 newAnchor:(id*)arg10 ;
-(void)_setResumeDataForType:(id)arg1 lastUUID:(id)arg2 inJournal:(BOOL)arg3 ;
-(id)_rowIdInDatabase:(id)arg1 forUUID:(id)arg2 ;
-(id)_reactivatePredicateForType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 startRowId:(id)arg4 endRowId:(id)arg5 localDeviceEntity:(id)arg6 ;
-(void)_observerQueue_samplesAdded:(id)arg1 lastUUID:(id)arg2 journaled:(BOOL)arg3 anchor:(id)arg4 ;
-(id)_observerQueue_gapsNeedingUpdate;
-(BOOL)_observerQueue_shouldAddSample:(id)arg1 journaled:(BOOL)arg2 anchor:(id)arg3 ;
-(void)_observerQueue_updateTotalsWithValues:(id)arg1 UUIDs:(id)arg2 inJournal:(BOOL)arg3 ;
-(long long)_observerQueue_stateForDate:(id)arg1 ;
-(HKSource *)localDeviceSource;
-(void)activateWorkoutWithCompletion:(/*^block*/id)arg1 ;
-(void)pauseWorkoutWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resumeWorkoutWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endWorkoutWithEndDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4 ;
-(void)workoutSession:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithClient:(id)arg1 workoutConfiguration:(id)arg2 daemon:(id)arg3 server:(id)arg4 delegate:(id)arg5 ;
-(long long)activeWorkoutState;
-(NSArray *)currentWorkoutEvents;
-(void)pauseClientWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<NSXPCProxyCreating>)clientServer;
-(HKQuantityType *)distanceType;
-(void)setServerState:(long long)arg1 ;
-(void)setWorkoutEvents:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)currentAnchors;
-(void)setCurrentAnchors:(NSMutableDictionary *)arg1 ;
-(void)setResumeDataByType:(NSMutableDictionary *)arg1 ;
-(NSSet *)observedTypes;
-(void)setObservedTypes:(NSSet *)arg1 ;
-(BOOL)observingChanges;
-(void)setObservingChanges:(BOOL)arg1 ;
@end

