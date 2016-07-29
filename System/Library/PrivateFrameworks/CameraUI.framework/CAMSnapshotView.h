/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView;

@interface CAMSnapshotView : UIView {

	BOOL _blurred;
	BOOL _dimmed;
	BOOL __supportsBlur;
	UIView* _snapshotView;
	UIView* __lowQualityBlurView;
	UIView* __dimmingView;

}

@property (nonatomic,readonly) UIView * snapshotView;                     //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) BOOL blurred;                                //@synthesize blurred=_blurred - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                 //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,readonly) BOOL _supportsBlur;                        //@synthesize _supportsBlur=__supportsBlur - In the implementation block
@property (nonatomic,readonly) UIView * _lowQualityBlurView;              //@synthesize _lowQualityBlurView=__lowQualityBlurView - In the implementation block
@property (nonatomic,readonly) UIView * _dimmingView;                     //@synthesize _dimmingView=__dimmingView - In the implementation block
-(UIView *)snapshotView;
-(UIView *)_dimmingView;
-(id)initWithView:(id)arg1 ;
-(void)setBlurred:(BOOL)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(void)setBlurred:(BOOL)arg1 animated:(BOOL)arg2 style:(long long)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)updateToMatchLayoutOfView:(id)arg1 ;
-(void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_applySnapshotBlurForStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_removeSnapshotBlurForStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_applyLowQualityBlurForStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_removeLowQualityBlurForStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_applySnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_removeSnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_setupBlurOnSnapshot;
-(void)_prepareForApplyingBlurForStyle:(long long)arg1 applying:(BOOL)arg2 inputRadiusAmount:(double*)arg3 inputRadiusDuration:(double*)arg4 inputRadiusDelay:(double*)arg5 inputRadiusTimingFunction:(id*)arg6 opacityAmount:(double*)arg7 opacityDuration:(double*)arg8 opacityDelay:(double*)arg9 opacityTimingFunction:(id*)arg10 ;
-(UIView *)_lowQualityBlurView;
-(void)_setupLowQualityBlurOnSnapshot;
-(void)_prepareForApplyingLowQualityBlurForStyle:(long long)arg1 applying:(BOOL)arg2 opacityAmount:(double*)arg3 opacityDuration:(double*)arg4 opacityDelay:(double*)arg5 opacityTimingFunction:(id*)arg6 targetView:(id*)arg7 ;
-(void)_setupDimOnSnapshot;
-(BOOL)blurred;
-(BOOL)dimmed;
-(BOOL)_supportsBlur;
@end

