/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HKAxisLabelDataSource.h>

@protocol HKZoomScale, HKAxisLabelDataSource;
@class HKAxisStyle, HKCoordinateTransform, HKValueRange, NSString;

@interface HKAxis : NSObject <NSCopying, HKAxisLabelDataSource> {

	BOOL _requiresScaling;
	BOOL _automaticallyFitData;
	HKAxisStyle* _preferredStyle;
	HKAxisStyle* _secondaryStyle;
	long long _maxLabels;
	long long _minLabels;
	HKCoordinateTransform* _transform;
	id<HKZoomScale> _zoomScale;
	id<HKAxisLabelDataSource> _labelDataSource;
	HKValueRange* _chartableValueRange;
	HKLinearTransform _pointTransform;

}

@property (nonatomic,readonly) BOOL requiresScaling;                                        //@synthesize requiresScaling=_requiresScaling - In the implementation block
@property (nonatomic,retain) HKAxisStyle * preferredStyle;                                  //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (nonatomic,retain) HKAxisStyle * secondaryStyle;                                  //@synthesize secondaryStyle=_secondaryStyle - In the implementation block
@property (assign,nonatomic) BOOL automaticallyFitData;                                     //@synthesize automaticallyFitData=_automaticallyFitData - In the implementation block
@property (assign,nonatomic) long long maxLabels;                                           //@synthesize maxLabels=_maxLabels - In the implementation block
@property (assign,nonatomic) long long minLabels;                                           //@synthesize minLabels=_minLabels - In the implementation block
@property (nonatomic,retain) HKCoordinateTransform * transform;                             //@synthesize transform=_transform - In the implementation block
@property (nonatomic,retain) id<HKZoomScale> zoomScale;                                     //@synthesize zoomScale=_zoomScale - In the implementation block
@property (assign,nonatomic) HKLinearTransform pointTransform;                              //@synthesize pointTransform=_pointTransform - In the implementation block
@property (assign,nonatomic,__weak) id<HKAxisLabelDataSource> labelDataSource;              //@synthesize labelDataSource=_labelDataSource - In the implementation block
@property (nonatomic,retain) HKValueRange * chartableValueRange;                            //@synthesize chartableValueRange=_chartableValueRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTransform:(HKCoordinateTransform *)arg1 ;
-(HKCoordinateTransform *)transform;
-(id<HKZoomScale>)zoomScale;
-(void)setZoomScale:(id<HKZoomScale>)arg1 ;
-(void)setPreferredStyle:(HKAxisStyle *)arg1 ;
-(HKAxisStyle *)preferredStyle;
-(BOOL)automaticallyFitData;
-(BOOL)requiresScaling;
-(HKLinearTransform)_pointTransformFromSeriesRanges:(id)arg1 linearTransform:(HKLinearTransform)arg2 chartRange:(HKRange)arg3 ;
-(HKLinearTransform)pointTransform;
-(void)setPointTransform:(HKLinearTransform)arg1 ;
-(void)setLabelDataSource:(id<HKAxisLabelDataSource>)arg1 ;
-(id)labelsForChartRange:(HKRange)arg1 zoomScale:(double)arg2 ;
-(CGPoint)renderPositionForLabel:(id)arg1 rect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6 ;
-(BOOL)isEqualToAxis:(id)arg1 ;
-(void)drawGridlinesWithChartRect:(CGRect)arg1 zoomScale:(double)arg2 contentOffset:(CGPoint)arg3 renderView:(id)arg4 ;
-(void)drawLabelsWithChartRect:(CGRect)arg1 zoomScale:(double)arg2 contentOffset:(CGPoint)arg3 touchPoint:(CGPoint)arg4 renderView:(id)arg5 ;
-(void)enumerateTickCoordinatesInChartRange:(HKRange)arg1 zoomScale:(double)arg2 handler:(/*^block*/id)arg3 ;
-(long long)maxLabels;
-(id)adjustedRangeForFittedRange:(id)arg1 ;
-(HKRange)_chartRangeForChartRect:(CGRect)arg1 zoomScale:(double)arg2 contentOffset:(CGPoint)arg3 ;
-(void)_offsetForChartRect:(CGRect)arg1 chartRange:(HKRange)arg2 zoomScaleOut:(double*)arg3 contentOffsetOut:(CGPoint*)arg4 ;
-(long long)minLabels;
-(HKLinearTransform)pointTransformFittingValueRange:(id)arg1 toChartRange:(HKRange)arg2 ;
-(double)_axisOffsetWithStyle:(id)arg1 chartRect:(CGRect)arg2 horizontalAlignmentOut:(long long*)arg3 ;
-(HKAxisStyle *)secondaryStyle;
-(id<HKAxisLabelDataSource>)labelDataSource;
-(CGRect)_labelBackgroundRectWithLabels:(id)arg1 font:(id)arg2 offset:(double)arg3 rect:(CGRect)arg4 style:(id)arg5 ;
-(void)_drawTextInRect:(CGRect)arg1 zoomScale:(double)arg2 contentOffset:(CGPoint)arg3 offset:(double)arg4 horizontalAlignment:(long long)arg5 renderView:(id)arg6 style:(id)arg7 ;
-(void)_renderTickMarksWithChartRect:(CGRect)arg1 zoomScale:(double)arg2 contentOffset:(CGPoint)arg3 style:(id)arg4 renderView:(id)arg5 ;
-(id)_gridLinesForAxisRect:(CGRect)arg1 zoomScale:(double)arg2 contentOffset:(CGPoint)arg3 style:(id)arg4 ;
-(BOOL)_styleIsHorizontal:(id)arg1 ;
-(void)_drawTextBackgroundWithLabels:(id)arg1 font:(id)arg2 offset:(double)arg3 rect:(CGRect)arg4 style:(id)arg5 renderView:(id)arg6 ;
-(double)_axisFillWidthForStyle:(id)arg1 labels:(id)arg2 font:(id)arg3 ;
-(double)_maxLabelWidthFromLabels:(id)arg1 font:(id)arg2 ;
-(void)_addTickMarksForPosition:(unsigned long long)arg1 axisRect:(CGRect)arg2 chartRange:(HKRange)arg3 zoomScale:(double)arg4 contentOffset:(CGPoint)arg5 toBezierPath:(id)arg6 style:(id)arg7 ;
-(void)setSecondaryStyle:(HKAxisStyle *)arg1 ;
-(void)setAutomaticallyFitData:(BOOL)arg1 ;
-(void)setMaxLabels:(long long)arg1 ;
-(void)setMinLabels:(long long)arg1 ;
-(HKValueRange *)chartableValueRange;
-(void)setChartableValueRange:(HKValueRange *)arg1 ;
@end

