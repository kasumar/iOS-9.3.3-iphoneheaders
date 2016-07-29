/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class NSHashTable;

@interface ISPlaybackSpec : NSObject {

	NSHashTable* _observers;
	BOOL _shouldScaleAndBlurForPlayback;
	BOOL _shouldSettleAutomatically;
	BOOL _allowVitality;
	BOOL _allowAudio;
	BOOL _useTransition;
	BOOL _useVitalityBuffer;
	BOOL _useForceTouchInitiatedPlayback;
	BOOL _useForceScrubPlayback;
	BOOL _useForcePlayratePlayback;
	BOOL _wantsCrossfadeLayer;
	BOOL _aggressivelyCachesVideoFrames;
	BOOL _reversesMoreVideoFramesInMemory;
	double _timeMultiplier;
	double _preCrossfadeDuration;
	double _playbackTransitionBlurRadius;
	double _playbackTransitionScale;
	double _vitalityPreDuration;
	double _vitalityPostDuration;
	double _playbackPreDuration;
	double _playbackPostDuration;
	double _playbackTransitionDuration;
	double _playbackTransitionCrossfadeDelay;
	double _settleTransitionDuration;
	double _vitalityTransitionDuration;
	double _endVitalityTransitionDuration;
	CGPoint _transitionBlurTimingFunctionControlPoint1;
	CGPoint _transitionBlurTimingFunctionControlPoint2;
	CGPoint _transitionScaleTimingFunctionControlPoint1;
	CGPoint _transitionScaleTimingFunctionControlPoint2;
	CGPoint _transitionFadeTimingFunctionControlPoint1;
	CGPoint _transitionFadeTimingFunctionControlPoint2;

}

@property (assign,nonatomic) double timeMultiplier;                                           //@synthesize timeMultiplier=_timeMultiplier - In the implementation block
@property (assign,nonatomic) BOOL shouldScaleAndBlurForPlayback;                              //@synthesize shouldScaleAndBlurForPlayback=_shouldScaleAndBlurForPlayback - In the implementation block
@property (assign,nonatomic) BOOL shouldSettleAutomatically;                                  //@synthesize shouldSettleAutomatically=_shouldSettleAutomatically - In the implementation block
@property (assign,nonatomic) double preCrossfadeDuration;                                     //@synthesize preCrossfadeDuration=_preCrossfadeDuration - In the implementation block
@property (assign,nonatomic) double playbackTransitionBlurRadius;                             //@synthesize playbackTransitionBlurRadius=_playbackTransitionBlurRadius - In the implementation block
@property (assign,nonatomic) double playbackTransitionScale;                                  //@synthesize playbackTransitionScale=_playbackTransitionScale - In the implementation block
@property (assign,nonatomic) double vitalityPreDuration;                                      //@synthesize vitalityPreDuration=_vitalityPreDuration - In the implementation block
@property (assign,nonatomic) double vitalityPostDuration;                                     //@synthesize vitalityPostDuration=_vitalityPostDuration - In the implementation block
@property (assign,nonatomic) double playbackPreDuration;                                      //@synthesize playbackPreDuration=_playbackPreDuration - In the implementation block
@property (assign,nonatomic) double playbackPostDuration;                                     //@synthesize playbackPostDuration=_playbackPostDuration - In the implementation block
@property (assign,nonatomic) double playbackTransitionDuration;                               //@synthesize playbackTransitionDuration=_playbackTransitionDuration - In the implementation block
@property (assign,nonatomic) double playbackTransitionCrossfadeDelay;                         //@synthesize playbackTransitionCrossfadeDelay=_playbackTransitionCrossfadeDelay - In the implementation block
@property (assign,nonatomic) double settleTransitionDuration;                                 //@synthesize settleTransitionDuration=_settleTransitionDuration - In the implementation block
@property (assign,nonatomic) double vitalityTransitionDuration;                               //@synthesize vitalityTransitionDuration=_vitalityTransitionDuration - In the implementation block
@property (assign,nonatomic) double endVitalityTransitionDuration;                            //@synthesize endVitalityTransitionDuration=_endVitalityTransitionDuration - In the implementation block
@property (assign,nonatomic) CGPoint transitionBlurTimingFunctionControlPoint1;               //@synthesize transitionBlurTimingFunctionControlPoint1=_transitionBlurTimingFunctionControlPoint1 - In the implementation block
@property (assign,nonatomic) CGPoint transitionBlurTimingFunctionControlPoint2;               //@synthesize transitionBlurTimingFunctionControlPoint2=_transitionBlurTimingFunctionControlPoint2 - In the implementation block
@property (assign,nonatomic) CGPoint transitionScaleTimingFunctionControlPoint1;              //@synthesize transitionScaleTimingFunctionControlPoint1=_transitionScaleTimingFunctionControlPoint1 - In the implementation block
@property (assign,nonatomic) CGPoint transitionScaleTimingFunctionControlPoint2;              //@synthesize transitionScaleTimingFunctionControlPoint2=_transitionScaleTimingFunctionControlPoint2 - In the implementation block
@property (assign,nonatomic) CGPoint transitionFadeTimingFunctionControlPoint1;               //@synthesize transitionFadeTimingFunctionControlPoint1=_transitionFadeTimingFunctionControlPoint1 - In the implementation block
@property (assign,nonatomic) CGPoint transitionFadeTimingFunctionControlPoint2;               //@synthesize transitionFadeTimingFunctionControlPoint2=_transitionFadeTimingFunctionControlPoint2 - In the implementation block
@property (assign,nonatomic) BOOL allowVitality;                                              //@synthesize allowVitality=_allowVitality - In the implementation block
@property (assign,nonatomic) BOOL allowAudio;                                                 //@synthesize allowAudio=_allowAudio - In the implementation block
@property (assign,nonatomic) BOOL useTransition;                                              //@synthesize useTransition=_useTransition - In the implementation block
@property (assign,nonatomic) BOOL useVitalityBuffer;                                          //@synthesize useVitalityBuffer=_useVitalityBuffer - In the implementation block
@property (assign,nonatomic) BOOL useForceTouchInitiatedPlayback;                             //@synthesize useForceTouchInitiatedPlayback=_useForceTouchInitiatedPlayback - In the implementation block
@property (assign,nonatomic) BOOL useForceScrubPlayback;                                      //@synthesize useForceScrubPlayback=_useForceScrubPlayback - In the implementation block
@property (assign,nonatomic) BOOL useForcePlayratePlayback;                                   //@synthesize useForcePlayratePlayback=_useForcePlayratePlayback - In the implementation block
@property (assign,nonatomic) BOOL wantsCrossfadeLayer;                                        //@synthesize wantsCrossfadeLayer=_wantsCrossfadeLayer - In the implementation block
@property (assign,nonatomic) BOOL aggressivelyCachesVideoFrames;                              //@synthesize aggressivelyCachesVideoFrames=_aggressivelyCachesVideoFrames - In the implementation block
@property (assign,nonatomic) BOOL reversesMoreVideoFramesInMemory;                            //@synthesize reversesMoreVideoFramesInMemory=_reversesMoreVideoFramesInMemory - In the implementation block
-(id)init;
-(void)setDefaultValues;
-(BOOL)reversesMoreVideoFramesInMemory;
-(BOOL)aggressivelyCachesVideoFrames;
-(void)setReversesMoreVideoFramesInMemory:(BOOL)arg1 ;
-(void)setAggressivelyCachesVideoFrames:(BOOL)arg1 ;
-(double)timeMultiplier;
-(void)setTimeMultiplier:(double)arg1 ;
-(void)setAllowAudio:(BOOL)arg1 ;
-(void)_didChange;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)setPlaybackTransitionBlurRadius:(double)arg1 ;
-(void)setPlaybackTransitionScale:(double)arg1 ;
-(double)playbackPreDuration;
-(void)setPlaybackPreDuration:(double)arg1 ;
-(double)playbackPostDuration;
-(void)setPlaybackPostDuration:(double)arg1 ;
-(void)setAllowVitality:(BOOL)arg1 ;
-(BOOL)useVitalityBuffer;
-(void)setUseVitalityBuffer:(BOOL)arg1 ;
-(BOOL)useTransition;
-(void)setUseTransition:(BOOL)arg1 ;
-(void)setPlaybackTransitionDuration:(double)arg1 ;
-(double)settleTransitionDuration;
-(void)setSettleTransitionDuration:(double)arg1 ;
-(double)playbackTransitionCrossfadeDelay;
-(void)setPlaybackTransitionCrossfadeDelay:(double)arg1 ;
-(BOOL)useForceTouchInitiatedPlayback;
-(void)setUseForceTouchInitiatedPlayback:(BOOL)arg1 ;
-(void)setHintPlaybackValuesWithPhotoHasColorAdjustments:(BOOL)arg1 ;
-(void)setEndVitalityTransitionDuration:(double)arg1 ;
-(BOOL)allowAudio;
-(BOOL)wantsCrossfadeLayer;
-(double)preCrossfadeDuration;
-(double)playbackTransitionDuration;
-(BOOL)useForceScrubPlayback;
-(BOOL)useForcePlayratePlayback;
-(BOOL)shouldScaleAndBlurForPlayback;
-(BOOL)shouldSettleAutomatically;
-(void)setWantsCrossfadeLayer:(BOOL)arg1 ;
-(void)setUseForcePlayratePlayback:(BOOL)arg1 ;
-(BOOL)allowVitality;
-(double)playbackTransitionScale;
-(double)playbackTransitionBlurRadius;
-(double)vitalityTransitionDuration;
-(double)endVitalityTransitionDuration;
-(CGPoint)transitionScaleTimingFunctionControlPoint1;
-(CGPoint)transitionScaleTimingFunctionControlPoint2;
-(CGPoint)transitionBlurTimingFunctionControlPoint1;
-(CGPoint)transitionBlurTimingFunctionControlPoint2;
-(CGPoint)transitionFadeTimingFunctionControlPoint1;
-(CGPoint)transitionFadeTimingFunctionControlPoint2;
-(void)setPreCrossfadeDuration:(double)arg1 ;
-(void)setShouldSettleAutomatically:(BOOL)arg1 ;
-(void)setShouldScaleAndBlurForPlayback:(BOOL)arg1 ;
-(void)setVitalityTransitionDuration:(double)arg1 ;
-(void)setTransitionBlurTimingFunctionControlPoint1:(CGPoint)arg1 ;
-(void)setTransitionBlurTimingFunctionControlPoint2:(CGPoint)arg1 ;
-(void)setTransitionScaleTimingFunctionControlPoint1:(CGPoint)arg1 ;
-(void)setTransitionScaleTimingFunctionControlPoint2:(CGPoint)arg1 ;
-(void)setTransitionFadeTimingFunctionControlPoint1:(CGPoint)arg1 ;
-(void)setTransitionFadeTimingFunctionControlPoint2:(CGPoint)arg1 ;
-(void)setUseForceScrubPlayback:(BOOL)arg1 ;
-(void)setHintPlaybackValuesWithAssetOptions:(unsigned long long)arg1 ;
-(double)vitalityPreDuration;
-(void)setVitalityPreDuration:(double)arg1 ;
-(double)vitalityPostDuration;
-(void)setVitalityPostDuration:(double)arg1 ;
@end

