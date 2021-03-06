/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVPlaybackControlsViewController.h>
#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>

@class NSArray, NSString, UIView, AVButton, UILabel, AVScrubber, AVLoadingIndicatorView, MPVolumeSlider, AVForceButton, NSMutableArray, NSLayoutConstraint, NSTimer, MPVolumeController;

@interface AVFullScreenPlaybackControlsViewController : AVPlaybackControlsViewController <MPVolumeControllerDelegate> {

	unsigned _showsDoneButton : 1;
	unsigned _showsScaleButton : 1;
	long long _scaleButtonType;
	unsigned _showsLoadingIndicator : 1;
	unsigned _playing : 1;
	unsigned _scrubberEnabled : 1;
	NSArray* _scrubberLoadedTimeRanges;
	unsigned _scanBackwardButtonEnabled : 1;
	unsigned _playPauseButtonEnabled : 1;
	unsigned _scanForwardButtonEnabled : 1;
	unsigned _showsStreamingControls : 1;
	unsigned _skipBackwardThirtySecondsButtonEnabled : 1;
	unsigned _gotoEndOfSeekableRangesButtonEnabled : 1;
	unsigned _showsMediaSelectionButton : 1;
	unsigned _showsExitFullScreenButton : 1;
	unsigned _showsPictureInPictureButton : 1;
	unsigned _pictureInPictureButtonEnabled : 1;
	unsigned _showsVolumeSlider : 1;
	NSString* _elapsedTimeLabelText;
	float _scrubberMinimumValue;
	float _scrubberValue;
	float _scrubberMaximumValue;
	NSString* _remainingTimeLabelText;
	float _volumeSliderValue;
	UIView* _upperControlsSubContainerView;
	UIView* _lowerControlsLeftSubContainerView;
	UIView* _lowerControlsCenterSubContainerView;
	UIView* _lowerControlsRightSubContainerView;
	AVButton* _doneButton;
	UILabel* _elapsedTimeLabel;
	AVScrubber* _scrubber;
	UILabel* _remainingTimeLabel;
	AVButton* _scaleButton;
	UILabel* _liveStreamingLabel;
	AVLoadingIndicatorView* _loadingIndicatorView;
	UILabel* _scrubInstructionsTitleLabel;
	UILabel* _scrubInstructionsSubtitleLabel;
	MPVolumeSlider* _volumeSlider;
	AVButton* _skipBackwardThirtySecondsButton;
	AVForceButton* _scanBackwardButton;
	AVButton* _playPauseButton;
	AVForceButton* _scanForwardButton;
	AVButton* _gotoEndOfSeekableRangesButton;
	AVButton* _mediaSelectionButton;
	AVButton* _pictureInPictureButton;
	AVButton* _fullScreenButton;
	NSMutableArray* _layoutConstraints;
	NSLayoutConstraint* _topControlsContainerViewHeightLayoutConstraint;
	NSLayoutConstraint* _bottomControlsContainerViewHeightLayoutConstraint;
	unsigned _bottomControlsSingleRowLayoutPossible : 1;
	unsigned _showsScrubInstructions : 1;
	unsigned _userDidTapScanButton : 1;
	NSTimer* _beginScanningBackwardTimer;
	NSTimer* _beginScanningForwardTimer;
	unsigned _isScanningBackward : 1;
	unsigned _isScanningForward : 1;
	unsigned _controlsVisibilityHasBeenManagedBefore : 1;
	unsigned _supportForce : 1;
	MPVolumeController* _volumeController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)updateViewConstraints;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_updateScaleButton;
-(void)_showScrubInstructions;
-(void)_hideScrubInstructions;
-(void)setShowsVolumeSlider:(BOOL)arg1 ;
-(BOOL)showsVolumeSlider;
-(double)scrubberWidth;
-(void)setScaleButtonType:(long long)arg1 ;
-(void)setShowsScaleButton:(BOOL)arg1 ;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(void)setPictureInPictureButtonEnabled:(BOOL)arg1 ;
-(void)setShowsPictureInPictureButton:(BOOL)arg1 ;
-(void)_scrubberBeginTracking:(id)arg1 ;
-(void)_manageControlsVisibility;
-(BOOL)showsPictureInPictureButton;
-(BOOL)showsMediaSelectionButton;
-(BOOL)isPlayPauseButtonEnabled;
-(BOOL)isPictureInPictureButtonEnabled;
-(BOOL)showsLoadingIndicator;
-(void)_scrubberEndTracking:(id)arg1 ;
-(BOOL)showsStreamingControls;
-(BOOL)isScrubberEnabled;
-(id)scrubberLoadedTimeRanges;
-(void)_fireBeginScanningBackwardTimer:(id)arg1 ;
-(void)_gotoEndOfSeekableRangesButtonTouchDown:(id)arg1 ;
-(void)_scanForwardButtonTouchUpInside:(id)arg1 ;
-(void)_skipBackwardThirtySecondsButtonTouchDown:(id)arg1 ;
-(void)_scanForwardButtonTouchUpOutside:(id)arg1 ;
-(void)_fireBeginScanningForwardTimer:(id)arg1 ;
-(void)_skipBackwardThirtySecondsButtonTouchUpInside:(id)arg1 ;
-(void)_scanBackwardButtonTouchUpOutside:(id)arg1 ;
-(void)_gotoEndOfSeekableRangesButtonTouchUpInside:(id)arg1 ;
-(void)_scanBackwardButtonTouchUpInside:(id)arg1 ;
-(long long)scaleButtonType;
-(BOOL)showsExitFullScreenButton;
-(void)_gotoEndOfSeekableRangesButtonTouchUpOutside:(id)arg1 ;
-(void)_skipBackwardThirtySecondsButtonTouchUpOutside:(id)arg1 ;
-(void)_scanForwardButtonTouchDown:(id)arg1 ;
-(BOOL)isGotoEndOfSeekableRangesButtonEnabled;
-(void)_scanBackwardButtonTouchDown:(id)arg1 ;
-(BOOL)isScanBackwardButtonEnabled;
-(BOOL)isScanForwardButtonEnabled;
-(BOOL)showsScaleButton;
-(BOOL)isSkipBackwardThirtySecondsButtonEnabled;
-(void)setSkipBackwardThirtySecondsButtonEnabled:(BOOL)arg1 ;
-(void)setScanForwardButtonEnabled:(BOOL)arg1 ;
-(void)updateElapsedTimeLabel:(id)arg1 ;
-(void)updateScrubberValue:(float)arg1 ;
-(void)setShowsMediaSelectionButton:(BOOL)arg1 ;
-(void)setShowsExitFullScreenButton:(BOOL)arg1 ;
-(void)updateRemainingTimeLabel:(id)arg1 ;
-(void)updateScrubberMaximumValue:(float)arg1 ;
-(void)setPlayPauseButtonEnabled:(BOOL)arg1 ;
-(void)setScrubberEnabled:(BOOL)arg1 ;
-(void)setScrubberLoadedTimeRanges:(id)arg1 ;
-(void)setScanBackwardButtonEnabled:(BOOL)arg1 ;
-(void)setShowsStreamingControls:(BOOL)arg1 ;
-(void)updateScrubberMinimumValue:(float)arg1 ;
-(void)setGotoEndOfSeekableRangesButtonEnabled:(BOOL)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(BOOL)isPlaying;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(BOOL)showsDoneButton;
@end

