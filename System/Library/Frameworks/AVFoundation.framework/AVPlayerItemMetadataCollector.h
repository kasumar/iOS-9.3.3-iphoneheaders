/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVPlayerItemMediaDataCollector.h>

@class AVPlayerItemMetadataCollectorInternal;

@interface AVPlayerItemMetadataCollector : AVPlayerItemMediaDataCollector {

	AVPlayerItemMetadataCollectorInternal* _metadataCollectorInternal;

}

@property (nonatomic,__weak,readonly) id<AVPlayerItemMetadataCollectorPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detatchFromPlayerItem;
-(void)_updateTaggedRangeMetadataArray:(id)arg1 ;
-(id)_getFilteredMetadataGroups:(id)arg1 fromIdentifiers:(id)arg2 andClassifyingLabels:(id)arg3 modifiedIndexesOut:(id*)arg4 newIndexesOut:(id*)arg5 ;
-(BOOL)_isAttachedToPlayerItem;
-(void)dealloc;
-(id)init;
-(id<AVPlayerItemMetadataCollectorPushDelegate>)delegate;
-(id)initWithIdentifiers:(id)arg1 classifyingLabels:(id)arg2 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)finalize;
@end

