/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject {

	TSDImageAdjustments* mImageAdjustments;

}
-(CGImageRef)p_newImageFromCIImage:(id)arg1 underlyingImage:(CGImageRef)arg2 ;
-(id)initWithImageAdjustments:(id)arg1 ;
-(CGImageRef)newFilteredImageForImage:(CGImageRef)arg1 enhancedImage:(CGImage*)arg2 ;
-(void)dealloc;
-(id)init;
@end

