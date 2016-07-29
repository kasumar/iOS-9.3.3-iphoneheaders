/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@interface TSCHChartAxisTitleLayoutItem : TSCHChartLayoutItem {

	CGSize mChartBodySize;
	double mMinHitSize;

}

@property (assign,nonatomic) CGSize chartBodySize; 
@property (assign,nonatomic) double minHitSize; 
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(CGSize)calcMinSize;
-(CGRect)calcDrawingRect;
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)axisLayoutItem;
-(CGAffineTransform)transformForRenderingOutElementSize:(CGSize*)arg1 outClipRect:(CGRect*)arg2 ;
-(CGAffineTransform)transformForRenderingRange:(NSRange)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 ;
-(BOOL)isTitleOn;
-(void)setChartBodySize:(CGSize)arg1 ;
-(id)subselectionHaloPositionsForSelections:(id)arg1 ;
-(CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(CGSize)chartBodySize;
-(CGAffineTransform)p_transformForRenderingRangePtr:(NSRange*)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 ;
-(double)minHitSize;
-(void)setMinHitSize:(double)arg1 ;
-(double)titlePaddingForAxis:(id)arg1 ;
-(id)initWithParent:(id)arg1 ;
@end

