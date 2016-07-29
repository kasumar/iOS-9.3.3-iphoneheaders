/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class _UILegibilitySettings;

@interface SBLockScreenBatteryChargingView : UIView {

	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) BOOL batteryVisible; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) double desiredVisibilityDuration; 
+(id)batteryChargingViewWithSingleBattery;
+(id)batteryChargingViewWithDoubleBattery;
+(id)maskImageNameForChargingBattery;
+(id)maskImageNameForInternalChargingBattery;
+(id)maskImageNameForExternalChargingBattery;
-(void)setPrimaryChargePercentage:(long long)arg1 isCharging:(BOOL)arg2 detailed:(BOOL)arg3 ;
-(void)setSecondaryChargePercentage:(long long)arg1 isCharging:(BOOL)arg2 deviceName:(id)arg3 ;
-(BOOL)batteryVisible;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(double)desiredVisibilityDuration;
-(id)_chargePercentFont;
-(id)_updateChargeString:(id)arg1 oldLabel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
@end

