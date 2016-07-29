/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OITSUColor : NSObject <NSCopying> {

	CGColorRef mCGColor;

}

@property (readonly) CGColorRef CGColor; 
+(id)colorWithBGRValue:(long long)arg1 ;
+(id)colorWithRGBValue:(long long)arg1 ;
+(id)colorWithRGBBytes:(unsigned char)arg1 :(unsigned char)arg2 :(unsigned char)arg3 ;
+(id)colorWithCsColour:(const CsColour*)arg1 ;
+(id)colorWithEshColor:(const EshColor*)arg1 ;
+(id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4 ;
+(id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 ;
+(id)colorWithCalibratedHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithBGR:(unsigned)arg1 ;
+(id)colorWithSystemColorID:(int)arg1 ;
+(id)stringForSystemColorID:(int)arg1 ;
+(id)stringForColor:(id)arg1 ;
+(id)blackColor;
+(id)clearColor;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)whiteColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)lightGrayColor;
+(id)grayColor;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)yellowColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)brownColor;
+(id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithPatternImage:(id)arg1 ;
+(id)colorWithHexString:(id)arg1 ;
+(id)colorWithUIColor:(id)arg1 ;
+(id)randomColor;
-(void)getRGBBytes:(char*)arg1 :(char*)arg2 :(char*)arg3 ;
-(CsColour)csColour;
-(EshColor)eshColor;
-(id)copy;
-(void)set;
-(SCD_Struct_OI40)ttColor;
-(id)newSolidColoredBitmap:(CGSize)arg1 ;
-(id)solidColoredPngImage;
-(unsigned)toBGR;
-(id)colorWithTintValue:(double)arg1 ;
-(id)colorWithShadeValue:(double)arg1 ;
-(BOOL)isBlack;
-(CGColorRef)CGColor;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isOpaque;
-(id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)alphaComponent;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithPatternImage:(id)arg1 ;
-(id)initWithUIColor:(id)arg1 ;
-(double)redComponent;
-(double)greenComponent;
-(double)blueComponent;
-(id)initWithHexString:(id)arg1 ;
-(double)p_rgbComponentWithIndex:(unsigned char)arg1 ;
-(id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2 ;
-(BOOL)isAlmostEqualToColor:(id)arg1 ;
-(void)getRGBAComponents:(double*)arg1 ;
-(double)hueComponent;
-(double)saturationComponent;
-(double)brightnessComponent;
-(id)UIColor;
-(id)grayscaleColor;
-(id)invertedColor;
-(double)luminance;
-(BOOL)isNearlyWhite;
-(id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)hexString;
@end

