/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassStencilAttachmentDescriptor.h>

@interface MTLRenderPassStencilAttachmentDescriptorInternal : MTLRenderPassStencilAttachmentDescriptor {

	MTLRenderPassAttachmentDescriptorPrivate _private;

}
+(id)attachmentDescriptor;
-(void)setSlice:(unsigned long long)arg1 ;
-(unsigned long long)slice;
-(void)setDepthPlane:(unsigned long long)arg1 ;
-(unsigned long long)depthPlane;
-(void)setResolveLevel:(unsigned long long)arg1 ;
-(unsigned long long)resolveLevel;
-(void)setResolveSlice:(unsigned long long)arg1 ;
-(unsigned long long)resolveSlice;
-(void)setResolveDepthPlane:(unsigned long long)arg1 ;
-(unsigned long long)resolveDepthPlane;
-(unsigned long long)loadAction;
-(unsigned long long)storeAction;
-(const MTLRenderPassAttachmentDescriptorPrivate*)_descriptorPrivate;
-(unsigned)clearStencil;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(unsigned long long)level;
-(id)texture;
-(void)setTexture:(id)arg1 ;
-(void)setResolveTexture:(id)arg1 ;
-(void)setLoadAction:(unsigned long long)arg1 ;
-(id)resolveTexture;
-(void)setStoreAction:(unsigned long long)arg1 ;
-(void)setClearStencil:(unsigned)arg1 ;
@end

