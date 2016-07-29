/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ADEventListenerPlugin/ADEventListenerPlugin-Structs.h>
@class NSDictionary, NSNumber;

@interface PLBatteryProperties : NSObject {

	unsigned batteryEntry;
	NSDictionary* batteryProperties;

}

@property (nonatomic,readonly) BOOL gasGaugeEnabled; 
@property (nonatomic,readonly) double maxCapacity; 
@property (nonatomic,readonly) double currentCapacity; 
@property (nonatomic,readonly) double rawCurrentCapacity; 
@property (nonatomic,readonly) double capacity; 
@property (nonatomic,readonly) double rawCapacity; 
@property (nonatomic,readonly) long long voltage; 
@property (nonatomic,readonly) BOOL isCharging; 
@property (nonatomic,readonly) BOOL isPluggedIn; 
@property (nonatomic,readonly) BOOL isCritical; 
@property (nonatomic,readonly) long long chargingCurrent; 
@property (nonatomic,readonly) long long batteryTemp; 
@property (nonatomic,readonly) long long cycleCount; 
@property (nonatomic,readonly) long long designCapacity; 
@property (nonatomic,readonly) long long current; 
@property (nonatomic,readonly) BOOL fullyCharged; 
@property (nonatomic,readonly) BOOL draining; 
@property (nonatomic,readonly) long long updateTime; 
@property (nonatomic,readonly) NSNumber * adapterInfo; 
@property (nonatomic,readonly) NSNumber * connectedStatus; 
@property (nonatomic,readonly) double currentAbsoluteCapacity; 
+(id)properties;
-(BOOL)draining;
-(long long)batteryTemp;
-(long long)chargingCurrent;
-(long long)cycleCount;
-(id)initWithBatteryEntry:(unsigned)arg1 ;
-(double)rawCapacity;
-(id)batteryProperties;
-(double)currentAbsoluteCapacity;
-(NSNumber *)adapterInfo;
-(double)rawMaxCapacity;
-(double)rawCurrentCapacity;
-(long long)voltage;
-(double)currentCapacity;
-(BOOL)fullyCharged;
-(NSNumber *)connectedStatus;
-(id)humanReadableChargingState;
-(long long)designCapacity;
-(id)propertyForKey:(CFStringRef)arg1 ;
-(void)dealloc;
-(id)init;
-(double)capacity;
-(double)maxCapacity;
-(long long)updateTime;
-(long long)current;
-(BOOL)isPluggedIn;
-(void)invalidateCache;
-(BOOL)isCharging;
-(BOOL)isCritical;
-(BOOL)gasGaugeEnabled;
@end

