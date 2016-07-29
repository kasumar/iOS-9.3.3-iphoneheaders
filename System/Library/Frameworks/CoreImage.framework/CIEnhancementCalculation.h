/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class CIEnhancementHistogram;

@interface CIEnhancementCalculation : NSObject {

	CGPoint originalFaceColor;
	CIEnhancementHistogram* lumHist;
	CIEnhancementHistogram* rgbSumHist;
	CIEnhancementHistogram* satHist;
	CIEnhancementHistogram* borderHist;
	double exposureValue;
	double maxShadow;
	double minShadow;
	double exposureValueAtZeroShadow;
	double curvePercent;
	BOOL faceInputSet;
	double percentFaceChange;

}

@property (readonly) CGPoint originalFaceColor; 
@property (readonly) CIEnhancementHistogram * lumHist; 
@property (readonly) CIEnhancementHistogram * rgbSumHist; 
@property (readonly) CIEnhancementHistogram * satHist; 
@property (readonly) CIEnhancementHistogram * borderHist; 
+(double)bestWarmthForI:(double)arg1 q:(double)arg2 percentChange:(double*)arg3 ;
-(id)faceBalanceWarmth;
-(id)faceBalanceStrength;
-(CGPoint)originalFaceColor;
-(id)vibrance;
-(unsigned long long)curveCount;
-(CGPoint)curvePointAtIndex:(unsigned long long)arg1 ;
-(void)setRGBSumHistogram:(id)arg1 ;
-(void)setLuminanceHistogram:(id)arg1 ;
-(void)setBorderHistogram:(id)arg1 ;
-(void)setSaturationHistogram:(id)arg1 ;
-(void)setFaceColorFromChromaI:(double)arg1 andChromaQ:(double)arg2 ;
-(id)rawShadow;
-(int)putShadowsAnalysisInto:(double*)arg1 ;
-(void)downSampleHistogram:(id)arg1 to:(unsigned)arg2 storeIn:(double*)arg3 ;
-(void)printAnalysis;
-(void)setCurvePercent:(double)arg1 ;
-(void)setupFaceColor:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4 ;
-(void)setExposureValue:(double)arg1 ;
-(void)setShadowsMin:(double)arg1 max:(double)arg2 zeroExposure:(double)arg3 ;
-(void)printHistogram:(id)arg1 downsampledTo:(unsigned)arg2 ;
-(void)printHistogramsDownsampledTo:(unsigned)arg1 ;
-(CIEnhancementHistogram *)lumHist;
-(CIEnhancementHistogram *)rgbSumHist;
-(CIEnhancementHistogram *)satHist;
-(CIEnhancementHistogram *)borderHist;
-(void)dealloc;
-(id)init;
-(id)shadow;
@end

