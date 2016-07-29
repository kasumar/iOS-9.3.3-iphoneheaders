/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSObject, NSError, AVAsset, AVAssetTrack, NSString, NSURL, AVAudioMix, AVVideoComposition, AVCustomVideoCompositorSession, NSArray, AVMetadataItemFilter;

@interface AVAssetExportSessionInternal : NSObject {

	AVWeakReference* weakReference;
	NSObject*<OS_dispatch_queue> readWriteQueue;
	OpaqueFigRemakerRef remaker;
	long long status;
	NSError* error;
	float progress;
	AVAsset* asset;
	AVAssetTrack* firstVideoTrack;
	NSString* preset;
	NSString* preset16x9;
	NSURL* outputURL;
	NSString* outputFileType;
	NSString* actualOutputFileType;
	NSString* audioTimePitchAlgorithm;
	AVAudioMix* audioMix;
	AVVideoComposition* videoComposition;
	void* figVideoCompositor;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	NSArray* metadata;
	AVMetadataItemFilter* metadataItemFilter;
	SCD_Struct_CM6 timeRange;
	SCD_Struct_CM5 minVideoFrameDuration;
	BOOL canUseFastFrameRateConversion;
	NSString* videoFrameRateConversionAlgorithm;
	BOOL waitingForFastFrameRateResponse;
	NSObject*<OS_dispatch_semaphore> canUseFastFrameRateConversionSemaphore;
	long long maxFileSize;
	/*^block*/id handler;
	BOOL optimizeForNetworkUse;
	BOOL useMultiPass;
	NSURL* directoryForTemporaryFiles;
	BOOL outputFileCreatedByRemaker;
	long long compatibleFileTypesDispatchOncePredicate;
	NSArray* compatibleFileTypes;
	NSObject*<OS_dispatch_queue> remakerNotificationSerializationQueue;

}
@end

