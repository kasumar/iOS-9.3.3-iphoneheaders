/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIColorControls : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSaturation;
	NSNumber* inputBrightness;
	NSNumber* inputContrast;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSaturation; 
@property (nonatomic,retain) NSNumber * inputBrightness; 
@property (nonatomic,retain) NSNumber * inputContrast; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputSaturation:(NSNumber *)arg1 ;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(NSNumber *)inputSaturation;
-(NSNumber *)inputBrightness;
-(NSNumber *)inputContrast;
-(void)setInputImage:(CIImage *)arg1 ;
@end

