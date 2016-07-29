/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface StockChartDisplayMode : NSObject <NSCopying> {

	NSString* _hash;
	BOOL _showsVolume;
	BOOL _HUDEnabled;
	BOOL _showsPriceLabelForPreviousClose;
	BOOL _usesDetailedAxisLabels;
	BOOL _graphOverlapsYAxisLabels;
	long long _maxInterval;
	double _showsTitle;
	unsigned long long _yAxisLabelCount;
	unsigned long long _horizontalGridlineCount;
	double _volumeHeight;
	double _intervalRowHeight;
	double _lineWidth;
	UIColor* _lineColor;
	UIColor* _backgroundLinesColor;
	UIColor* _xAxisKeylineColor;
	UIColor* _axisLabelsColor;
	CGGradientRef _backgroundGradient;
	CGSize _chartSize;
	UIEdgeInsets _lineGraphInsets;

}

@property (assign,nonatomic) CGSize chartSize;                                        //@synthesize chartSize=_chartSize - In the implementation block
@property (assign,nonatomic) BOOL showsVolume;                                        //@synthesize showsVolume=_showsVolume - In the implementation block
@property (assign,nonatomic) long long maxInterval;                                   //@synthesize maxInterval=_maxInterval - In the implementation block
@property (assign,nonatomic) BOOL HUDEnabled;                                         //@synthesize HUDEnabled=_HUDEnabled - In the implementation block
@property (assign,nonatomic) double showsTitle;                                       //@synthesize showsTitle=_showsTitle - In the implementation block
@property (assign,nonatomic) unsigned long long yAxisLabelCount;                      //@synthesize yAxisLabelCount=_yAxisLabelCount - In the implementation block
@property (assign,nonatomic) unsigned long long horizontalGridlineCount;              //@synthesize horizontalGridlineCount=_horizontalGridlineCount - In the implementation block
@property (assign,nonatomic) BOOL showsPriceLabelForPreviousClose;                    //@synthesize showsPriceLabelForPreviousClose=_showsPriceLabelForPreviousClose - In the implementation block
@property (assign,nonatomic) BOOL usesDetailedAxisLabels;                             //@synthesize usesDetailedAxisLabels=_usesDetailedAxisLabels - In the implementation block
@property (assign,nonatomic) UIEdgeInsets lineGraphInsets;                            //@synthesize lineGraphInsets=_lineGraphInsets - In the implementation block
@property (assign,nonatomic) BOOL graphOverlapsYAxisLabels;                           //@synthesize graphOverlapsYAxisLabels=_graphOverlapsYAxisLabels - In the implementation block
@property (assign,nonatomic) double volumeHeight;                                     //@synthesize volumeHeight=_volumeHeight - In the implementation block
@property (assign,nonatomic) double intervalRowHeight;                                //@synthesize intervalRowHeight=_intervalRowHeight - In the implementation block
@property (nonatomic,readonly) double gutterHeight; 
@property (nonatomic,readonly) double lineGraphBottomPadding; 
@property (assign,nonatomic) double lineWidth;                                        //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                                     //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundLinesColor;                          //@synthesize backgroundLinesColor=_backgroundLinesColor - In the implementation block
@property (nonatomic,retain) UIColor * xAxisKeylineColor;                             //@synthesize xAxisKeylineColor=_xAxisKeylineColor - In the implementation block
@property (nonatomic,retain) UIColor * axisLabelsColor;                               //@synthesize axisLabelsColor=_axisLabelsColor - In the implementation block
@property (assign,nonatomic) CGGradientRef backgroundGradient;                        //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
+(id)defaultDisplayMode;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)setBackgroundGradient:(CGGradientRef)arg1 ;
-(CGGradientRef)backgroundGradient;
-(double)showsTitle;
-(void)setShowsTitle:(double)arg1 ;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(void)setYAxisLabelCount:(unsigned long long)arg1 ;
-(void)setShowsVolume:(BOOL)arg1 ;
-(void)setVolumeHeight:(double)arg1 ;
-(void)setHorizontalGridlineCount:(unsigned long long)arg1 ;
-(void)setXAxisKeylineColor:(UIColor *)arg1 ;
-(void)setChartSize:(CGSize)arg1 ;
-(BOOL)usesDetailedAxisLabels;
-(unsigned long long)yAxisLabelCount;
-(CGSize)chartSize;
-(double)intervalRowHeight;
-(double)lineGraphBottomPadding;
-(BOOL)graphOverlapsYAxisLabels;
-(double)volumeHeight;
-(BOOL)HUDEnabled;
-(BOOL)showsVolume;
-(double)gutterHeight;
-(UIColor *)backgroundLinesColor;
-(void)setBackgroundLinesColor:(UIColor *)arg1 ;
-(void)setAxisLabelsColor:(UIColor *)arg1 ;
-(void)setMaxInterval:(long long)arg1 ;
-(void)setIntervalRowHeight:(double)arg1 ;
-(long long)maxInterval;
-(void)setHUDEnabled:(BOOL)arg1 ;
-(unsigned long long)horizontalGridlineCount;
-(BOOL)showsPriceLabelForPreviousClose;
-(void)setShowsPriceLabelForPreviousClose:(BOOL)arg1 ;
-(void)setUsesDetailedAxisLabels:(BOOL)arg1 ;
-(UIEdgeInsets)lineGraphInsets;
-(void)setLineGraphInsets:(UIEdgeInsets)arg1 ;
-(void)setGraphOverlapsYAxisLabels:(BOOL)arg1 ;
-(UIColor *)xAxisKeylineColor;
-(UIColor *)axisLabelsColor;
@end

