/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PAAggregatedTask.h>

@class NSMutableArray, NSMutableSet, NSArray, PAProcessInstanceAggregator, NSString, NSUUID;

@interface PAAggregatedProcessInstance : PAAggregatedTask {

	CFDictionaryRef stacks;
	NSMutableArray* _sampleTasks;
	unsigned long long _firstTimestampIndex;
	NSMutableSet* _concurrentDispatchQueueIds;
	NSArray* _threadsInPreviousSample;
	double _mostRecentTimeSamplingOnlyMainThread;
	unsigned long long _timestampIndexWhenTransitionedToSamplingAllThreads;
	unsigned long long _mainThreadId;
	BOOL _combinedStacks;
	unsigned _countSuspended;
	unsigned _countTerminated;
	unsigned long long _cpuTimeNsCached;

}

@property (readonly) PAProcessInstanceAggregator * aggregator; 
@property (readonly) NSMutableArray * sampleTasks;                                                       //@synthesize sampleTasks=_sampleTasks - In the implementation block
@property (readonly) NSMutableSet * concurrentDispatchQueueIds;                                          //@synthesize concurrentDispatchQueueIds=_concurrentDispatchQueueIds - In the implementation block
@property (readonly) unsigned long long firstTimestampIndex;                                             //@synthesize firstTimestampIndex=_firstTimestampIndex - In the implementation block
@property (readonly) unsigned long long lastTimestampIndex; 
@property (retain) NSArray * threadsInPreviousSample;                                                    //@synthesize threadsInPreviousSample=_threadsInPreviousSample - In the implementation block
@property (readonly) unsigned countSuspended;                                                            //@synthesize countSuspended=_countSuspended - In the implementation block
@property (readonly) unsigned countTerminated;                                                           //@synthesize countTerminated=_countTerminated - In the implementation block
@property (readonly) unsigned count; 
@property (readonly) int pid; 
@property (readonly) int ppid; 
@property (readonly) int rpid; 
@property (readonly) unsigned uid; 
@property (readonly) unsigned long long uniqueId; 
@property (readonly) NSString * name; 
@property (readonly) NSString * mainBinaryPath; 
@property (readonly) NSUUID * mainBinaryUuid; 
@property (readonly) unsigned long long mainBinaryOffset; 
@property (readonly) BOOL isUnresponsive; 
@property (readonly) double timeOfLastResponse; 
@property (readonly) BOOL usesSuddenTermination; 
@property (readonly) BOOL allowsIdleExit; 
@property (readonly) BOOL isDirty; 
@property (readonly) BOOL workQueueExceededConstrainedThreadLimit; 
@property (readonly) BOOL workQueueExceededTotalThreadLimit; 
@property (readonly) BOOL isThirdParty; 
@property (readonly) unsigned long long timestampIndexWhenTransitionedToSamplingAllThreads;              //@synthesize timestampIndexWhenTransitionedToSamplingAllThreads=_timestampIndexWhenTransitionedToSamplingAllThreads - In the implementation block
-(void)dealloc;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(unsigned long long)uniqueId;
-(unsigned)uid;
-(BOOL)isDirty;
-(int)pid;
-(BOOL)isUnresponsive;
-(void)printHeaderToStream:(_sFILE*)arg1 ;
-(void)printToStream:(_sFILE*)arg1 ;
-(void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(NSMutableArray *)sampleTasks;
-(PAProcessInstanceAggregator *)aggregator;
-(id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3 ;
-(unsigned long long)mainBinaryOffset;
-(NSUUID *)mainBinaryUuid;
-(void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(NSMutableSet *)concurrentDispatchQueueIds;
-(void)setThreadsInPreviousSample:(NSArray *)arg1 ;
-(void)_combineMainThreadStacks;
-(void)_combineSerialDispatchQueueStacks;
-(unsigned long long)firstTimestampIndex;
-(int)ppid;
-(int)rpid;
-(NSString *)mainBinaryPath;
-(id)architectureString;
-(double)timeOfLastResponse;
-(BOOL)usesSuddenTermination;
-(BOOL)allowsIdleExit;
-(BOOL)workQueueExceededConstrainedThreadLimit;
-(BOOL)workQueueExceededTotalThreadLimit;
-(BOOL)isThirdParty;
-(unsigned long long)cpuTimeNs;
-(id)sampleTaskAtTimestampIndex:(unsigned long long)arg1 ;
-(unsigned)countSuspended;
-(unsigned)countTerminated;
-(unsigned long long)lastTimestampIndex;
-(BOOL)_shouldDisplayStacks;
-(void)combineStacks;
-(id)sortedStacks;
-(void)printStacksToStream:(_sFILE*)arg1 ;
-(id)initForIdentificationPurposesWithSampleTask:(id)arg1 ;
-(void)calculateTimeIndexes;
-(NSArray *)threadsInPreviousSample;
-(unsigned long long)timestampIndexWhenTransitionedToSamplingAllThreads;
@end
