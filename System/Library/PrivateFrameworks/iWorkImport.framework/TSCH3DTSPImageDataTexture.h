/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTexture.h>

@class TSCH3DTSPImageData, TSCH3DTSPMipmapData, NSNumber, TSPData;

@interface TSCH3DTSPImageDataTexture : TSCH3DTexture {

	TSCH3DTSPImageData* mData;
	TSCH3DTSPMipmapData* mOptimizedMipmapData;
	NSNumber* mCachedHash;

}

@property (nonatomic,readonly) TSCH3DTSPImageData * data; 
@property (nonatomic,readonly) TSPData * imageData; 
+(id)instanceWithArchive:(const Chart3DTSPImageDataTextureArchive*)arg1 unarchiver:(id)arg2 ;
+(id)textureWithImageData:(id)arg1 optimizedMipmapData:(id)arg2 ;
-(void)saveToArchive:(Chart3DTSPImageDataTextureArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DTSPImageDataTextureArchive*)arg1 unarchiver:(id)arg2 ;
-(void)p_setOptimizedMipMapData:(id)arg1 ;
-(BOOL)hasCompleteData;
-(BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)arg1 ;
-(id)optimizedMipmapBuffer;
-(id)databufferForDataCache:(id)arg1 ;
-(id)initWithImageData:(id)arg1 optimizedMipmapData:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(TSCH3DTSPImageData *)data;
-(TSPData *)imageData;
-(void)setChanged:(BOOL)arg1 ;
@end

