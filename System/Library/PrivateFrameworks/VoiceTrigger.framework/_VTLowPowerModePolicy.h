/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>

@interface _VTLowPowerModePolicy : _VTStatePolicy {

	BOOL _lowPowerModeEnabled;

}
-(void)dealloc;
-(BOOL)isEnabled;
-(void)_lowPowerModeChangedNotification:(id)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_registerForLowPowerModeChanged;
-(void)_unregisterForLowPowerModeChanged;
@end

