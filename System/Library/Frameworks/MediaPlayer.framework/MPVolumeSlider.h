/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UISlider.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>

@class MPVolumeController, NSTimer, UILabel, UIImageView, UIView, UIImage, MPAVRoutingController, MPAVController, NSString;

@interface MPVolumeSlider : UISlider <MPAVRoutingControllerDelegate, MPVolumeControllerDelegate> {

	MPVolumeController* _volumeController;
	NSTimer* _commitTimer;
	UILabel* _routeNameLabel;
	long long _style;
	UIImageView* _thumbImageView;
	UIImageView* _thumbMaskImageView;
	BOOL _isOffScreen;
	BOOL _forcingOffscreenVisibility;
	BOOL _thumbIsDefault;
	UIView* _volumeWarningView;
	BOOL _volumeWarningBlinking;
	UIImage* _volumeWarningTrackImage;
	MPAVRoutingController* _routingController;
	UIEdgeInsets _hitRectInsets;

}

@property (nonatomic,readonly) long long style;                                        //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,copy) NSString * volumeAudioCategory; 
@property (nonatomic,retain) UIImage * volumeWarningTrackImage;                        //@synthesize volumeWarningTrackImage=_volumeWarningTrackImage - In the implementation block
@property (assign,setter=_setIsOffScreen:,nonatomic) BOOL _isOffScreen; 
@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                               //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (nonatomic,readonly) MPAVRoutingController * routingController; 
@property (nonatomic,readonly) UIView * volumeWarningView;                             //@synthesize volumeWarningView=_volumeWarningView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(long long)style;
-(CGRect)hitRect;
-(void)didMoveToSuperview;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(id)createThumbView;
-(float)minimumValue;
-(float)maximumValue;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)_setIsOffScreen:(BOOL)arg1 ;
-(void)_resetThumbImageForState:(unsigned long long)arg1 ;
-(id)_minTrackImageForStyle:(long long)arg1 ;
-(id)_maxTrackImageForStyle:(long long)arg1 ;
-(void)_endBlinkingWarningView;
-(void)_commitVolumeChange;
-(void)_endTracking;
-(NSString *)volumeAudioCategory;
-(void)setVolumeAudioCategory:(NSString *)arg1 ;
-(void)_beginBlinkingWarningView;
-(id)_thumbImageForStyle:(long long)arg1 ;
-(void)_routeNameLabelAnimationDidEnd;
-(void)_blinkWarningView;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2 ;
-(void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2 ;
-(void)setVolumeWarningTrackImage:(UIImage *)arg1 ;
-(BOOL)_isOffScreen;
-(UIImage *)volumeWarningTrackImage;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitRectInsets;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
-(MPAVRoutingController *)routingController;
-(void)_availableRoutesDidChangeNotification:(id)arg1 ;
-(UIView *)volumeWarningView;
-(void)_layoutVolumeWarningView;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(id)_newVolumeWarningView;
-(void)_layoutForAvailableRoutes;
@end

