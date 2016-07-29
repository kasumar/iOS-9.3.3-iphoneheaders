/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@interface TSCHChartAxisLabelsLayoutItem : TSCHChartLayoutItem {

	unsigned long long mStride;
	float mAngleInDegrees;
	float mAngleInRadians;

}

@property (nonatomic,readonly) unsigned long long stride; 
-(id)labelsLayoutItem;
-(unsigned long long)numberOfLabelsForAxis:(id)arg1 ;
-(CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 ;
-(id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(CGSize)calcMinSize;
-(CGRect)calcDrawingRect;
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)axisLayoutItem;
-(unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 axis:(id)arg2 ;
-(CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 range:(NSRange)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 ;
-(CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 usingString:(id)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 useAngle:(BOOL)arg5 ;
-(CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(CGRect)calcOverhangRect;
-(BOOL)showLabelsForAxis:(id)arg1 ;
-(unsigned long long)strideInLayoutArea:(CGRect)arg1 ;
-(id)selectionPathLabelType;
-(CGPoint)axisAnchorForPosition:(int)arg1 degrees:(float)arg2 area:(CGRect)arg3 unrotatedSize:(CGSize)arg4 unitSpaceValue:(double)arg5 ;
-(CGPoint)labelAnchorForPosition:(int)arg1 degrees:(float)arg2 ;
-(CGRect)layoutSpaceRectForAllLabels;
-(CGAffineTransform)p_transformForRenderingLabel:(unsigned long long)arg1 range:(NSRange*)arg2 inLayoutArea:(CGRect)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 usingString:(id)arg6 stride:(unsigned long long*)arg7 useAngle:(BOOL)arg8 ;
-(unsigned long long)p_computeAutoStrideInLayoutArea:(CGRect)arg1 ;
-(void)p_rect:(CGRect*)arg1 andTransform:(CGAffineTransform*)arg2 inLayoutArea:(CGRect)arg3 forIndex:(unsigned long long)arg4 paragraphStyle:(id)arg5 ;
-(long long)p_smallestSecondValueLabelIndex:(long long)arg1 start:(long long)arg2 end:(long long)arg3 inLayoutArea:(CGRect)arg4 paragraphStyle:(id)arg5 isTop:(BOOL)arg6 ;
-(long long)p_smallestSecondValueLabelIndex:(long long)arg1 start:(long long)arg2 end:(long long)arg3 inLayoutArea:(CGRect)arg4 paragraphStyle:(id)arg5 ;
-(id)p_axisFromLayoutItem;
-(id)p_overrideLabelStringForHitTestingEmptyLabel;
-(void)setLayoutSize:(CGSize)arg1 ;
-(void)clearAll;
-(unsigned long long)stride;
@end

