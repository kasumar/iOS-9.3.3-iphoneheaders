/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

@protocol BWRemoteQueueSinkNodeDelegate;
@class NSDictionary;

@interface BWRemoteQueueSinkNode : BWSinkNode {

	BOOL _mediaTypeIsVideo;
	remoteQueueSenderOpaqueRef _remoteQueueSender;
	shmemPoolOpaqueRef _sharedMemoryPool;
	CFAllocatorRef _sharedMemoryPoolCFAllocator;
	id<BWRemoteQueueSinkNodeDelegate> _delegate;
	int _clientVideoRetainedBufferCount;
	BOOL _discardsLateSampleBuffers;
	BOOL _attachPanoramaMetadata;
	BOOL _sentDiagnosticMetadata;
	BOOL _disableFlatDictionaryVDOMetadata;
	OpaqueFigFlatDictionaryKeySpecRef _makerNoteKeySpec;
	NSDictionary* _videoColorInfo;
	BOOL _cameraSupportsFlash;
	opaqueCMFormatDescriptionRef _cachedVideoFormatDescription;
	SCD_Struct_BW2 _lastPTS;

}

@property (assign,nonatomic) id<BWRemoteQueueSinkNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)setDelegate:(id<BWRemoteQueueSinkNodeDelegate>)arg1 ;
-(void)dealloc;
-(id<BWRemoteQueueSinkNodeDelegate>)delegate;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setDiscardsLateSampleBuffers:(BOOL)arg1 ;
-(void)setClientVideoRetainedBufferCount:(int)arg1 ;
-(void)setAttachPanoramaMetadata:(BOOL)arg1 ;
-(void)setCameraSupportsFlash:(BOOL)arg1 ;
-(id)initWithMediaType:(unsigned)arg1 ;
-(void)setVideoColorInfo:(id)arg1 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)_handlePeerTerminated;
-(int)clientVideoRetainedBufferCount;
-(BOOL)discardsLateSampleBuffers;
-(BOOL)attachPanoramaMetadata;
-(id)videoColorInfo;
-(BOOL)cameraSupportsFlash;
-(void)_attachDiagnosticMetadataIfDevicePropertiesLockedForPanorama:(opaqueCMSampleBufferRef)arg1 ;
@end

