/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface PSWallClockMinuteTimer : NSObject {

	id _target;
	SEL _action;
	NSTimer* _timer;

}
-(void)invalidate;
-(void)startTimer;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)_fireAction;
@end

