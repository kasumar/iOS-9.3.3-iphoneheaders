/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@class NSString;

@interface _HKStackedCategoryValueSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	id _userInfo;
	CGPoint _start;
	CGPoint _end;

}

@property (nonatomic,readonly) CGPoint start;                       //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) CGPoint end;                         //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) id userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
-(NSString *)description;
-(id)userInfo;
-(CGPoint)start;
-(CGPoint)end;
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)initWithStart:(CGPoint)arg1 end:(CGPoint)arg2 userInfo:(id)arg3 ;
@end

