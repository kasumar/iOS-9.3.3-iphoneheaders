/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLTextureDescriptor.h>

@interface MTLTextureDescriptorInternal : MTLTextureDescriptor {

	MTLTextureDescriptorPrivate* _private;

}
-(unsigned long long)resourceOptions;
-(void)setCpuCacheMode:(unsigned long long)arg1 ;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(void)setResourceOptions:(unsigned long long)arg1 ;
-(unsigned long long)textureUsage;
-(void)setTextureUsage:(unsigned long long)arg1 ;
-(unsigned long long)swizzleRed;
-(void)setSwizzleRed:(unsigned long long)arg1 ;
-(unsigned long long)swizzleGreen;
-(void)setSwizzleGreen:(unsigned long long)arg1 ;
-(unsigned long long)swizzleBlue;
-(void)setSwizzleBlue:(unsigned long long)arg1 ;
-(unsigned long long)swizzleAlpha;
-(void)setSwizzleAlpha:(unsigned long long)arg1 ;
-(const MTLTextureDescriptorPrivate*)descriptorPrivate;
-(BOOL)validateWithDevice:(id)arg1 ;
-(BOOL)framebufferOnly;
-(void)setIsDrawable:(BOOL)arg1 ;
-(void)setStorageMode:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setRotation:(unsigned long long)arg1 ;
-(unsigned long long)rotation;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)pixelFormat;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setTextureType:(unsigned long long)arg1 ;
-(void)setMipmapLevelCount:(unsigned long long)arg1 ;
-(unsigned long long)mipmapLevelCount;
-(unsigned long long)textureType;
-(unsigned long long)arrayLength;
-(unsigned long long)usage;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)storageMode;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(void)setUsage:(unsigned long long)arg1 ;
-(BOOL)isDrawable;
-(unsigned long long)depth;
-(void)setDepth:(unsigned long long)arg1 ;
@end

