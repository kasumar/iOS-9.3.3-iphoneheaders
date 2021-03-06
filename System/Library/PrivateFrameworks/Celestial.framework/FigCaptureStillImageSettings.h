/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FigCaptureStillImageSettings : NSObject <NSCoding, NSCopying> {

	long long _settingsID;
	int _payloadType;
	unsigned _outputFormat;
	unsigned _outputWidth;
	unsigned _outputHeight;
	BOOL _squareCropEnabled;
	BOOL _outputMirroring;
	int _outputOrientation;
	BOOL _thumbnailEnabled;
	unsigned _thumbnailFormat;
	unsigned _thumbnailWidth;
	unsigned _thumbnailHeight;
	BOOL _thumbnailMirroring;
	int _thumbnailOrientation;
	BOOL _noiseReductionEnabled;
	float _scaleFactor;
	unsigned _shutterSound;
	int _flashMode;
	int _HDRMode;
	BOOL _providesEV0Image;
	int _SISMode;
	NSString* _colorPrimaries;
	NSString* _transferFunction;
	NSString* _yCbCrMatrix;
	NSDictionary* _vtCompressionProperties;
	int _bracketType;
	unsigned _bracketImageCount;
	BOOL _lensStabilizationDuringBracketEnabled;
	SCD_Struct_BW2* _exposureDurations;
	float* _ISOs;
	float* _exposureTargetBiases;
	long long _stillImageRequestTime;
	long long _stillImageCaptureStartTime;

}

@property (assign,nonatomic) long long settingsID;                                         //@synthesize settingsID=_settingsID - In the implementation block
@property (assign,nonatomic) int payloadType;                                              //@synthesize payloadType=_payloadType - In the implementation block
@property (assign,nonatomic) unsigned outputFormat;                                        //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) unsigned outputWidth;                                         //@synthesize outputWidth=_outputWidth - In the implementation block
@property (assign,nonatomic) unsigned outputHeight;                                        //@synthesize outputHeight=_outputHeight - In the implementation block
@property (assign,nonatomic) BOOL squareCropEnabled;                                       //@synthesize squareCropEnabled=_squareCropEnabled - In the implementation block
@property (assign,nonatomic) BOOL outputMirroring;                                         //@synthesize outputMirroring=_outputMirroring - In the implementation block
@property (assign,nonatomic) int outputOrientation;                                        //@synthesize outputOrientation=_outputOrientation - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputPixelBufferAttributes; 
@property (assign,nonatomic) BOOL thumbnailEnabled;                                        //@synthesize thumbnailEnabled=_thumbnailEnabled - In the implementation block
@property (assign,nonatomic) unsigned thumbnailFormat;                                     //@synthesize thumbnailFormat=_thumbnailFormat - In the implementation block
@property (assign,nonatomic) unsigned thumbnailWidth;                                      //@synthesize thumbnailWidth=_thumbnailWidth - In the implementation block
@property (assign,nonatomic) unsigned thumbnailHeight;                                     //@synthesize thumbnailHeight=_thumbnailHeight - In the implementation block
@property (assign,nonatomic) BOOL thumbnailMirroring;                                      //@synthesize thumbnailMirroring=_thumbnailMirroring - In the implementation block
@property (assign,nonatomic) int thumbnailOrientation;                                     //@synthesize thumbnailOrientation=_thumbnailOrientation - In the implementation block
@property (nonatomic,readonly) NSDictionary * thumbnailPixelBufferAttributes; 
@property (assign,nonatomic) BOOL noiseReductionEnabled;                                   //@synthesize noiseReductionEnabled=_noiseReductionEnabled - In the implementation block
@property (assign,nonatomic) float scaleFactor;                                            //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) unsigned shutterSound;                                        //@synthesize shutterSound=_shutterSound - In the implementation block
@property (assign,nonatomic) int flashMode;                                                //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) int HDRMode;                                                  //@synthesize HDRMode=_HDRMode - In the implementation block
@property (assign,nonatomic) BOOL providesEV0Image;                                        //@synthesize providesEV0Image=_providesEV0Image - In the implementation block
@property (assign,setter=ISMode,nonatomic) int SISMode;                                    //@synthesize SISMode=_SISMode - In the implementation block
@property (nonatomic,copy) NSString * colorPrimaries;                                      //@synthesize colorPrimaries=_colorPrimaries - In the implementation block
@property (nonatomic,copy) NSString * transferFunction;                                    //@synthesize transferFunction=_transferFunction - In the implementation block
@property (nonatomic,copy) NSString * yCbCrMatrix;                                         //@synthesize yCbCrMatrix=_yCbCrMatrix - In the implementation block
@property (nonatomic,copy) NSDictionary * vtCompressionProperties;                         //@synthesize vtCompressionProperties=_vtCompressionProperties - In the implementation block
@property (nonatomic,readonly) int bracketType;                                            //@synthesize bracketType=_bracketType - In the implementation block
@property (nonatomic,readonly) unsigned bracketImageCount;                                 //@synthesize bracketImageCount=_bracketImageCount - In the implementation block
@property (assign,nonatomic) BOOL lensStabilizationDuringBracketEnabled;                   //@synthesize lensStabilizationDuringBracketEnabled=_lensStabilizationDuringBracketEnabled - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2* exposureDurations;                          //@synthesize exposureDurations=_exposureDurations - In the implementation block
@property (nonatomic,readonly) float* ISOs;                                                //@synthesize ISOs=_ISOs - In the implementation block
@property (nonatomic,readonly) float* exposureTargetBiases;                                //@synthesize exposureTargetBiases=_exposureTargetBiases - In the implementation block
@property (assign,nonatomic) long long stillImageRequestTime;                              //@synthesize stillImageRequestTime=_stillImageRequestTime - In the implementation block
@property (assign,nonatomic) long long stillImageCaptureStartTime;                         //@synthesize stillImageCaptureStartTime=_stillImageCaptureStartTime - In the implementation block
-(unsigned)outputFormat;
-(void)setOutputFormat:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)scaleFactor;
-(void)setScaleFactor:(float)arg1 ;
-(void)_teardownBracketStorage;
-(void)setColorPrimaries:(NSString *)arg1 ;
-(void)setTransferFunction:(NSString *)arg1 ;
-(void)setYCbCrMatrix:(NSString *)arg1 ;
-(unsigned)thumbnailFormat;
-(unsigned)thumbnailWidth;
-(unsigned)thumbnailHeight;
-(NSDictionary *)outputPixelBufferAttributes;
-(NSDictionary *)thumbnailPixelBufferAttributes;
-(int)payloadType;
-(BOOL)thumbnailMirroring;
-(int)thumbnailOrientation;
-(BOOL)noiseReductionEnabled;
-(BOOL)providesEV0Image;
-(int)SISMode;
-(NSString *)colorPrimaries;
-(NSString *)transferFunction;
-(NSString *)yCbCrMatrix;
-(NSDictionary *)vtCompressionProperties;
-(int)bracketType;
-(BOOL)lensStabilizationDuringBracketEnabled;
-(long long)stillImageRequestTime;
-(void)setStillImageRequestTime:(long long)arg1 ;
-(long long)stillImageCaptureStartTime;
-(void)setStillImageCaptureStartTime:(long long)arg1 ;
-(unsigned)shutterSound;
-(void)setSettingsID:(long long)arg1 ;
-(void)setPayloadType:(int)arg1 ;
-(void)setOutputWidth:(unsigned)arg1 ;
-(void)setOutputHeight:(unsigned)arg1 ;
-(void)setOutputMirroring:(BOOL)arg1 ;
-(void)setOutputOrientation:(int)arg1 ;
-(void)setThumbnailEnabled:(BOOL)arg1 ;
-(BOOL)thumbnailEnabled;
-(unsigned)outputWidth;
-(unsigned)outputHeight;
-(void)setThumbnailWidth:(unsigned)arg1 ;
-(void)setThumbnailHeight:(unsigned)arg1 ;
-(void)setThumbnailFormat:(unsigned)arg1 ;
-(BOOL)outputMirroring;
-(void)setThumbnailMirroring:(BOOL)arg1 ;
-(int)outputOrientation;
-(void)setThumbnailOrientation:(int)arg1 ;
-(void)setNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setProvidesEV0Image:(BOOL)arg1 ;
-(void)setSISMode:(int)arg1 ;
-(long long)settingsID;
-(void)setVtCompressionProperties:(NSDictionary *)arg1 ;
-(unsigned)bracketImageCount;
-(void)setLensStabilizationDuringBracketEnabled:(BOOL)arg1 ;
-(void)setBracketType:(int)arg1 imageCount:(unsigned)arg2 ;
-(SCD_Struct_BW2*)exposureDurations;
-(float*)ISOs;
-(float*)exposureTargetBiases;
-(void)setFlashMode:(int)arg1 ;
-(int)flashMode;
-(void)setHDRMode:(int)arg1 ;
-(void)setShutterSound:(unsigned)arg1 ;
-(void)setSquareCropEnabled:(BOOL)arg1 ;
-(int)HDRMode;
-(BOOL)squareCropEnabled;
@end

