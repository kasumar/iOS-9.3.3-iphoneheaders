/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BatteryUsageUI/BatteryUsageUI-Structs.h>
#import <UIKit/UIView.h>

@class NSDate, NSMutableArray;

@interface PLBatteryUIGraphView : UIView {

	NSDate* startDate;
	NSDate* endDate;
	float maxPower;
	float minPower;
	int _errValue;
	int _graphType;
	NSMutableArray* _inputData;

}

@property (nonatomic,copy) NSMutableArray * inputData;              //@synthesize inputData=_inputData - In the implementation block
@property (assign,nonatomic) int graphType;                         //@synthesize graphType=_graphType - In the implementation block
+(int)graphHeight;
-(id)initWithFrame:(CGRect)arg1 andData:(id)arg2 ;
-(void)drawErrorText:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)drawPoints:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)setDefaultRange;
-(int)graphType;
-(void)drawGrid:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)setRangesFromArray:(id)arg1 ;
-(void)setGraphType:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSMutableArray *)inputData;
-(void)setInputData:(NSMutableArray *)arg1 ;
@end

