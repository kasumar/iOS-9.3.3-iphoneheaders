/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPhotoGrain : CIFilter {

	CIImage* inputImage;
	NSNumber* inputISO;
	NSNumber* inputAmount;
	NSNumber* inputSeed;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputISO; 
@property (nonatomic,copy) NSNumber * inputAmount; 
@property (nonatomic,copy) NSNumber * inputSeed; 
+(id)customAttributes;
-(void)setInputAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputAmount;
-(id)_interpolateGrainKernel;
-(id)_paddedTileKernel;
-(void)paramtersFor:(float)arg1 destination:(GrainParameters*)arg2 imageScaleFactor:(float)arg3 ;
-(id)_grainBlendAndMixKernel;
-(NSNumber *)inputISO;
-(void)setInputISO:(NSNumber *)arg1 ;
-(NSNumber *)inputSeed;
-(void)setInputSeed:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

