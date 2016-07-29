/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLActivityCriterion.h>

@class PLMonotonicTimer;

@interface PLActivityCriterionTime : PLActivityCriterion {

	double _interval;
	double _rescheduleDelay;
	PLMonotonicTimer* _timer;

}

@property (assign) double interval;                               //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) double rescheduleDelay;              //@synthesize rescheduleDelay=_rescheduleDelay - In the implementation block
@property (retain) PLMonotonicTimer * timer;                      //@synthesize timer=_timer - In the implementation block
+(double)minTimeInterval;
+(id)timeCriterionWithInterval:(double)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setTimer:(PLMonotonicTimer *)arg1 ;
-(PLMonotonicTimer *)timer;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(void)didEnableActivity:(id)arg1 ;
-(void)didCompleteActivity:(id)arg1 ;
-(void)didInterruptActivity:(id)arg1 ;
-(void)didDisableActivity:(id)arg1 ;
-(id)initWithInterval:(double)arg1 ;
-(double)rescheduleDelay;
-(void)setRescheduleDelay:(double)arg1 ;
@end

