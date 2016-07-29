/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAxisLabelsLayoutItem.h>

@interface TSCHChartValueAxisLabelsLayoutItem : TSCHChartAxisLabelsLayoutItem
-(unsigned long long)numberOfLabelsForAxis:(id)arg1 ;
-(id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 axis:(id)arg2 ;
-(id)selectionPathLabelType;
-(CGPoint)axisAnchorForPosition:(int)arg1 degrees:(float)arg2 area:(CGRect)arg3 unrotatedSize:(CGSize)arg4 unitSpaceValue:(double)arg5 ;
-(CGPoint)labelAnchorForPosition:(int)arg1 degrees:(float)arg2 ;
-(void)dealloc;
-(id)initWithParent:(id)arg1 ;
@end

