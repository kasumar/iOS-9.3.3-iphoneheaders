/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassDescriptor.h>

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {

	MTLRenderPassDescriptorPrivate _private;

}
+(id)renderPassDescriptor;
-(const MTLRenderPassDescriptorPrivate*)_descriptorPrivate;
-(void)setVisibilityResultBuffer:(id)arg1 ;
-(id)visibilityResultBuffer;
-(unsigned long long)framebufferWidth;
-(unsigned long long)framebufferHeight;
-(void)setExpandedClipRange:(BOOL)arg1 ;
-(BOOL)expandedClipRange;
-(BOOL)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
-(void)setFramebufferWidth:(unsigned long long)arg1 ;
-(void)setFramebufferHeight:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)colorAttachments;
-(id)depthAttachment;
-(id)stencilAttachment;
-(void)setDepthAttachment:(id)arg1 ;
-(void)setStencilAttachment:(id)arg1 ;
@end

