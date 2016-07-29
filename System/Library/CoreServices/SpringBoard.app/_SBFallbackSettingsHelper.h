/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBVolumePressBandit.h>

@class NSTimer, NSString;

@interface _SBFallbackSettingsHelper : NSObject <SBVolumePressBandit> {

	NSTimer* _clearTimer;
	unsigned long long _pressesWithinInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)useFallbackSettingsHelperOnThisDevice;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)handleTimerFired:(id)arg1 ;
-(BOOL)shouldUseFallbackAction;
-(void)reset;
@end

