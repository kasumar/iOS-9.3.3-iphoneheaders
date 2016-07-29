/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLService.h>

@class PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition, PLEntryNotificationOperatorComposition, PLSemaphore, PLAccountingDebugService;

@interface PLDebugService : PLService {

	PLXPCListenerOperatorComposition* _xpcListenerPLLog;
	PLXPCResponderOperatorComposition* _xpcResponderPLLog;
	PLXPCResponderOperatorComposition* _xpcResponderPLAPITest;
	PLXPCListenerOperatorComposition* _aggregateTestListener;
	PLXPCResponderOperatorComposition* _aggregateTestResponder;
	PLXPCListenerOperatorComposition* _schemaTestListener;
	PLEntryNotificationOperatorComposition* _assertionListener;
	PLEntryNotificationOperatorComposition* _assertionNewListener;
	PLEntryNotificationOperatorComposition* _assertionUpdateListener;
	PLEntryNotificationOperatorComposition* _canSleepNotification;
	PLSemaphore* _canSleepSemaphore;
	PLEntryNotificationOperatorComposition* _sleepNotification;
	PLEntryNotificationOperatorComposition* _wakeNotification;
	PLAccountingDebugService* _accDS;

}

@property (retain) PLXPCListenerOperatorComposition * xpcListenerPLLog;                           //@synthesize xpcListenerPLLog=_xpcListenerPLLog - In the implementation block
@property (retain) PLXPCResponderOperatorComposition * xpcResponderPLLog;                         //@synthesize xpcResponderPLLog=_xpcResponderPLLog - In the implementation block
@property (retain) PLXPCResponderOperatorComposition * xpcResponderPLAPITest;                     //@synthesize xpcResponderPLAPITest=_xpcResponderPLAPITest - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * aggregateTestListener;                      //@synthesize aggregateTestListener=_aggregateTestListener - In the implementation block
@property (retain) PLXPCResponderOperatorComposition * aggregateTestResponder;                    //@synthesize aggregateTestResponder=_aggregateTestResponder - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * schemaTestListener;                         //@synthesize schemaTestListener=_schemaTestListener - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * assertionListener;                    //@synthesize assertionListener=_assertionListener - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * assertionNewListener;                 //@synthesize assertionNewListener=_assertionNewListener - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * assertionUpdateListener;              //@synthesize assertionUpdateListener=_assertionUpdateListener - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * canSleepNotification;                 //@synthesize canSleepNotification=_canSleepNotification - In the implementation block
@property (retain) PLSemaphore * canSleepSemaphore;                                               //@synthesize canSleepSemaphore=_canSleepSemaphore - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * sleepNotification;                    //@synthesize sleepNotification=_sleepNotification - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * wakeNotification;                     //@synthesize wakeNotification=_wakeNotification - In the implementation block
@property (retain) PLAccountingDebugService * accDS;                                              //@synthesize accDS=_accDS - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventNoneDefinitions;
+(id)railDefinitions;
+(id)entryEventPointDefinitionTest;
+(id)entryAggregateDefinitionAggregateTest;
+(id)entryAggregateDefinitionAggregateTestSmall;
+(id)entryAggregateDefinitionAggregateTestVerySmall;
+(id)entryEventNoneDefinitionPLAPITest;
+(id)entryEventNoneDefinitionArrayTest;
+(id)entryEventNoneDefinitionSleepNotificationTest;
+(id)entryEventNoneDefinitionFastInsertTest;
-(id)init;
-(void)initOperatorDependancies;
-(void)setWakeNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setCanSleepNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)wakeNotification;
-(PLEntryNotificationOperatorComposition *)canSleepNotification;
-(PLSemaphore *)canSleepSemaphore;
-(void)setCanSleepSemaphore:(PLSemaphore *)arg1 ;
-(void)printNullTestResultsForEntry:(id)arg1 withDescription:(id)arg2 ;
-(void)setXpcListenerPLLog:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)setAggregateTestListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)setAggregateTestResponder:(PLXPCResponderOperatorComposition *)arg1 ;
-(void)setSchemaTestListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)setAssertionListener:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setAssertionNewListener:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setAssertionUpdateListener:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setSleepNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(id)testPLAPICore_WriteEntry:(id)arg1 ;
-(id)testPLAPICore_UpdateEntry:(id)arg1 ;
-(id)testPLAPICore_DeleteEntry:(id)arg1 ;
-(id)testPLAPICore_DeleteEntryForKey:(id)arg1 ;
-(id)testPLAPICore_DeleteAllEntriesForKey:(id)arg1 ;
-(id)testPLAPICore_DeleteAllEntriesForKeyWF:(id)arg1 ;
-(id)testPLAPICore_DeleteAllEntriesForKeyBTWF:(id)arg1 ;
-(id)testPLAPICore_EntriesForKeyWithProperties:(id)arg1 ;
-(id)testPLAPICore_EntriesForKeyInTimeRange:(id)arg1 ;
-(id)testPLAPICore_EntriesForKeyBeforeTICWF:(id)arg1 ;
-(id)testPLAPICore_LastEntryForKeyWSEK:(id)arg1 ;
-(id)testPLAPICore_LastEntryForKeyWC:(id)arg1 ;
-(void)setAccDS:(PLAccountingDebugService *)arg1 ;
-(id)testPLAPIAccounting_CreatePowerEventForward:(id)arg1 ;
-(id)testPLAPIAccounting_CreatePowerEventBackward:(id)arg1 ;
-(id)testPLAPIAccounting_CreatePowerEventInterval:(id)arg1 ;
-(id)testPLAPIAccounting_AddPowerMeasurementEventInterval:(id)arg1 ;
-(id)testPLAPIAccounting_CreateDistributionEventForwardAdd:(id)arg1 ;
-(id)testPLAPIAccounting_CreateDistributionEventForwardRem:(id)arg1 ;
-(id)testPLAPIAccounting_CreateDistributionEventForwardChild:(id)arg1 ;
-(id)testPLAPIAccounting_CreateDistributionEventBackward:(id)arg1 ;
-(id)testPLAPIAccounting_CreateDistributionEventInterval:(id)arg1 ;
-(id)testPLAPIAccounting_CreateDistributionEventPoint:(id)arg1 ;
-(id)testPLAPIAccounting_CreateQualificationEventForwardAdd:(id)arg1 ;
-(id)testPLAPIAccounting_CreateQualificationEventForwardRem:(id)arg1 ;
-(id)testPLAPIAccounting_CreateQualificationEventForwardChild:(id)arg1 ;
-(id)testPLAPIAccounting_CreateQualificationEventBackward:(id)arg1 ;
-(id)testPLAPIAccounting_CreateQualificationEventInterval:(id)arg1 ;
-(id)testPLAPIAccounting_CreateQualificationEventPoint:(id)arg1 ;
-(id)testPLAPIAccounting_ExistingTest:(id)arg1 ;
-(void)setXpcResponderPLAPITest:(PLXPCResponderOperatorComposition *)arg1 ;
-(id)test_LogPass:(id)arg1 str:(id)arg2 ;
-(id)test_LogErr:(id)arg1 str:(id)arg2 ;
-(BOOL)rawWrite:(id)arg1 ;
-(PLAccountingDebugService *)accDS;
-(id)filledTestArrayEntry;
-(BOOL)rawRead:(id)arg1 ;
-(id)testPLAPICore_WriteEntries:(id)arg1 ;
-(void)testUTF8;
-(void)stressAggregateSmall;
-(void)stressAggregateVerySmall;
-(void)testExit;
-(void)stressMonotonicTimer;
-(void)stressMonotonicTimer2;
-(void)stressMonotonicTimer3;
-(void)testMonotonicTimerThroughSleep;
-(void)stressActivityScheduler;
-(void)currentBasebandTime;
-(void)stressMidnightCalculation;
-(void)stressCacheSmall;
-(void)stressCache;
-(void)stressSetObjectForKey;
-(void)stressObjectForKey;
-(void)stressPLEntry;
-(void)stressTimer;
-(void)testDailyTasks;
-(void)testArchive;
-(void)testArray;
-(void)testGenerateOTASubmission;
-(void)testQMI;
-(void)testFastInserts;
-(void)testAllEntryKeyRequests;
-(void)testEntrySleep;
-(void)testEntryWake;
-(void)testEntryLogRequestedForEntryKey:(id)arg1 ;
-(void)testEntryApplicationAgent;
-(void)testEntryDelete;
-(void)testEntryQueries;
-(PLXPCListenerOperatorComposition *)xpcListenerPLLog;
-(PLXPCResponderOperatorComposition *)xpcResponderPLLog;
-(void)setXpcResponderPLLog:(PLXPCResponderOperatorComposition *)arg1 ;
-(PLXPCResponderOperatorComposition *)xpcResponderPLAPITest;
-(PLXPCListenerOperatorComposition *)aggregateTestListener;
-(PLXPCResponderOperatorComposition *)aggregateTestResponder;
-(PLXPCListenerOperatorComposition *)schemaTestListener;
-(PLEntryNotificationOperatorComposition *)assertionListener;
-(PLEntryNotificationOperatorComposition *)assertionNewListener;
-(PLEntryNotificationOperatorComposition *)assertionUpdateListener;
-(PLEntryNotificationOperatorComposition *)sleepNotification;
@end

