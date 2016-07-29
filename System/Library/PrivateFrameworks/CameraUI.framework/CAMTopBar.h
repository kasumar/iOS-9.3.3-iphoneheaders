/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAMExpandableMenuButtonDelegate.h>

@protocol CAMControlVisibilityUpdateDelegate;
@class CAMFlashButton, CAMElapsedTimeView, CAMHDRButton, CAMFlipButton, CAMTimerButton, CAMIrisButton, UIView, NSMutableArray, CAMExpandableMenuButton;

@interface CAMTopBar : UIView <CAMExpandableMenuButtonDelegate> {

	id<CAMControlVisibilityUpdateDelegate> _visibilityUpdateDelegate;
	long long _style;
	long long _backgroundStyle;
	CAMFlashButton* _flashButton;
	CAMElapsedTimeView* _elapsedTimeView;
	CAMHDRButton* _HDRButton;
	CAMFlipButton* _flipButton;
	CAMTimerButton* _timerButton;
	CAMIrisButton* _irisButton;
	long long _orientation;
	UIView* __backgroundView;
	NSMutableArray* __allowedControls;
	CAMExpandableMenuButton* __expandedMenuButton;
	UIEdgeInsets __expandedMenuButtonTappableInsets;

}

@property (assign,nonatomic,__weak) id<CAMControlVisibilityUpdateDelegate> visibilityUpdateDelegate;                                   //@synthesize visibilityUpdateDelegate=_visibilityUpdateDelegate - In the implementation block
@property (assign,nonatomic) long long style;                                                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                                                                //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,retain) CAMFlashButton * flashButton;                                                                             //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,retain) CAMElapsedTimeView * elapsedTimeView;                                                                     //@synthesize elapsedTimeView=_elapsedTimeView - In the implementation block
@property (nonatomic,retain) CAMHDRButton * HDRButton;                                                                                 //@synthesize HDRButton=_HDRButton - In the implementation block
@property (nonatomic,retain) CAMFlipButton * flipButton;                                                                               //@synthesize flipButton=_flipButton - In the implementation block
@property (nonatomic,retain) CAMTimerButton * timerButton;                                                                             //@synthesize timerButton=_timerButton - In the implementation block
@property (nonatomic,retain) CAMIrisButton * irisButton;                                                                               //@synthesize irisButton=_irisButton - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                                    //@synthesize orientation=_orientation - In the implementation block
@property (getter=isFloating,nonatomic,readonly) BOOL floating; 
@property (nonatomic,readonly) UIView * _backgroundView;                                                                               //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _allowedControls;                                                                      //@synthesize _allowedControls=__allowedControls - In the implementation block
@property (setter=_setExpandedMenuButton:,nonatomic,retain) CAMExpandableMenuButton * _expandedMenuButton;                             //@synthesize _expandedMenuButton=__expandedMenuButton - In the implementation block
@property (assign,setter=_setExpandedMenuButtonTappableInsets:,nonatomic) UIEdgeInsets _expandedMenuButtonTappableInsets;              //@synthesize _expandedMenuButtonTappableInsets=__expandedMenuButtonTappableInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIView *)_backgroundView;
-(void)setOrientation:(long long)arg1 ;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)orientation;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(CAMElapsedTimeView *)elapsedTimeView;
-(CAMFlashButton *)flashButton;
-(CAMFlipButton *)flipButton;
-(CAMIrisButton *)irisButton;
-(double)_opacityForBackgroundStyle:(long long)arg1 ;
-(CAMExpandableMenuButton *)_expandedMenuButton;
-(CGRect)expandedFrameForMenuButton:(id)arg1 ;
-(id<CAMControlVisibilityUpdateDelegate>)visibilityUpdateDelegate;
-(CAMHDRButton *)HDRButton;
-(CAMTimerButton *)timerButton;
-(CGRect)collapsedFrameForMenuButton:(id)arg1 ;
-(void)_setExpandedMenuButton:(id)arg1 ;
-(void)_updateControlVisibilityAnimated:(BOOL)arg1 ;
-(void)collapseMenuButton:(id)arg1 animated:(BOOL)arg2 ;
-(void)expandMenuButton:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFlipButton:(CAMFlipButton *)arg1 ;
-(void)setFlashButton:(CAMFlashButton *)arg1 ;
-(void)setElapsedTimeView:(CAMElapsedTimeView *)arg1 ;
-(void)setHDRButton:(CAMHDRButton *)arg1 ;
-(void)setTimerButton:(CAMTimerButton *)arg1 ;
-(void)setIrisButton:(CAMIrisButton *)arg1 ;
-(BOOL)shouldHideFlashButtonForMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)shouldHideHDRButtonForMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)shouldHideTimerButtonForMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)shouldHideElapsedTimeViewForMode:(long long)arg1 device:(long long)arg2 ;
-(void)setVisibilityUpdateDelegate:(id<CAMControlVisibilityUpdateDelegate>)arg1 ;
-(void)configureForMode:(long long)arg1 ;
-(BOOL)_shouldExpandButtonsHorizontally;
-(void)configureForMode:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldHideIrisButtonForMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)shouldHideFlipButtonForMode:(long long)arg1 device:(long long)arg2 ;
-(void)_commonCAMTopBarInitialization;
-(void)_layoutDefaultStyle;
-(void)_layoutFloatingStyle;
-(void)_layoutFloatingRecordingStyle;
-(double)_backgroundCornerRadiusForStyle:(long long)arg1 ;
-(BOOL)_backgroundMasksToBoundsForStyle:(long long)arg1 ;
-(NSMutableArray *)_allowedControls;
-(void)_layoutControls:(id)arg1 apply:(BOOL)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(CGRect*)arg5 ;
-(double)_interpolatedFloatingBarHeight;
-(id)_allowedControlsForStillImageMode;
-(id)_allowedControlsForSquareMode;
-(id)_allowedControlsForVideoMode;
-(id)_allowedControlsForPanoramaMode;
-(id)_allowedControlsForTimelapseMode;
-(UIEdgeInsets)_expandedMenuButtonTappableInsets;
-(void)_setExpandedMenuButtonTappableInsets:(UIEdgeInsets)arg1 ;
-(BOOL)isFloating;
@end

