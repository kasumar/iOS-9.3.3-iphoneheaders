/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/SCATDefaultVsLongPressController.h>

@class AXSwitch;

@interface SCATSwitchActionTypeController : SCATDefaultVsLongPressController {

	AXSwitch* _storedSwitch;

}

@property (nonatomic,retain) AXSwitch * storedSwitch;              //@synthesize storedSwitch=_storedSwitch - In the implementation block
-(id)actionStringForLongPress:(BOOL)arg1 ;
-(id)controllerForLongPress:(BOOL)arg1 ;
-(void)setStoredSwitch:(AXSwitch *)arg1 ;
-(id)initWithSwitch:(id)arg1 ;
-(AXSwitch *)storedSwitch;
-(void)dealloc;
@end

