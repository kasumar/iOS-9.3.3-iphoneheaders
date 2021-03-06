/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@class MPSImageTransformSequence;

@interface MPSConversion : MPSUnaryImageKernel {

	MPSImageTransformSequence* transform;
	[2 srcDecode];
	[2 destDecode];
	unsigned long long sourceAlpha;
	unsigned long long destinationAlpha;

}

@property (assign,nonatomic) unsigned long long sourceAlpha; 
@property (assign,nonatomic) unsigned long long destinationAlpha; 
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 transform:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceDecode:(const float*)arg3 destinationTexture:(id)arg4 destinationDecode:(const float*)arg5 ;
-(unsigned long long)sourceAlpha;
-(void)setSourceAlpha:(unsigned long long)arg1 ;
-(unsigned long long)destinationAlpha;
-(void)setDestinationAlpha:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
@end

