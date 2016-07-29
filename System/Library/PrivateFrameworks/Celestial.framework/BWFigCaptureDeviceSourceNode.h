/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>
#import <libobjc.A.dylib/BWFigCameraSourceNode.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class BWFigVideoCaptureDevice, BWNodeOutput, NSObject, NSString;

@interface BWFigCaptureDeviceSourceNode : BWSourceNode <BWFigCameraSourceNode> {

	/*^block*/id _videoSBufHandler;
	/*^block*/id _stillImageSBufHandler;
	BWFigVideoCaptureDevice* _captureDevice;
	BWNodeOutput* _videoCaptureOutput;
	BWNodeOutput* _stillImageOutput;
	BWNodeOutput* _detectedFacesOutput;
	NSObject*<OS_dispatch_group> _streamEventNotificationGroup;
	NSObject*<OS_dispatch_queue> _streamEventDispatchQueue;
	BOOL _detectedFacesOutputEnabled;
	int _resolvedSensorFormatIndex;
	int _streamSensorFormatIndex;
	unsigned _sensorPixelFormat;
	unsigned _streamSensorPixelFormat;
	int _offlineConfigurationSeed;
	int _resolvedOfflineConfigurationSeed;
	SCD_Struct_BW12 _sensorDimensions;
	SCD_Struct_BW12 _minOutputDimensions;
	int _minOutputDimensionsSensorFormatIndex;
	int _sensorFormatIndex;
	float _minFrameRate;
	float _maxFrameRate;
	float _aeMaxGain;
	int _maxIntegrationTimeOverride;
	BOOL _requiresOverscan;
	BOOL _temporalNoiseReductionEnabled;
	BOOL _chromaNoiseReductionEnabled;
	BOOL _automaticallyEnablesLowLightBoostWhenAvailable;
	BOOL _lowLightBoostSupportedForFormat;
	int _motionAttachmentsSource;
	SCD_Struct_BW12 _outputDimensions;
	SCD_Struct_BW12 _streamOutputDimensions;
	SCD_Struct_BW12 _sensorOverscanDimensions;
	BOOL _streamFormatChangeInFlight;
	SCD_Struct_BW12 _streamOutputDimensionsAfterFormatChange;
	unsigned _streamSensorPixelFormatAfterFormatChange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
+(void)initialize;
+(id)captureDeviceSourceNodeWithCaptureDevice:(id)arg1 ;
+(int)_indexOfFormatInFormatsArray:(id)arg1 matchingSensorDimensions:(SCD_Struct_BW12)arg2 sensorPixelFormat:(unsigned)arg3 sensorFormatIndex:(int)arg4 ;
-(void)dealloc;
-(id)nodeSubType;
-(void)setOutputDimensions:(SCD_Struct_BW12)arg1 ;
-(BWNodeOutput *)videoCaptureOutput;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setDetectedFacesOutputEnabled:(BOOL)arg1 ;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(void)setMinFrameRate:(float)arg1 ;
-(void)setMaxFrameRate:(float)arg1 ;
-(void)setTemporalNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setAeMaxGain:(float)arg1 ;
-(int)maxIntegrationTimeOverride;
-(void)setMaxIntegrationTimeOverride:(int)arg1 ;
-(void)updateOutputRequirements;
-(float)aeMaxGain;
-(void)setSensorPixelFormat:(unsigned)arg1 ;
-(void)setSensorDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setSensorFormatIndex:(int)arg1 ;
-(void)setRequiresOverscan:(BOOL)arg1 ;
-(void)setLowLightBoostSupportedForFormat:(BOOL)arg1 ;
-(SCD_Struct_BW12)minOutputDimensions;
-(SCD_Struct_BW12)sensorOverscanDimensions;
-(void)willStop;
-(BOOL)detectedFacesOutputEnabled;
-(BWNodeOutput *)detectedFacesOutput;
-(id)colorInfoForOutput:(id)arg1 ;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(int)_bringStreamUpToDate;
-(void)_resolveOfflineConfiguration;
-(BOOL)_haveNonLiveConfigurationChangesWithSensorFormatIndexChanged:(BOOL*)arg1 sensorPixelFormatChanged:(BOOL*)arg2 outputDimensionsChanged:(BOOL*)arg3 ;
-(void)_registerForStreamNotifications;
-(void)_unregisterFromStreamNotifications;
-(id)_initWithCaptureDevice:(id)arg1 ;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updateMinOutputDimensionsForResolvedSensorFormatIndex;
-(void)_bringStreamFormatIndexUpToDate;
-(void)_bringStreamPixelFormatUpToDate;
-(int)_updateStreamOutputDimensions;
-(int)_lockFramerateToMaxSupportedByCurrentSensorFormat;
-(void)_updateMetadataConfigurations;
-(SCD_Struct_BW12)_maxOutputDimensionsForResolvedSensorFormatIndex;
-(unsigned)sensorPixelFormat;
-(int)sensorFormatIndex;
-(SCD_Struct_BW12)outputDimensions;
-(int)motionAttachmentsSource;
-(BOOL)requiresOverscan;
-(BOOL)temporalNoiseReductionEnabled;
-(BOOL)chromaNoiseReductionEnabled;
-(BOOL)lowLightBoostSupportedForFormat;
-(OpaqueCMClockRef)clock;
-(BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
-(SCD_Struct_BW12)sensorDimensions;
-(void)setChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(BWNodeOutput *)stillImageOutput;
-(BWFigVideoCaptureDevice *)captureDevice;
-(void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1 ;
-(float)minFrameRate;
-(float)maxFrameRate;
@end

