/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UITouch, NSTimer;

@interface CSLIconTapGestureRecognizer : UIGestureRecognizer {

	UITouch* _trackingTouch;
	CGPoint _startLocation;
	NSTimer* _longPressTimer;
	BOOL _isLongPress;
	BOOL _longPressEnabled;
	double _longPressDuration;

}

@property (nonatomic,readonly) BOOL isLongPress;                    //@synthesize isLongPress=_isLongPress - In the implementation block
@property (assign,nonatomic) double longPressDuration;              //@synthesize longPressDuration=_longPressDuration - In the implementation block
@property (assign,nonatomic) BOOL longPressEnabled;                 //@synthesize longPressEnabled=_longPressEnabled - In the implementation block
-(double)longPressDuration;
-(void)_cleanUpTimer;
-(BOOL)longPressEnabled;
-(void)setLongPressEnabled:(BOOL)arg1 ;
-(void)_longPressTimerFired:(id)arg1 ;
-(void)setLongPressDuration:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(BOOL)isLongPress;
@end

