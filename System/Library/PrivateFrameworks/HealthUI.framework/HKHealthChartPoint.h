/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, NSNumber, NSString;

@interface HKHealthChartPoint : NSObject <HKChartPoint> {

	NSDate* _date;
	NSNumber* _sum;
	NSNumber* _min;
	NSNumber* _max;
	NSNumber* _avg;
	id _userInfo;

}

@property (nonatomic,retain) id userInfo;                           //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id)xValue;
-(id)yValue;
-(id)minXValue;
-(id)maxXValue;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(id)minYValue;
-(id)maxYValue;
-(id)initWithStatistics:(id)arg1 options:(unsigned long long)arg2 unit:(id)arg3 dataUnit:(id)arg4 ;
@end

