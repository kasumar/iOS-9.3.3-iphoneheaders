/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSObservationTransformer.h>

@interface NSObservationBuffer : NSObservationTransformer

@property (getter=isMemoryPressureSensitive) BOOL memoryPressureSensitive; 
@property (copy) id bufferFullHandler; 
@property (assign) BOOL automaticallyEmitsObjects; 
+(id)bufferWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)bufferWithOutputQueue:(id)arg1 ;
-(id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3 ;
-(id)bufferFullHandler;
-(void)emitObject;
-(void)emitAllObjects;
-(void)setBufferFullHandler:(id)arg1 ;
-(BOOL)automaticallyEmitsObjects;
-(void)setAutomaticallyEmitsObjects:(BOOL)arg1 ;
-(BOOL)isMemoryPressureSensitive;
-(void)setMemoryPressureSensitive:(BOOL)arg1 ;
@end
