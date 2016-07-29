/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPTimerDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface HAPTimer : NSObject {

	double _timeInterval;
	BOOL _running;
	id<HAPTimerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _options;

}

@property (__weak) id<HAPTimerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double timeInterval;                                 //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> timer;                 //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                          //@synthesize options=_options - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                         //@synthesize running=_running - In the implementation block
-(void)setDelegate:(id<HAPTimerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<HAPTimerDelegate>)delegate;
-(void)suspend;
-(void)resume;
-(double)timeInterval;
-(unsigned long long)options;
-(BOOL)isRunning;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setRunning:(BOOL)arg1 ;
-(void)_suspend;
-(void)_fire;
-(void)_resume;
-(void)_kick;
-(void)kick;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 ;
-(void)_handleExpiration;
@end

