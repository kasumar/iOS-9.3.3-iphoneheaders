/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DValueEnumerator.h>

@class TSCHChartAxis, TSCH3DAxisLabelKind;

@interface TSCH3DAxisLabelEnumerator : TSCH3DValueEnumerator {

	TSCHChartAxis* mAxis;
	TSCH3DAxisLabelKind* mKind;

}

@property (nonatomic,readonly) TSCH3DAxisLabelKind * kind; 
+(id)enumeratorWithAxis:(id)arg1 kind:(id)arg2 ;
-(BOOL)shouldRender;
-(id)stringForLabelResources:(id)arg1 ;
-(id)initWithAxis:(id)arg1 kind:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)string;
-(void)update;
-(TSCH3DAxisLabelKind *)kind;
-(int)labelPosition;
@end

