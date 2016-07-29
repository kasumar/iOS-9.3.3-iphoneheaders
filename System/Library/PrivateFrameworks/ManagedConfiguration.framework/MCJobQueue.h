/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MCJobQueueObserver, OS_dispatch_group;
@class NSObject;

@interface MCJobQueue : NSObject {

	NSObject*<OS_dispatch_queue> _executionQueue;
	id<MCJobQueueObserver> _observer;
	NSObject*<OS_dispatch_queue> _jobQueue;
	NSObject*<OS_dispatch_group> _jobGroup;
	/*^block*/id _executionQueueAbortCompletionBlock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> executionQueue;              //@synthesize executionQueue=_executionQueue - In the implementation block
@property (assign,nonatomic,__weak) id<MCJobQueueObserver> observer;                   //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> jobQueue;                    //@synthesize jobQueue=_jobQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> jobGroup;                    //@synthesize jobGroup=_jobGroup - In the implementation block
@property (nonatomic,copy) id executionQueueAbortCompletionBlock;                      //@synthesize executionQueueAbortCompletionBlock=_executionQueueAbortCompletionBlock - In the implementation block
-(NSObject*<OS_dispatch_group>)jobGroup;
-(NSObject*<OS_dispatch_queue>)jobQueue;
-(id)executionQueueAbortCompletionBlock;
-(void)setExecutionQueueAbortCompletionBlock:(id)arg1 ;
-(void)jobDidFinish;
-(void)waitForEnqueuedJobsToCompleteCompletionBlock:(/*^block*/id)arg1 ;
-(void)abortEnqueuedJobsCompletionBlock:(/*^block*/id)arg1 ;
-(void)setExecutionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setJobQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setJobGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)init;
-(id<MCJobQueueObserver>)observer;
-(void)setObserver:(id<MCJobQueueObserver>)arg1 ;
-(NSObject*<OS_dispatch_queue>)executionQueue;
-(void)enqueueJob:(/*^block*/id)arg1 ;
@end

