/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

@interface BWSampleBufferSinkNode : BWSinkNode {

	/*^block*/id _sampleBufferAvailableHandler;

}

@property (nonatomic,copy) id sampleBufferAvailableHandler;              //@synthesize sampleBufferAvailableHandler=_sampleBufferAvailableHandler - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)setSampleBufferAvailableHandler:(id)arg1 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithInputMediaType:(unsigned)arg1 ;
-(id)sampleBufferAvailableHandler;
@end

