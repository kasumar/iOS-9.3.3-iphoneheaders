/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CameraUI/CameraUI-Structs.h>
@class NSObject, NSMapTable;

@interface CAMThumbnailGenerator : NSObject {

	NSObject*<OS_dispatch_queue> __generationQueue;
	OpaqueVTPixelTransferSessionRef __generationQueuePixelTransferSession;
	NSMapTable* __generationQueueRotationSessionsMapTable;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _generationQueue;                                     //@synthesize _generationQueue=__generationQueue - In the implementation block
@property (nonatomic,readonly) OpaqueVTPixelTransferSessionRef _generationQueuePixelTransferSession;              //@synthesize _generationQueuePixelTransferSession=__generationQueuePixelTransferSession - In the implementation block
@property (nonatomic,readonly) NSMapTable * _generationQueueRotationSessionsMapTable;                             //@synthesize _generationQueueRotationSessionsMapTable=__generationQueueRotationSessionsMapTable - In the implementation block
-(void)dealloc;
-(id)init;
-(id)newJPEGDataOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingSurface:(void*)arg3 ;
-(id)newJPEGDataInOrientation:(long long)arg1 usingSurface:(void*)arg2 ;
-(CGImageRef)newBGRAImageOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingSurface:(void*)arg3 ;
-(OpaqueVTPixelTransferSessionRef)_generationQueuePixelTransferSession;
-(NSMapTable *)_generationQueueRotationSessionsMapTable;
-(NSObject*<OS_dispatch_queue>)_generationQueue;
-(void*)_newThumbnailOfFormat:(long long)arg1 inOrientation:(long long)arg2 withPixelFormat:(unsigned)arg3 usingSurface:(void*)arg4 ;
-(void*)_newRotatedSurface:(void*)arg1 withOrientation:(long long)arg2 ;
@end

