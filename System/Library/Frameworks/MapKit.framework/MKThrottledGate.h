/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, VKTimer;

@interface MKThrottledGate : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _maxAvailableTickets;
	double _availableTickets;
	double _refreshRate;
	NSMutableArray* _waitingJobs;
	VKTimer* _timer;

}
-(void)dealloc;
-(id)description;
-(BOOL)_replenishAvailableJobsIfNecessary;
-(BOOL)_dispatchWaitingJobsIfNecessary;
-(void)dispatch:(/*^block*/id)arg1 ;
-(id)initWithMax:(int)arg1 refreshRate:(double)arg2 queue:(id)arg3 ;
-(void)_ensureTimer;
-(void)_timerFired:(id)arg1 ;
@end

