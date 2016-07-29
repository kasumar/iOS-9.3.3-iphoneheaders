/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBBrightnessController : NSObject {

	BOOL _debounce;
	BKSDisplayBrightnessTransactionRef _brightnessDownTransaction;
	BKSDisplayBrightnessTransactionRef _brightnessUpTransaction;

}
+(id)sharedBrightnessController;
-(void)handleBrightnessEvent:(IOHIDEventRef)arg1 ;
-(void)cancelBrightnessEvent;
-(float)_calcButtonRepeatDelay;
-(void)_setBrightnessLevel:(float)arg1 showHUD:(BOOL)arg2 ;
-(void)increaseBrightnessAndRepeat;
-(void)adjustBacklightLevel:(BOOL)arg1 ;
-(void)decreaseBrightnessAndRepeat;
-(void)setBrightnessLevel:(float)arg1 ;
@end

