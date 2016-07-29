/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DECXPCObjectFactory : NSObject {

	unsigned long long _priorityLevel;
	unsigned long long _allowBattery;
	BOOL _repeating;
	BOOL _requireScreenSleep;
	BOOL _requireClassC;
	long long _intervalHours;
	long long _intervalMinutes;
	long long _intervalSeconds;

}

@property (assign,nonatomic) long long intervalHours;                //@synthesize intervalHours=_intervalHours - In the implementation block
@property (assign,nonatomic) long long intervalMinutes;              //@synthesize intervalMinutes=_intervalMinutes - In the implementation block
@property (assign,nonatomic) long long intervalSeconds;              //@synthesize intervalSeconds=_intervalSeconds - In the implementation block
@property (assign,nonatomic) BOOL repeating;                         //@synthesize repeating=_repeating - In the implementation block
@property (assign,nonatomic) BOOL requireScreenSleep;                //@synthesize requireScreenSleep=_requireScreenSleep - In the implementation block
@property (assign,nonatomic) BOOL requireClassC;                     //@synthesize requireClassC=_requireClassC - In the implementation block
-(id)init;
-(void)setPriorityLevelMaintenance;
-(void)setRequireClassC:(BOOL)arg1 ;
-(void)setRepeating:(BOOL)arg1 ;
-(void)setRequireScreenSleep:(BOOL)arg1 ;
-(void)setIntervalHours:(long long)arg1 ;
-(id)getXPCObject;
-(long long)_getInterval;
-(const char*)_activityPriority;
-(BOOL)_shouldAllowBattery;
-(void)setPriorityLevelUtility;
-(void)allowBattery;
-(void)disallowBattery;
-(long long)intervalHours;
-(long long)intervalMinutes;
-(void)setIntervalMinutes:(long long)arg1 ;
-(long long)intervalSeconds;
-(void)setIntervalSeconds:(long long)arg1 ;
-(BOOL)repeating;
-(BOOL)requireScreenSleep;
-(BOOL)requireClassC;
@end

