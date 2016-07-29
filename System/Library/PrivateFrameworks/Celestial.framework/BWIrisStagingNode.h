/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol BWIrisStagingNodeEmitIrisRequestDelegate;
@class NSURL, NSMutableArray, FigIrisAutoTrimmer, BWIrisSequenceAdjuster;

@interface BWIrisStagingNode : BWNode {

	SCD_Struct_BW2 _bufferingTime;
	SCD_Struct_BW2 _targetFrameDuration;
	SCD_Struct_BW2 _beginIrisMovieCaptureTime;
	SCD_Struct_BW2 _endIrisMovieCaptureTime;
	SCD_Struct_BW2 _frameGovernorNextFrameThreshold;
	SCD_Struct_BW2 _frameGovernorReferenceTime;
	SCD_Struct_BW2 _readyToEmitPTS;
	SCD_Struct_BW2 _lastProcessedVideoPTS;
	SCD_Struct_BW2 _masterMovieStartPTS;
	NSURL* _masterMovieURL;
	NSMutableArray* _stagingQueues;
	NSMutableArray* _lastEmittedBuffers;
	BOOL _valveOpen;
	BOOL _valveDraining;
	NSMutableArray* _irisRequestsInFlight;
	NSMutableArray* _irisRequestsSoonToBeEmitted;
	int _emittedIrisRequestCount;
	OpaqueFigSimpleMutexRef _stateMutex;
	SCD_Struct_BW2* _firstEmittedPTSArray;
	OpaqueCMClockRef _masterClock;
	int _trimMethod;
	FigIrisAutoTrimmer* _trimmer;
	SCD_Struct_BW2 _firstTrimStartPTS;
	BWIrisSequenceAdjuster* _sequenceAdjuster;
	int _numEODMessagesReceived;
	id<BWIrisStagingNodeEmitIrisRequestDelegate> _delegate;

}

@property (assign) SCD_Struct_BW2 beginIrisMovieCaptureTime; 
@property (assign) SCD_Struct_BW2 endIrisMovieCaptureTime; 
+(void)initialize;
-(void)dealloc;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(BOOL)closeValve;
-(SCD_Struct_BW2)bufferingTime;
-(BOOL)openValveWithIrisRequest:(id)arg1 ;
-(BOOL)enqueueIrisRequest:(id)arg1 ;
-(id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 autoTrimMethod:(int)arg4 emitIrisRequestDelegate:(id)arg5 ;
-(void)setBufferingTime:(SCD_Struct_BW2)arg1 ;
-(void)setTargetFrameDuration:(SCD_Struct_BW2)arg1 ;
-(void)setBeginIrisMovieCaptureTime:(SCD_Struct_BW2)arg1 ;
-(void)setEndIrisMovieCaptureTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)targetFrameDuration;
-(void)_serviceIrisRequestsForCurrentTime:(SCD_Struct_BW2)arg1 emitBuffers:(BOOL)arg2 ensureStillImageTimesAreStaged:(BOOL)arg3 ;
-(void)_emitIrisRequest:(id)arg1 withEndTime:(SCD_Struct_BW2)arg2 ;
-(void)_trimQueueForInputIndex:(unsigned long long)arg1 ;
-(void)_emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(void)_enqueueIrisRequest:(id)arg1 ;
-(void)_updateRetainedBufferCount;
-(void)_emitBuffersThroughPTS:(SCD_Struct_BW2)arg1 ;
-(void)_emitBuffersThroughPTS:(SCD_Struct_BW2)arg1 forInputIndex:(unsigned long long)arg2 ;
-(int)_emissionStatusForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_emitIrisRequestsOlderThanTime:(SCD_Struct_BW2)arg1 withEndTime:(SCD_Struct_BW2)arg2 ;
-(unsigned long long)_indexOfBufferBeforeOrEqualToPTS:(SCD_Struct_BW2)arg1 inputIndex:(unsigned long long)arg2 ;
-(SCD_Struct_BW2)_adjustedStartTimeForTrimmedStartTime:(SCD_Struct_BW2)arg1 ensuringAtLeast3FramesBeforeStillTime:(SCD_Struct_BW2)arg2 butNotEarlierThanOriginalStartTime:(SCD_Struct_BW2)arg3 ;
-(BOOL)_fillInStartAndTrimTimesForMasterMovieWithInfo:(id)arg1 ;
-(void)_prepareToEmitFramesFromStartTime:(SCD_Struct_BW2)arg1 throughEndTime:(SCD_Struct_BW2)arg2 ;
-(BOOL)_fillInRefMovieStartAndTrimTimesForStillImageTimesBeforeTime:(SCD_Struct_BW2)arg1 ;
-(void)_informDelegateOfSoonToBeEmittedIrisRequestsForTime:(SCD_Struct_BW2)arg1 ;
-(void)_processQueuedVideoFrames;
-(SCD_Struct_BW2)beginIrisMovieCaptureTime;
-(SCD_Struct_BW2)endIrisMovieCaptureTime;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
@end

