/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class RTRoutineManager, NSObject, CLLocationManager, NSMutableSet, NSUserDefaults;

@interface ABLEBSMRoutineMonitor : NSObject {

	RTRoutineManager* routine;
	NSObject*<OS_dispatch_queue> syncQueue;
	CLLocationManager* manager;
	NSMutableSet* homes;
	NSMutableSet* frequentLOIs;
	double commuteDistance;
	NSUserDefaults* defaults;
	BOOL enabled;

}

@property (readonly) BOOL enabled; 
+(id)monitorWithDefaults:(id)arg1 ;
-(void)tryToReenable;
-(BOOL)updateCommuteDistance:(double)arg1 ;
-(id)initWithDefaults:(id)arg1 ;
-(int)isUserAt:(long long)arg1 ;
-(void)computeComputeDistance;
-(BOOL)isUserAtHome;
-(BOOL)isUserAtWork;
-(BOOL)isUserTraveling;
-(BOOL)enabled;
@end

