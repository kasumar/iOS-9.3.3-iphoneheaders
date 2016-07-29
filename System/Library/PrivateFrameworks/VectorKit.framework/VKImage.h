/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSData, NSString, VKResourceManager;

@interface VKImage : NSObject {

	CGImageRef _imageRef;
	NSData* _data;
	NSString* _name;
	CGSize _size;
	double _scale;
	BOOL _usedAsTextureAndImage;
	Texture2D* _gglTexture;
	VKResourceManager* _resourceManager;
	unsigned char _imageHash[16];

}
-(CGSize)size;
-(void)dealloc;
-(double)scale;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(CGImageRef)image;
-(Texture2D*)gglTexture;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 usedAsTextureAndImage:(BOOL)arg3 ;
-(id)initWithData:(id)arg1 scale:(double)arg2 usedAsTextureAndImage:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 scale:(double)arg2 resourceManager:(id)arg3 ;
-(int)compareTo:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 ;
@end

