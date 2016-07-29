/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSDate, NSUUID;

@interface _HKActiveWorkoutServerConfiguration : NSObject <NSSecureCoding> {

	BOOL _shouldUseDeviceData;
	BOOL _indoor;
	NSDictionary* _resumeDataByType;
	long long _workoutState;
	NSArray* _workoutEvents;
	unsigned long long _workoutActivityType;
	NSDate* _startDate;
	NSUUID* _UUID;

}

@property (nonatomic,retain) NSDictionary * resumeDataByType;                     //@synthesize resumeDataByType=_resumeDataByType - In the implementation block
@property (assign,nonatomic) long long workoutState;                              //@synthesize workoutState=_workoutState - In the implementation block
@property (nonatomic,retain) NSArray * workoutEvents;                             //@synthesize workoutEvents=_workoutEvents - In the implementation block
@property (assign,nonatomic) unsigned long long workoutActivityType;              //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
@property (assign,nonatomic) BOOL shouldUseDeviceData;                            //@synthesize shouldUseDeviceData=_shouldUseDeviceData - In the implementation block
@property (assign,getter=isIndoor,nonatomic) BOOL indoor;                         //@synthesize indoor=_indoor - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                                       //@synthesize UUID=_UUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setWorkoutState:(long long)arg1 ;
-(void)setWorkoutActivityType:(unsigned long long)arg1 ;
-(void)setShouldUseDeviceData:(BOOL)arg1 ;
-(void)setIndoor:(BOOL)arg1 ;
-(unsigned long long)workoutActivityType;
-(NSArray *)workoutEvents;
-(NSDictionary *)resumeDataByType;
-(long long)workoutState;
-(BOOL)isIndoor;
-(BOOL)shouldUseDeviceData;
-(void)setWorkoutEvents:(NSArray *)arg1 ;
-(void)setResumeDataByType:(NSDictionary *)arg1 ;
@end

