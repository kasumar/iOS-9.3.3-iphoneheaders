/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage, NSArray;

@interface CAMIrisButton : UIButton {

	long long _irisMode;
	UIImage* __baseImage;
	NSArray* __enablingAnimationImages;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (assign,nonatomic) long long irisMode;                                                                //@synthesize irisMode=_irisMode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                                   //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (nonatomic,readonly) UIImage * _baseImage;                                                            //@synthesize _baseImage=__baseImage - In the implementation block
@property (setter=_setEnablingAnimationImages:,nonatomic,copy) NSArray * _enablingAnimationImages;              //@synthesize _enablingAnimationImages=__enablingAnimationImages - In the implementation block
+(id)irisButton;
+(double)enablingAnimationDuration;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(UIImage *)_baseImage;
-(void)setIrisMode:(long long)arg1 ;
-(long long)irisMode;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)interruptEnablingAnimation;
-(void)preloadEnablingAnimation;
-(void)performEnablingAnimation;
-(void)_updateTintColorForMode:(long long)arg1 ;
-(void)_commonCAMIrisButtonConfiguration;
-(BOOL)_shouldLoadEnablingAnimationImages;
-(id)_actuallyLoadEnablingAnimationImagesForScale:(double)arg1 ;
-(void)_setEnablingAnimationImages:(id)arg1 ;
-(NSArray *)_enablingAnimationImages;
-(void)_ensureEnablingAnimationImages;
@end

