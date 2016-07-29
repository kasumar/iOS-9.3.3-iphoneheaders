/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSData;

@interface TSCH3DMipmaps : NSObject {

	int mWidth;
	int mHeight;
	unsigned long long mComponents;
	NSData* mData;

}

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) unsigned long long components; 
@property (nonatomic,readonly) NSData * data; 
+(id)mipmapPathFromPath:(id)arg1 ;
+(CGSize)optimizedMipmapLevel0Size;
+(CGSize)mipmapSizeForTexturableSize:(CGSize)arg1 ;
+(id)mipmapsWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4 ;
+(id)mipmapsFromData:(id)arg1 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4 ;
-(id)initFromData:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSData *)data;
-(int)width;
-(int)height;
-(BOOL)valid;
-(unsigned long long)components;
-(BOOL)writeToFile:(id)arg1 ;
@end
