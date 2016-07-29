/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreDuet/CoreDuet-Structs.h>
@class NSObject, NSMutableArray, _CDActivity, NSDate, NSString, CDSession, CDAttribute, _CDDateRange, _CDSystemMonitor;

@interface _CDActivityScheduler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> activityDispatcher;
	NSMutableArray* submittedActivities;
	NSMutableArray* requisiteStateQueue;
	NSMutableArray* favorableStateQueue;
	NSMutableArray* runQueue;
	NSMutableArray* suspendQueue;
	unsigned long long maxConcurrentExec;
	long long currentIntensiveActCount;
	_CDActivity* currentDeviceRestartActivity;
	unsigned restartAssertion;
	NSDate* nextUserWake;
	NSString* nextUserWakeAppName;
	long long userInactiveActCount;
	long long userInactiveSuspendActCount;
	long long acPowerActCount;
	long long acPowerSuspendActCount;
	long long execActCount;
	long long execActCountWithNoConditions;
	long long completedActCount;
	long long totalActCompletionTime;
	long long totalActStartTime;
	long long overdueActCount;
	long long thermalSuspendActCount;
	long long memorySuspendActCount;
	CDSession* session;
	CDAttribute* pluginAttribute;
	CDAttribute* budgetAttribute;
	NSDate* forecastTimestamp;
	BOOL pluginForecastValid;
	unsigned char pluginForecast[13];
	BOOL inactivityForecastValid;
	unsigned char inactivityForecast[13];
	_CDDateRange* nextSleepPeriod1;
	_CDDateRange* nextSleepPeriod2;
	BOOL deviceRestartForecastValid;
	_CDDateRange* deviceRestartPeriod1;
	_CDDateRange* deviceRestartPeriod2;
	NSDate* sleepEnd1;
	NSDate* sleepEnd2;
	NSDate* nextForecastUpdate;
	NSDate* nextScheduleUpdate;
	_CDSystemMonitor* systemMonitor;
	unsigned _swAckPort;
	unsigned swNotifier;
	IONotificationPortRef swNotifyPort;
	int idleSleepPreventersToken;
	int systemSleepPreventersToken;
	int wakeRequestsToken;
	int userAssertionsAnyChangeToken;
	int powerStateChangeToken;
	int restartCheckNotificationToken;
	unsigned restartAssertionCheckId;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned _swAckPort;                              //@synthesize swAckPort=_swAckPort - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)_queue;
-(void)handleSystemNotification:(unsigned long long)arg1 ;
-(void)updateAggdKeys;
-(void)enableHeySiri;
-(void)processActivityQueues;
-(void)suspendExecutingActivities:(/*^block*/id)arg1 ;
-(void)processRequisiteStateQueue;
-(void)processFavorableStateQueue;
-(id)dateToString:(id)arg1 ;
-(BOOL)cacheSleepPeriod:(id)arg1 end:(id)arg2 period1:(id*)arg3 period2:(id*)arg4 ;
-(id)getForecastForAttribute:(id)arg1 ;
-(BOOL)getForecastForDevicePlugin:(char*)arg1 ;
-(BOOL)getForecastForUserInactivity:(char*)arg1 ;
-(BOOL)getDeviceRestartForecast;
-(BOOL)updateForecasts;
-(void)processDeviceRestartActivities;
-(void)disableHeySiri;
-(void)registerForAnyAssertionChange;
-(BOOL)isUserAsleepForDeviceRestart:(id)arg1 ;
-(void)getNextUserWakeEvent;
-(void)retryAdmissionCheck:(long long)arg1 ;
-(BOOL)assertionCheckForDeviceRestart:(id)arg1 ;
-(BOOL)deviceRestartAdmissionCheck:(id)arg1 ;
-(void)callStartHandler:(id)arg1 ;
-(void)deregisterForAnyAssertionChange;
-(void)processDeviceRestartSuspension;
-(void)setActivityScheduleTime:(id)arg1 ;
-(void)insertActivity:(id)arg1 toQueue:(id)arg2 onCondition:(/*^block*/id)arg3 ;
-(void)registerForDeviceRestartMonitoring;
-(BOOL)systemAdmissionCheck;
-(BOOL)admissionCheckOnActivity:(id)arg1 ;
-(BOOL)isUserAsleep;
-(void)processSubmittedActivity:(id)arg1 ;
-(void)setDispatchTimer;
-(void)scheduleSystemWakeAt:(id)arg1 forActivity:(id)arg2 withLeeway:(long long)arg3 ;
-(void)handleActivitySubmission:(id)arg1 ;
-(id)getUnrestrictedSleepEnd;
-(BOOL)submitActivity:(id)arg1 error:(id*)arg2 ;
-(BOOL)submitActivityBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)cancelActivity:(id)arg1 error:(id*)arg2 ;
-(BOOL)activityCompleted:(id)arg1 error:(id*)arg2 ;
-(void)set_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)_swAckPort;
-(void)set_swAckPort:(unsigned)arg1 ;
@end

