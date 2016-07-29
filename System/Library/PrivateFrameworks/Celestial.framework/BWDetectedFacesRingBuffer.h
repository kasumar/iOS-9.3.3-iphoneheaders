/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray;

@interface BWDetectedFacesRingBuffer : NSObject {

	NSMutableArray* _ringBuffer;
	OpaqueFigSimpleMutexRef _mutex;
	int _depth;

}
-(void)dealloc;
-(void)flush;
-(id)initWithDepth:(int)arg1 ;
-(void)transferFacesToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)addFacesFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

