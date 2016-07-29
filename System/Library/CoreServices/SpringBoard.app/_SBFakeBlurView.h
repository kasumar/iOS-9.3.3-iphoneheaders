/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <SpringBoard/_SBFakeBlur.h>

@protocol _SBFakeBlurObserver;
@class SBFWallpaperView, UIImageView, NSString;

@interface _SBFakeBlurView : UIView <_SBFakeBlur> {

	long long _requestedStyle;
	long long _effectiveStyle;
	SBFWallpaperView* _wallpaperView;
	BOOL _fullscreen;
	UIImageView* _imageView;
	id<_SBFakeBlurObserver> _observer;

}

@property (nonatomic,readonly) long long variant; 
@property (assign,nonatomic) BOOL fullscreen;                               //@synthesize fullscreen=_fullscreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<_SBFakeBlurObserver> observer;              //@synthesize observer=_observer - In the implementation block
+(id)_imageForStyle:(inout long long*)arg1 withSource:(id)arg2 ;
-(id)initWithVariant:(long long)arg1 ;
-(void)reconfigureWithSource:(id)arg1 ;
-(void)updateImageWithSource:(id)arg1 ;
-(void)rotateToInterfaceOrientation:(long long)arg1 ;
-(void)_updateImageWithSource:(id)arg1 notifyObserver:(BOOL)arg2 ;
-(void)_setImage:(id)arg1 style:(long long)arg2 notify:(BOOL)arg3 ;
-(long long)effectiveStyle;
-(BOOL)fullscreen;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(NSString *)description;
-(void)willMoveToWindow:(id)arg1 ;
-(id<_SBFakeBlurObserver>)observer;
-(void)setObserver:(id<_SBFakeBlurObserver>)arg1 ;
-(void)requestStyle:(long long)arg1 ;
-(void)setFullscreen:(BOOL)arg1 ;
-(long long)variant;
@end

