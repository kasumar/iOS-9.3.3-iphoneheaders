/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@class TSCHChartAxisID;

@interface TSCHChartReferenceLineLabelPaddingLayoutItem : TSCHChartLayoutItem {

	TSCHChartAxisID* mAxisID;

}

@property (nonatomic,retain) TSCHChartAxisID * axisID; 
-(TSCHChartAxisID *)axisID;
-(id)initWithParent:(id)arg1 axisID:(id)arg2 ;
-(CGSize)calcMinSize;
-(void)setAxisID:(TSCHChartAxisID *)arg1 ;
-(CGSize)p_calcMinSizeForModel:(id)arg1 ;
-(BOOL)p_hasReferenceLineLabelsWithModel:(id)arg1 ;
-(void)dealloc;
@end

