/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIImageAccumulator : NSObject {

	void* _state;

}

@property (readonly) CGRect extent; 
@property (readonly) int format; 
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 options:(id)arg3 ;
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 ;
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 options:(id)arg3 ;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 ;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(void)setImage:(id)arg1 dirtyRect:(CGRect)arg2 ;
-(void)commitUpdates:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(CGRect)extent;
-(id)image;
-(void)clear;
-(int)format;
@end

