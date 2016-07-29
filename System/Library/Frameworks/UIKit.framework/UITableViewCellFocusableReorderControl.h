/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCellReorderControl.h>
#import <UIKit/_UIFloatingContentViewDelegate.h>

@class _UIFloatingContentView, UIPanGestureRecognizer, UITapGestureRecognizer, NSString;

@interface UITableViewCellFocusableReorderControl : UITableViewCellReorderControl <_UIFloatingContentViewDelegate> {

	_UIFloatingContentView* _floatingContentView;
	UIPanGestureRecognizer* _panRecognizer;
	UITapGestureRecognizer* _upArrowButtonRecognizer;
	UITapGestureRecognizer* _downArrowButtonRecognizer;
	BOOL _cellHasReorderingAppearance;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(id)initWithTableViewCell:(id)arg1 ;
-(BOOL)_shouldHandlePressEvent:(id)arg1 ;
-(void)_endIndirectTracking;
-(void)_updateFocusedFloatingContentView:(BOOL)arg1 ;
-(void)_panRecognizer:(id)arg1 ;
-(void)_upArrowButton:(id)arg1 ;
-(void)_downArrowButton:(id)arg1 ;
-(void)_beginIndirectTracking;
-(void)_arrowButton:(long long)arg1 ;
@end

