/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/tGraphDataSource.h>

@interface CameraTS : NSObject <tGraphDataSource> {

	BOOL _rearCamAutoFocusState;
	BOOL _rearCamAutoFocusStateTokenValid;
	int torchState;
	int _rearCamAutoFocusStateToken;

}

@property (assign,nonatomic) BOOL rearCamAutoFocusState;                        //@synthesize rearCamAutoFocusState=_rearCamAutoFocusState - In the implementation block
@property (assign,nonatomic) int torchState; 
@property (assign,nonatomic) int rearCamAutoFocusStateToken;                    //@synthesize rearCamAutoFocusStateToken=_rearCamAutoFocusStateToken - In the implementation block
@property (assign,nonatomic) BOOL rearCamAutoFocusStateTokenValid;              //@synthesize rearCamAutoFocusStateTokenValid=_rearCamAutoFocusStateTokenValid - In the implementation block
-(BOOL)rearCamAutoFocusState;
-(void)updateThermalTable:(int)arg1 :(unsigned long long)arg2 ;
-(BOOL)rearCamAutoFocusStateTokenValid;
-(void)setRearCamAutoFocusStateToken:(int)arg1 ;
-(void)setRearCamAutoFocusState:(BOOL)arg1 ;
-(int)rearCamAutoFocusStateToken;
-(void)setAutoFocusNotificationEnabledState:(BOOL)arg1 ;
-(void)setRearCamAutoFocusStateTokenValid:(BOOL)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(id)initSensor:(int)arg1 :(int)arg2 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(void)setTorchState:(int)arg1 ;
-(void)dealloc;
-(int)torchState;
@end

