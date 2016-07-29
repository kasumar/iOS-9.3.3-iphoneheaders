/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCellularPlanSubscriptionDataUsage : NSObject <NSCopying, NSSecureCoding> {

	double _dataUsed;
	double _dataCapacity;
	NSString* _dataCategory;

}

@property (nonatomic,readonly) double dataUsed;                      //@synthesize dataUsed=_dataUsed - In the implementation block
@property (nonatomic,readonly) double dataCapacity;                  //@synthesize dataCapacity=_dataCapacity - In the implementation block
@property (nonatomic,readonly) NSString * dataCategory;              //@synthesize dataCategory=_dataCategory - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCategory:(id)arg1 andDataUsed:(int)arg2 andDataCapacity:(int)arg3 ;
-(double)dataCapacity;
-(double)dataUsed;
-(NSString *)dataCategory;
@end

