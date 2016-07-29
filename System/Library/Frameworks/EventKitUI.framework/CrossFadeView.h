/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CrossFadeView : UIView {

	BOOL _scaleSize;
	UIView* _startView;
	UIView* _endView;
	CGRect _startFrame;
	CGRect _endFrame;

}

@property (nonatomic,readonly) UIView * startView;              //@synthesize startView=_startView - In the implementation block
@property (nonatomic,readonly) UIView * endView;                //@synthesize endView=_endView - In the implementation block
@property (nonatomic,readonly) CGRect startFrame;               //@synthesize startFrame=_startFrame - In the implementation block
@property (nonatomic,readonly) CGRect endFrame;                 //@synthesize endFrame=_endFrame - In the implementation block
@property (assign,nonatomic) BOOL scaleSize;                    //@synthesize scaleSize=_scaleSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)description;
-(CGRect)endFrame;
-(CGRect)startFrame;
-(void)setStartView:(UIView *)arg1 ;
-(void)setEndView:(UIView *)arg1 ;
-(void)setToEndState;
-(void)setToStartState;
-(void)springAnimateToStartStateWithTimingFunction:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)springAnimateToEndStateWithTimingFunction:(int)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)scaleSize;
-(UIView *)startView;
-(UIView *)endView;
-(id)initWithStartView:(id)arg1 endView:(id)arg2 startFrame:(CGRect)arg3 endFrame:(CGRect)arg4 ;
-(void)animateToStartStateWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)animateToEndStateWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)springAnimateToStartStateWithTimingFunction:(int)arg1 ;
-(void)springAnimateToEndStateWithTimingFunction:(int)arg1 ;
-(void)haltAnimation;
-(void)setScaleSize:(BOOL)arg1 ;
@end

