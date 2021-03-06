/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <ThermalMonitor/ThermalMonitor-Structs.h>
@class NSObject;

@interface ContextAwareThermalManager : NSObject {

	NSObject*<OS_dispatch_queue> catmQueue;
	NSObject*<OS_dispatch_source> theTimer;
	CFArrayRef ctxObjects;

}
+(id)sharedInstance;
-(id)createNewInPocketContext;
-(void)iterateAndUpdateContexts;
-(id)createNewSolarContext:(BOOL)arg1 ;
-(int)getContextState:(int)arg1 ;
-(BOOL)isContextTriggered:(int)arg1 ;
-(void)updateSystemPowerState:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
@end

