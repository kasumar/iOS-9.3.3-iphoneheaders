/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@class CMMotionActivityManager, NSOperationQueue;

@interface _DKMotionMonitor : _DKMonitor {

	CMMotionActivityManager* _activityManager;
	BOOL _monitoringActivity;
	NSOperationQueue* _queue;

}
+(id)_eventWithState:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)eventStream;
+(id)entitlements;
-(void)recordMotionActivity:(id)arg1 ;
-(unsigned long long)_activityTypeToState:(id)arg1 ;
-(void)computeDominantMotionType;
-(id)init;
-(void)stop;
-(void)start;
-(void)update;
@end

