/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_SBFVibrantView.h>

@protocol SBResponderTouchDelegate;
@class UIView, SBUILegibilityView, SBSaturatedIconView, UIImage, _SBFVibrantSettings, NSString;

@interface SBSlideUpAppGrabberView : UIView <_SBFVibrantView> {

	UIEdgeInsets _hitTestEdgeInsets;
	UIView* _tintView;
	UIView* _backgroundView;
	SBUILegibilityView* _legibilityView;
	SBSaturatedIconView* _saturatedIconView;
	UIImage* _grabberImage;
	BOOL _vibrancyAllowed;
	_SBFVibrantSettings* _vibrantSettings;
	id<SBResponderTouchDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBResponderTouchDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets hitTestEdgeInsets;                           //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
@property (assign,getter=isVibrancyAllowed,nonatomic) BOOL vibrancyAllowed;              //@synthesize vibrancyAllowed=_vibrancyAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SBFVibrantSettings * vibrantSettings;                      //@synthesize vibrantSettings=_vibrantSettings - In the implementation block
-(id)initWithAdditionalTopPadding:(BOOL)arg1 invertVerticalInsets:(BOOL)arg2 ;
-(void)setAppStyleGrabberImage:(id)arg1 ;
-(void)setGrabberImageFromApp:(id)arg1 withIconFormat:(int)arg2 ;
-(void)setGrabberImage:(id)arg1 ;
-(void)setGrabberImageFromApp:(id)arg1 ;
-(id)_lazyLegibilityView;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SBResponderTouchDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SBResponderTouchDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(id)arg1 ;
-(_SBFVibrantSettings *)vibrantSettings;
-(void)setVibrantSettings:(_SBFVibrantSettings *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(BOOL)_shouldUseVibrancy;
-(BOOL)isVibrancyAllowed;
-(void)setVibrancyAllowed:(BOOL)arg1 ;
-(UIEdgeInsets)hitTestEdgeInsets;
@end

