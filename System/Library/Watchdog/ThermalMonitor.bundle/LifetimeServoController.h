/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/tGraphDataSource.h>

@protocol OS_dispatch_source;
@class LifetimeServoAFLUT, AggDThermalMonitor, NSObject;

@interface LifetimeServoController : NSObject <tGraphDataSource> {

	unsigned _dieTempCtlService;
	long long _is;
	long long _isUp;
	long long _isDown;
	float _r;
	float _af_i;
	float _afAllMax;
	float _afAllAverage;
	int _u;
	int _Lmin;
	int _Lmax;
	float _ki_ls;
	LifetimeServoAFLUT* _afLUT;
	CFDictionaryRef _subscribedChannels;
	IOReportSubscriptionCFRef _subscription;
	CFDictionaryRef _lastReading;
	int _perfStateVoltages[8];
	float _perfStateFraction[8];
	int _override_is;
	int _override_tempMax;
	int _override_tempAverage;
	int _override_af_i;
	long long _lastSleepEntry;
	AggDThermalMonitor* _aggdController;
	NSObject*<OS_dispatch_source> _statePersistenceTimer;

}
-(id)initWithParams:(id)arg1 aggdController:(id)arg2 ;
-(void)overrideParam:(id)arg1 value:(int)arg2 ;
-(BOOL)initPerfStateVoltages;
-(void)updateForTempMax:(int)arg1 tempAverage:(int)arg2 ;
-(void)updatePersistedState;
-(CFDictionaryRef)newChannelForDriver:(const char*)arg1 ;
-(void)updatePerfStateReporting;
-(void)updateDieTempTarget;
-(int)writeToDriverService:(unsigned)arg1 key:(CFStringRef)arg2 value:(long long)arg3 ;
-(void)initializeLifetimeServoStateAsPersisted;
-(float)accelerationFactorForTemperature:(int)arg1 cpuPerfStateIndex:(int)arg2 ;
-(void)initPerfStateReporting;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(void)updateSystemPowerState:(BOOL)arg1 ;
-(id)init;
@end

