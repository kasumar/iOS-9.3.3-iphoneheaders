/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassAttachmentDescriptor.h>

@interface MTLRenderPassDepthAttachmentDescriptor : MTLRenderPassAttachmentDescriptor {

	unsigned long long _depthResolveFilter;

}

@property (assign,nonatomic) double clearDepth; 
@property (assign,nonatomic) unsigned long long depthResolveFilter;              //@synthesize depthResolveFilter=_depthResolveFilter - In the implementation block
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)depthResolveFilter;
-(void)setDepthResolveFilter:(unsigned long long)arg1 ;
@end

