/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIClearBackgroundCell.h>

@class UIView, SiriUIAceObjectViewController;

@interface SiriUIAceObjectControllerCell : SiriUIClearBackgroundCell {

	UIView* _animationView;
	SiriUIAceObjectViewController* _aceViewController;
	long long _insertionAnimationType;
	long long _replacementAnimationType;
	UIView* _replacedView;

}

@property (nonatomic,retain) SiriUIAceObjectViewController * aceViewController;              //@synthesize aceViewController=_aceViewController - In the implementation block
@property (assign,nonatomic) long long insertionAnimationType;                               //@synthesize insertionAnimationType=_insertionAnimationType - In the implementation block
@property (assign,nonatomic) long long replacementAnimationType;                             //@synthesize replacementAnimationType=_replacementAnimationType - In the implementation block
@property (nonatomic,retain) UIView * replacedView;                                          //@synthesize replacedView=_replacedView - In the implementation block
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setReplacedView:(UIView *)arg1 ;
-(void)setAceViewController:(SiriUIAceObjectViewController *)arg1 ;
-(SiriUIAceObjectViewController *)aceViewController;
-(void)_parentViewInCell;
-(void)_parentPreviousViewInCell;
-(void)_animateInsertionFlyIn;
-(void)_animateInsertionFadeIn;
-(void)_animateReplacementCrossFade;
-(id)_flyInAnimationForAceViewController:(id)arg1 ;
-(void)configureSubviewsForAnimationType;
-(void)beginAnimation;
-(long long)insertionAnimationType;
-(void)setInsertionAnimationType:(long long)arg1 ;
-(long long)replacementAnimationType;
-(void)setReplacementAnimationType:(long long)arg1 ;
-(UIView *)replacedView;
@end

