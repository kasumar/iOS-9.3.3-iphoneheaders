/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMTransientAssetConvertible.h>

@class NSString, NSDate, NSURL, UIImage, NSDictionary;

@interface CAMTimelapsePlaceholderResult : NSObject <CAMTransientAssetConvertible> {

	BOOL _usingFrontCamera;
	unsigned short _sessionIdentifier;
	NSString* _assetUUID;
	NSDate* _creationDate;
	long long _captureOrientation;
	void* _previewImageSurface;
	CGSize _videoDimensions;

}

@property (nonatomic,copy,readonly) NSString * assetUUID;                                            //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,readonly) unsigned short sessionIdentifier;                                     //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * creationDate;                                           //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) long long captureOrientation;                                         //@synthesize captureOrientation=_captureOrientation - In the implementation block
@property (getter=isUsingFrontCamera,nonatomic,readonly) BOOL usingFrontCamera;                      //@synthesize usingFrontCamera=_usingFrontCamera - In the implementation block
@property (nonatomic,readonly) CGSize videoDimensions;                                               //@synthesize videoDimensions=_videoDimensions - In the implementation block
@property (nonatomic,readonly) void* previewImageSurface;                                            //@synthesize previewImageSurface=_previewImageSurface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,copy,readonly) NSURL * persistenceURL; 
@property (nonatomic,readonly) NSDate * captureDate; 
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,copy,readonly) NSDictionary * stillImageMetadata; 
@property (nonatomic,copy,readonly) NSString * burstIdentifier; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) SCD_Struct_CA2 duration; 
@property (nonatomic,readonly) NSString * irisStillImageUUID; 
@property (getter=isExpectingPairedVideo,nonatomic,readonly) BOOL expectingPairedVideo; 
@property (nonatomic,readonly) NSURL * irisVideoPersistenceURL; 
@property (nonatomic,readonly) SCD_Struct_CA2 irisStillDisplayTime; 
-(void)dealloc;
-(id)init;
-(SCD_Struct_CA2)duration;
-(unsigned short)sessionIdentifier;
-(UIImage *)placeholderImage;
-(NSString *)uuid;
-(NSDate *)captureDate;
-(NSString *)assetUUID;
-(unsigned long long)mediaType;
-(NSString *)burstIdentifier;
-(unsigned long long)numberOfRepresentedAssets;
-(NSURL *)persistenceURL;
-(NSDate *)creationDate;
-(long long)captureOrientation;
-(NSDictionary *)stillImageMetadata;
-(BOOL)isExpectingPairedVideo;
-(SCD_Struct_CA2)irisStillDisplayTime;
-(NSString *)irisStillImageUUID;
-(NSURL *)irisVideoPersistenceURL;
-(BOOL)isUsingFrontCamera;
-(void*)previewImageSurface;
-(CGSize)videoDimensions;
-(id)initWithAssetUUID:(id)arg1 captureSession:(unsigned short)arg2 creationDate:(id)arg3 captureOrientation:(long long)arg4 usingFrontCamera:(BOOL)arg5 videoDimensions:(CGSize)arg6 previewImageSurface:(void*)arg7 ;
@end

