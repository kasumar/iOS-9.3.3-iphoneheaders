/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class AVCaptureVideoPreviewLayer, UIView, CAMEffectsFullsizeView, CAMEffectsGridView, CAMEffectsGridLabelsView;

@interface CAMVideoPreviewView : UIView {

	BOOL _disableLayoutForPreviewView;
	BOOL _disableLayoutForEffectsFullsizeView;
	BOOL _disableLayoutForEffectsGridViews;
	BOOL _square;
	AVCaptureVideoPreviewLayer* _videoPreviewLayer;
	UIView* _previewLayerView;
	CAMEffectsFullsizeView* _effectsFullsizeView;
	CAMEffectsGridView* _effectsGridView;
	CAMEffectsGridLabelsView* _effectsGridLabelsView;
	UIView* _fadeOutView;
	long long _previewViewAspectMode;
	long long _orientation;

}

@property (nonatomic,retain) AVCaptureVideoPreviewLayer * videoPreviewLayer;                                                      //@synthesize videoPreviewLayer=_videoPreviewLayer - In the implementation block
@property (nonatomic,readonly) UIView * previewLayerView;                                                                         //@synthesize previewLayerView=_previewLayerView - In the implementation block
@property (nonatomic,readonly) CAMEffectsFullsizeView * effectsFullsizeView;                                                      //@synthesize effectsFullsizeView=_effectsFullsizeView - In the implementation block
@property (nonatomic,readonly) CAMEffectsGridView * effectsGridView;                                                              //@synthesize effectsGridView=_effectsGridView - In the implementation block
@property (nonatomic,readonly) CAMEffectsGridLabelsView * effectsGridLabelsView;                                                  //@synthesize effectsGridLabelsView=_effectsGridLabelsView - In the implementation block
@property (nonatomic,readonly) UIView * fadeOutView;                                                                              //@synthesize fadeOutView=_fadeOutView - In the implementation block
@property (assign,nonatomic) long long previewViewAspectMode;                                                                     //@synthesize previewViewAspectMode=_previewViewAspectMode - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                               //@synthesize orientation=_orientation - In the implementation block
@property (assign,getter=isDisabledLayoutForPreviewView,nonatomic) BOOL disableLayoutForPreviewView;                              //@synthesize disableLayoutForPreviewView=_disableLayoutForPreviewView - In the implementation block
@property (assign,getter=isDisabledLayoutForEffectsFullsizeView,nonatomic) BOOL disableLayoutForEffectsFullsizeView;              //@synthesize disableLayoutForEffectsFullsizeView=_disableLayoutForEffectsFullsizeView - In the implementation block
@property (assign,getter=isDisabledLayoutForEffectsGridViews,nonatomic) BOOL disableLayoutForEffectsGridViews;                    //@synthesize disableLayoutForEffectsGridViews=_disableLayoutForEffectsGridViews - In the implementation block
@property (assign,getter=isSquare,nonatomic) BOOL square;                                                                         //@synthesize square=_square - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(BOOL)isSquare;
-(CGRect)frameForView:(id)arg1 ;
-(long long)previewViewAspectMode;
-(void)setPreviewViewAspectMode:(long long)arg1 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(void)setVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(CAMEffectsFullsizeView *)effectsFullsizeView;
-(CAMEffectsGridView *)effectsGridView;
-(UIView *)previewLayerView;
-(void)createEffectsFullsizeView;
-(void)createEffectsGridViews;
-(void)destroyEffectsFullsizeViewRemoveFromSuperview:(BOOL)arg1 ;
-(void)destroyEffectsGridViewsRemoveFromSuperview:(BOOL)arg1 ;
-(CAMEffectsGridLabelsView *)effectsGridLabelsView;
-(void)setDisableLayoutForEffectsFullsizeView:(BOOL)arg1 ;
-(void)setDisableLayoutForPreviewView:(BOOL)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toSublayer:(id)arg2 ;
-(UIView *)fadeOutView;
-(void)setDisableLayoutForEffectsGridViews:(BOOL)arg1 ;
-(CGRect)_frameForSubviewsAccountForSquare:(BOOL)arg1 ;
-(void)_updateAspectModeForSublayers;
-(void)setSquare:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSquare:(BOOL)arg1 ;
-(BOOL)isDisabledLayoutForPreviewView;
-(BOOL)isDisabledLayoutForEffectsFullsizeView;
-(BOOL)isDisabledLayoutForEffectsGridViews;
@end

