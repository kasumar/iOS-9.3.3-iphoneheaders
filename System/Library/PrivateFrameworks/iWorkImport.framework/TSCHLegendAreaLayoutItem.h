/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@class NSValue;

@interface TSCHLegendAreaLayoutItem : TSCHChartLayoutItem {

	NSValue* mLegendGeometryFrame;

}

@property (assign,nonatomic) CGRect legendModelGeometryFrame; 
-(CGSize)calcMinSize;
-(CGRect)calcDrawingRect;
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)renderersWithRep:(id)arg1 ;
-(CGRect)legendModelGeometryFrame;
-(void)setLegendModelGeometryFrame:(CGRect)arg1 ;
-(CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(void)clearLayoutSize;
-(CGAffineTransform)transformForRenderingBadge:(unsigned long long)arg1 cellType:(int)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 ;
-(CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 cellType:(int)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 ;
-(CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 cellType:(int)arg2 range:(NSRange)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 ;
-(void)updateLegendGeometryFrameFromLegendModelCache;
-(double)p_legendModelWidth;
-(CGAffineTransform)p_transformForRenderingLabel:(unsigned long long)arg1 paragraphStyle:(id)arg2 cellType:(int)arg3 rangePtr:(NSRange*)arg4 outElementSize:(CGSize*)arg5 outClipRect:(CGRect*)arg6 ;
-(void)resetLayoutSize;
-(CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 paragraphStyle:(id)arg2 cellType:(int)arg3 range:(NSRange)arg4 outElementSize:(CGSize*)arg5 outClipRect:(CGRect*)arg6 ;
-(void)dealloc;
-(void)setLayoutSize:(CGSize)arg1 ;
-(void)clearAll;
-(id)initWithParent:(id)arg1 ;
@end

