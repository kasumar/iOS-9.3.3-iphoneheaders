/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHPresetImager.h>

@class TSCHChartType;

@interface TSCHPresetImagerInfoBased : TSCHPresetImager {

	TSCHChartType* mChartType;

}
+(id)presetImagerForChartType:(id)arg1 ;
-(id)initWithChartType:(id)arg1 ;
-(id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(CGSize)arg3 imageScale:(double)arg4 swatchFrame:(CGRect)arg5 documentRoot:(id)arg6 shouldCache:(BOOL*)arg7 ;
-(UIEdgeInsets)swatchImageEdgeInsetsForSize:(CGSize)arg1 ;
-(id)p_chartType;
-(id)p_imageRectAdjustments;
-(id)p_rectAdjustmentForChartType:(id)arg1 ;
-(void)dealloc;
@end

