/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSMutableArray, NSDictionary;

@interface AVCaptureStillImageOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSMutableArray* stillImageRequests;
	BOOL squareCropEnabled;
	CGSize previewImageSize;
	unsigned imageDataFormatType;
	float jpegQuality;
	BOOL jpegQualitySpecified;
	long long HDRCaptureMode;
	BOOL EV0CaptureEnabled;
	BOOL noiseReductionEnabled;
	BOOL suspendsVideoProcessingDuringCapture;
	NSDictionary* outputSettings;
	BOOL isCapturingPhoto;
	BOOL rawCaptureEnabled;
	BOOL SISSupported;
	BOOL SISEnabled;
	BOOL SISActive;
	BOOL highResStillEnabled;
	unsigned shutterSoundID;
	SCD_Struct_AV43 preparedBracket;
	NSMutableArray* prepareRequests;
	unsigned long long maxBracketedCaptureCount;
	BOOL lensStabilizationDuringBracketedCaptureSupported;
	BOOL lensStabilizationDuringBracketedCaptureEnabled;

}
-(void)dealloc;
-(id)init;
@end

