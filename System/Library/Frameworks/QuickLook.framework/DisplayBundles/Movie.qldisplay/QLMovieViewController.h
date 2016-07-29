/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Movie.qldisplay/Movie
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class AVPlayerViewController, AVPlayer, NSURL, PHVideoScrubberView, UIScrollView, NSLayoutConstraint, UIView, QLOverlayPlayButton, UILabel, NSObject, NSTimer, NSError;

@interface QLMovieViewController : UIViewController {

	AVPlayerViewController* _playerViewController;
	AVPlayer* _player;
	NSURL* _mediaURL;
	BOOL _scrubbing;
	BOOL _endOfMedia;
	double _beforeScrubbingRate;
	PHVideoScrubberView* _scrubber;
	UIScrollView* _internalScrubberScrollView;
	NSLayoutConstraint* _bottomScrubberConstraint;
	UIView* _scrubberContainer;
	UIScrollView* _scrubberContainerScrollView;
	QLOverlayPlayButton* _playButton;
	UILabel* _timeLabel;
	UIView* _timeLabelBackground;
	NSLayoutConstraint* _timeLabelConstraint;
	NSObject* _playbackTimeObserver;
	NSTimer* _playbackTimeHiddeTimer;
	long long _playbackTimeFormat;
	BOOL _playButtonVisible;
	BOOL _fillMode;
	BOOL _primaryPlayer;
	BOOL _isVisible;
	long long _playingStatus;
	NSError* _error;
	double _scrubberVerticalOffset;

}

@property (readonly) long long playingStatus;                            //@synthesize playingStatus=_playingStatus - In the implementation block
@property (assign) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL playButtonVisible;                     //@synthesize playButtonVisible=_playButtonVisible - In the implementation block
@property (readonly) double duration; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) double scrubberVerticalOffset;              //@synthesize scrubberVerticalOffset=_scrubberVerticalOffset - In the implementation block
@property (assign,nonatomic) BOOL fillMode;                              //@synthesize fillMode=_fillMode - In the implementation block
@property (assign,nonatomic) BOOL primaryPlayer;                         //@synthesize primaryPlayer=_primaryPlayer - In the implementation block
@property (assign,nonatomic) BOOL isVisible;                             //@synthesize isVisible=_isVisible - In the implementation block
-(void)setIsVisible:(BOOL)arg1 ;
-(void)addHideTimeLabelTimer;
-(double)scrubberVerticalOffset;
-(void)hideTimeLabelTimerAction;
-(void)setScrubberVerticalOffset:(double)arg1 ;
-(void)setScrubberHidden:(BOOL)arg1 ;
-(long long)playingStatus;
-(void)setPlayButtonVisible:(BOOL)arg1 ;
-(void)playerItemDidReachEnd;
-(BOOL)playButtonVisible;
-(void)updatePlayingStatus;
-(id)initWithMediaURL:(id)arg1 ;
-(void)setPrimaryPlayer:(BOOL)arg1 ;
-(void)updateTimeLabelWithElapsedInterval:(double)arg1 remainingInterval:(double)arg2 ;
-(BOOL)primaryPlayer;
-(void)dealloc;
-(double)duration;
-(void)invalidate;
-(void)loadView;
-(void)setFillMode:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)play;
-(BOOL)fillMode;
-(double)currentPlaybackTime;
-(id)_labelTextWithFormat:(long long)arg1 elapsedInterval:(double)arg2 remainingInterval:(double)arg3 ;
-(id)_stringFromTimeInterval:(double)arg1 ;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(void)togglePlayPause;
@end

