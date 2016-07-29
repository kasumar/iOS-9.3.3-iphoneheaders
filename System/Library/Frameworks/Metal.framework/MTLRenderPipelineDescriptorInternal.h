/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineDescriptor.h>

@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor {

	MTLRenderPipelineDescriptorPrivate _private;

}
-(void)validateWithDevice:(id)arg1 ;
-(id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)fragmentFunction;
-(id)serializeFragmentData;
-(const MTLRenderPipelineDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)sampleMask;
-(void)setSampleMask:(unsigned long long)arg1 ;
-(float)sampleCoverage;
-(void)setSampleCoverage:(float)arg1 ;
-(BOOL)isAlphaToCoverageEnabled;
-(void)setAlphaToCoverageEnabled:(BOOL)arg1 ;
-(BOOL)isAlphaToOneEnabled;
-(void)setAlphaToOneEnabled:(BOOL)arg1 ;
-(BOOL)isRasterizationEnabled;
-(void)setRasterizationEnabled:(BOOL)arg1 ;
-(BOOL)isVertexEnabled;
-(id)fastBlendDescriptorAtIndex:(unsigned long long)arg1 ;
-(id)serializedVertexData;
-(void)setVertexEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)vertexDescriptor;
-(void)setVertexDescriptor:(id)arg1 ;
-(id)colorAttachments;
-(void)setDepthAttachmentPixelFormat:(unsigned long long)arg1 ;
-(void)setStencilAttachmentPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)depthAttachmentPixelFormat;
-(unsigned long long)stencilAttachmentPixelFormat;
-(void)setVertexFunction:(id)arg1 ;
-(void)setFragmentFunction:(id)arg1 ;
-(id)vertexFunction;
@end

