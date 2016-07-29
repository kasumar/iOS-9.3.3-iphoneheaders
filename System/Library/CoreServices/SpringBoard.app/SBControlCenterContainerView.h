/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBControlCenterObserver.h>

@class UIView, SBChevronView, SBControlCenterContentContainerView, NSString;

@interface SBControlCenterContainerView : UIView <SBControlCenterObserver> {

	UIView* _darkeningView;
	double _revealPercentage;
	SBChevronView* _chevronToTrack;
	BOOL _useMaxDarkness;
	BOOL _animatingDynamically;
	BOOL _adjustingBrightness;
	UIView* _dynamicsContainerView;
	SBControlCenterContentContainerView* _contentContainerView;

}

@property (nonatomic,readonly) UIView * dynamicsContainerView;                                          //@synthesize dynamicsContainerView=_dynamicsContainerView - In the implementation block
@property (nonatomic,readonly) SBControlCenterContentContainerView * contentContainerView;              //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (assign,nonatomic) double revealPercentage; 
@property (assign,nonatomic) BOOL animatingDynamically;                                                 //@synthesize animatingDynamically=_animatingDynamically - In the implementation block
@property (assign,getter=isAdjustingBrightness,nonatomic) BOOL adjustingBrightness;                     //@synthesize adjustingBrightness=_adjustingBrightness - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)abortAnimatedTransition;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
-(void)controlCenterWillFinishTransitionOpen:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)trackChevronView:(id)arg1 ;
-(void)setRevealPercentage:(double)arg1 ;
-(double)revealPercentage;
-(void)setAnimatingDynamically:(BOOL)arg1 ;
-(UIView *)dynamicsContainerView;
-(void)_updateDarkeningFrame;
-(BOOL)animatingDynamically;
-(id)_currentBGColor;
-(id)_contentChevronView;
-(void)setAdjustingBrightness:(BOOL)arg1 ;
-(void)updateBackgroundSettings:(id)arg1 ;
-(BOOL)isAdjustingBrightness;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentHeight:(double)arg1 ;
-(void)_updateContentFrame;
-(SBControlCenterContentContainerView *)contentContainerView;
@end

