/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UITouch, NSTimer;

@interface MPTapGestureRecognizer : UIGestureRecognizer {

	unsigned long long _lastTapCount;
	CGPoint _tapLocation;
	UITouch* _trackingTouch;
	NSTimer* _tapHandleTimer;

}

@property (assign) unsigned long long tapCount;              //@synthesize lastTapCount=_lastTapCount - In the implementation block
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setTapCount:(unsigned long long)arg1 ;
-(void)reset;
-(unsigned long long)tapCount;
-(void)_delayedHandleTaps:(id)arg1 ;
-(void)_resetTapTimer;
-(void)_setTapTimerWithDuration:(double)arg1 ;
@end

