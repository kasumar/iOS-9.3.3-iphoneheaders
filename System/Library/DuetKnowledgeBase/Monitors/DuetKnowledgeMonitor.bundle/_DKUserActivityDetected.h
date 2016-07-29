/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface _DKUserActivityDetected : _DKMonitor {

	int notifyToken;
	unsigned long long currentState;
	NSObject*<OS_dispatch_source> stateChangeTimer;
	NSObject*<OS_dispatch_source> eligibilityTimer;
	BOOL timerDispatched;
	BOOL streamInitialized;

}
+(id)_eventWithState:(id)arg1 ;
+(id)eventStream;
+(id)entitlements;
-(void)changeUserState:(long long)arg1 ;
-(void)enforceEligibilityPeriod;
-(void)stop;
-(void)start;
-(void)handleBacklightStateChange;
@end

