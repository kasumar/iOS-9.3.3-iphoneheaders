/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKCouchControllerDelegate;
@class OKPresentationCouch, OKPresentationCouchStep;

@interface OKCouchController : NSObject {

	OKPresentationCouch* _couch;
	OKPresentationCouchStep* _lastStep;
	unsigned long long _stepMode;
	double _currentStepStartTime;
	double _readinessWaitStartTime;
	double _progress;
	unsigned long long _startValidityBarrier;
	unsigned long long _executionValidityBarrier;
	long long _stopCounter;
	BOOL _isPlaying;
	BOOL _hasStartedToWait;
	BOOL _loops;
	id<OKCouchControllerDelegate> _delegate;
	double _defaultStepDuration;
	double _currentStepDuration;
	double _delayForReadinessWaitNotification;

}

@property (assign) id<OKCouchControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double defaultStepDuration;                            //@synthesize defaultStepDuration=_defaultStepDuration - In the implementation block
@property (nonatomic,readonly) double currentStepDuration;                          //@synthesize currentStepDuration=_currentStepDuration - In the implementation block
@property (assign,nonatomic) BOOL loops;                                            //@synthesize loops=_loops - In the implementation block
@property (assign,nonatomic) double delayForReadinessWaitNotification;              //@synthesize delayForReadinessWaitNotification=_delayForReadinessWaitNotification - In the implementation block
-(void)setDelegate:(id<OKCouchControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<OKCouchControllerDelegate>)delegate;
-(void)stopPlayback;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1 ;
-(void)startPlayback;
-(void)overrideMode:(unsigned long long)arg1 andCurrentStepDuration:(double)arg2 ;
-(double)currentStepDuration;
-(void)allowPlayback;
-(void)preventPlayback;
-(BOOL)canStartPlayback;
-(void)startPlaybackAfterDelay:(double)arg1 ;
-(id)initWithCouch:(id)arg1 andDelegate:(id)arg2 ;
-(void)setDelayForReadinessWaitNotification:(double)arg1 ;
-(void)setDefaultStepDuration:(double)arg1 ;
-(void)_dispatchNextStep;
-(id)_nextCouchStep:(id)arg1 ;
-(void)_executeStep:(id)arg1 forTargetPageViewController:(id)arg2 ;
-(double)defaultStepDuration;
-(double)delayForReadinessWaitNotification;
@end

