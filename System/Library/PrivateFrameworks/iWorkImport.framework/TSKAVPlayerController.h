/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKMediaPlayerController.h>

@protocol TSKMediaPlayerControllerDelegate;
@class AVPlayer, NSString;

@interface TSKAVPlayerController : NSObject <TSKMediaPlayerController> {

	AVPlayer* mPlayer;
	id<TSKMediaPlayerControllerDelegate> mDelegate;
	BOOL mStreaming;
	long long mRepeatMode;
	float mVolume;
	float mRateBeforeScrubbing;
	unsigned long long mScrubbingCount;
	BOOL mCanPlay;
	BOOL mPlaying;
	BOOL mFastReversing;
	BOOL mFastForwarding;
	BOOL mIsObservingStatus;

}

@property (nonatomic,readonly) AVPlayer * player; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TSKMediaPlayerControllerDelegate> delegate; 
@property (nonatomic,readonly) BOOL canPlay; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic) long long repeatMode; 
@property (assign,nonatomic) float volume; 
@property (getter=isScrubbing,nonatomic,readonly) BOOL scrubbing; 
@property (nonatomic,readonly) BOOL canFastReverse; 
@property (assign,getter=isFastReversing,nonatomic) BOOL fastReversing; 
@property (nonatomic,readonly) BOOL canFastForward; 
@property (assign,getter=isFastForwarding,nonatomic) BOOL fastForwarding; 
@property (nonatomic,readonly) double absoluteCurrentTime; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double remainingTime; 
@property (nonatomic,readonly) double absoluteDuration; 
@property (nonatomic,readonly) double duration; 
+(id)keyPathsForValuesAffectingDuration;
+(id)keyPathsForValuesAffectingAbsoluteDuration;
+(BOOL)automaticallyNotifiesObserversOfStartTime;
+(id)keyPathsForValuesAffectingStartTime;
+(BOOL)automaticallyNotifiesObserversOfEndTime;
+(id)keyPathsForValuesAffectingEndTime;
+(id)keyPathsForValuesAffectingCanFastReverse;
+(id)keyPathsForValuesAffectingCanFastForward;
+(BOOL)automaticallyNotifiesObserversOfRate;
+(id)keyPathsForValuesAffectingRate;
-(double)absoluteCurrentTime;
-(double)absoluteDuration;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newLayer;
-(void)stopSynchronously;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2 ;
-(void)seekForwardByOneFrame;
-(void)seekBackwardByOneFrame;
-(void)seekToBeginning;
-(id)addPeriodicTimeObserverForInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)removePeriodicTimeObserver:(id)arg1 ;
-(BOOL)canFastReverse;
-(BOOL)isFastReversing;
-(void)setFastReversing:(BOOL)arg1 ;
-(BOOL)canFastForward;
-(BOOL)isFastForwarding;
-(void)setFastForwarding:(BOOL)arg1 ;
-(void)p_startObservingClosedCaptionDisplayEnabled;
-(void)p_stopObservingClosedCaptionDisplayEnabled;
-(void)p_applyVolumeToPlayerItem;
-(void)playerItemDidPlayToEndTimeAtRate:(float)arg1 ;
-(BOOL)p_canFastReverseAtCurrentTime;
-(BOOL)p_canFastForwardAtCurrentTime;
-(void)p_closedCaptioningStatusDidChange:(id)arg1 ;
-(void)p_updateClosedCaptionDisplayEnabled;
-(void)p_playerItemDidPlayToEndTime:(id)arg1 ;
-(void)p_playerItemDidJumpTime:(id)arg1 ;
-(void)p_playbackDidFailWithError:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 delegate:(id)arg2 streaming:(BOOL)arg3 ;
-(BOOL)canPlay;
-(void)dealloc;
-(id)init;
-(id<TSKMediaPlayerControllerDelegate>)delegate;
-(double)duration;
-(void)setStartTime:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)startTime;
-(double)remainingTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setRepeatMode:(long long)arg1 ;
-(void)beginScrubbing;
-(void)endScrubbing;
-(void)setRate:(float)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(double)currentTime;
-(BOOL)isScrubbing;
-(void)cancelPendingSeeks;
-(float)rate;
-(AVPlayer *)player;
-(BOOL)isPlaying;
-(void)setVolume:(float)arg1 ;
-(long long)repeatMode;
-(void)seekToEnd;
-(void)teardown;
-(float)volume;
@end

