/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface SKUIScalingFlipView : UIView {

	UIView* _backView;
	/*^block*/id _completionBlock;
	long long _direction;
	double _duration;
	CGRect _fromFrame;
	UIView* _frontView;
	CGRect _toFrame;

}

@property (assign,nonatomic) long long direction;              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double duration;                  //@synthesize duration=_duration - In the implementation block
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(id)_timingFunction;
-(id)initWithFrontView:(id)arg1 backView:(id)arg2 ;
-(void)performFlipWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_frontLayerAnimation;
-(id)_backLayerAnimation;
-(id)_inputColorAnimation;
-(id)_positionAnimation;
@end

