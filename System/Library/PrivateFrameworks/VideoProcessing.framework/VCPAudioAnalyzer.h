/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary, NSMutableArray;

@interface VCPAudioAnalyzer : NSObject {

	NSDictionary* _model;
	void* _inputBuffer;
	OpaqueAudioComponentInstanceRef _audioUnit;
	AudioTimeStamp _audioTimestamp;
	AudioStreamBasicDescription _audioStream;
	AudioBufferList* _audioBufferList;
	int _sampleBatchSize;
	SCD_Struct_VC6 _trackStart;
	BOOL _voiceActivity;
	SCD_Struct_VC6 _detectionStart;
	NSMutableArray* _detections;
	int _bufferedSamples;

}
+(id)voiceDetector;
-(void)dealloc;
-(id)init;
-(id)audioFormatRequirements;
-(void)addDetectionFromTime:(const SCD_Struct_VC6*)arg1 toTime:(const SCD_Struct_VC6*)arg2 ;
-(int)initialize:(opaqueCMSampleBufferRef)arg1 ;
-(int)loadModel;
-(int)initializeAudioUnit:(const AudioStreamBasicDescription*)arg1 ;
-(int)sampleBatchSize:(double)arg1 ;
-(int)processAudioSamples;
-(int)analyzeAsset:(id)arg1 cancel:(/*^block*/id)arg2 result:(id*)arg3 ;
-(int)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

