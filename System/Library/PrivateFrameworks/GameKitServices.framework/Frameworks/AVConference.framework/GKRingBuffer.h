/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKRingBuffer : NSObject {

	void* ringBufRef;
	unsigned endTime;
	unsigned capacity;
	unsigned bytesPerFrame;

}
-(void)dealloc;
-(id)init;
-(id)initWithCapacity:(unsigned)arg1 bytesPerFrame:(unsigned)arg2 ;
-(void)increaseCapacity:(unsigned)arg1 ;
-(BOOL)store:(char*)arg1 numSamples:(unsigned)arg2 timestamp:(unsigned)arg3 ;
-(int)needsNewNumSamples:(unsigned)arg1 timestamp:(unsigned)arg2 ;
-(int)fetch:(char*)arg1 numSamples:(unsigned)arg2 timestamp:(unsigned)arg3 ;
@end

