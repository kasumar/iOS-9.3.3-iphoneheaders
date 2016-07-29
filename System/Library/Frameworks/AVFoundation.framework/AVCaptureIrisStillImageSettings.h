/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSArray;

@interface AVCaptureIrisStillImageSettings : NSObject <NSCopying> {

	long long _uniqueID;
	long long _irisMovieMode;
	NSURL* _irisMovieFileURL;
	NSURL* _irisMovieFileURLForEV0Image;
	NSArray* _irisMovieMetadata;
	NSArray* _irisMovieMetadataForEV0Image;
	long long _flashMode;
	long long _HDRMode;
	BOOL _EV0CaptureEnabled;
	BOOL _autoStillImageStabilizationEnabled;
	BOOL _squareCropEnabled;
	BOOL _previewImageEnabled;
	BOOL _highResolutionStillEnabled;
	unsigned _shutterSound;

}

@property (readonly) long long uniqueID;                                           //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) long long irisMovieMode;                              //@synthesize irisMovieMode=_irisMovieMode - In the implementation block
@property (nonatomic,copy) NSURL * irisMovieFileURL;                               //@synthesize irisMovieFileURL=_irisMovieFileURL - In the implementation block
@property (nonatomic,copy) NSURL * irisMovieFileURLForEV0Image;                    //@synthesize irisMovieFileURLForEV0Image=_irisMovieFileURLForEV0Image - In the implementation block
@property (nonatomic,copy) NSArray * irisMovieMetadata; 
@property (nonatomic,copy) NSArray * irisMovieMetadataForEV0Image; 
@property (assign,nonatomic) long long flashMode;                                  //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) long long HDRMode;                                    //@synthesize HDRMode=_HDRMode - In the implementation block
@property (assign,nonatomic) BOOL EV0CaptureEnabled;                               //@synthesize EV0CaptureEnabled=_EV0CaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL autoStillImageStabilizationEnabled;              //@synthesize autoStillImageStabilizationEnabled=_autoStillImageStabilizationEnabled - In the implementation block
@property (assign,nonatomic) BOOL squareCropEnabled;                               //@synthesize squareCropEnabled=_squareCropEnabled - In the implementation block
@property (assign,nonatomic) BOOL previewImageEnabled;                             //@synthesize previewImageEnabled=_previewImageEnabled - In the implementation block
@property (assign,nonatomic) BOOL highResolutionStillEnabled;                      //@synthesize highResolutionStillEnabled=_highResolutionStillEnabled - In the implementation block
@property (assign,nonatomic) unsigned shutterSound;                                //@synthesize shutterSound=_shutterSound - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUniqueID:(long long)arg1 ;
-(long long)irisMovieMode;
-(NSURL *)irisMovieFileURL;
-(NSURL *)irisMovieFileURLForEV0Image;
-(NSArray *)irisMovieMetadata;
-(NSArray *)irisMovieMetadataForEV0Image;
-(BOOL)EV0CaptureEnabled;
-(BOOL)autoStillImageStabilizationEnabled;
-(BOOL)previewImageEnabled;
-(BOOL)highResolutionStillEnabled;
-(unsigned)shutterSound;
-(void)setFlashMode:(long long)arg1 ;
-(long long)flashMode;
-(void)setHDRMode:(long long)arg1 ;
-(void)setIrisMovieMode:(long long)arg1 ;
-(void)setEV0CaptureEnabled:(BOOL)arg1 ;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg1 ;
-(void)setShutterSound:(unsigned)arg1 ;
-(void)setSquareCropEnabled:(BOOL)arg1 ;
-(void)setPreviewImageEnabled:(BOOL)arg1 ;
-(void)setHighResolutionStillEnabled:(BOOL)arg1 ;
-(void)setIrisMovieFileURL:(NSURL *)arg1 ;
-(void)setIrisMovieFileURLForEV0Image:(NSURL *)arg1 ;
-(void)setIrisMovieMetadata:(NSArray *)arg1 ;
-(void)setIrisMovieMetadataForEV0Image:(NSArray *)arg1 ;
-(long long)HDRMode;
-(BOOL)squareCropEnabled;
-(long long)uniqueID;
@end

