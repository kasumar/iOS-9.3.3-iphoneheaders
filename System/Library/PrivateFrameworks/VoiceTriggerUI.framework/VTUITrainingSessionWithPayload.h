/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/VTUITrainingSession.h>
#import <libobjc.A.dylib/VTUIAudioSessionDelegate.h>
#import <libobjc.A.dylib/AFAudioAnalyzerDelegate.h>
#import <libobjc.A.dylib/SFSpeechRecognitionTaskDelegate.h>

@class NSString;

@interface VTUITrainingSessionWithPayload : VTUITrainingSession <VTUIAudioSessionDelegate, AFAudioAnalyzerDelegate, SFSpeechRecognitionTaskDelegate> {

	BOOL _detectBOS;
	BOOL _ASRResultReceived;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)audioAnalyzer:(id)arg1 didDetectStartpointAtTime:(double)arg2 ;
-(void)audioAnalyzer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2 ;
-(void)audioSessionRecordBufferAvailable:(id)arg1 ;
-(void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2 ;
-(void)audioSessionDidStopRecording:(long long)arg1 ;
-(void)audioSessionErrorDidOccur:(id)arg1 ;
-(void)audioSessionUnsupportedAudioRoute;
-(void)startTraining;
-(BOOL)shouldHandleSession;
-(BOOL)shouldMatchPayload;
-(void)handleAudioInput:(id)arg1 ;
-(void)matchRecognitionResult:(id)arg1 withMatchedBlock:(/*^block*/id)arg2 withNonMatchedBlock:(/*^block*/id)arg3 ;
@end

