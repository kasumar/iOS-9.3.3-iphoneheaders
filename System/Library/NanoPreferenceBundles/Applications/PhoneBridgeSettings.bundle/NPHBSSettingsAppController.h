/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/PhoneBridgeSettings.bundle/PhoneBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@class NSArray;

@interface NPHBSSettingsAppController : BPSNotificationAppController {

	NSArray* _appGroupSpecifiers;

}
-(id)_incomingCallSoundEnabled:(id)arg1 ;
-(id)_incomingCallVibrationEnabled:(id)arg1 ;
-(void)_setIncomingCallSoundEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_setIncomingCallVibrationEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_setCarrierDirectCallingAllowed:(id)arg1 specifier:(id)arg2 ;
-(id)_carrierDirectCallingAllowed:(id)arg1 ;
-(int)alertType;
-(BOOL)suppressAllMirrorSpecifiers;
-(id)applicationGroupSpecifiers;
-(id)localizedMirroringDetailFooter;
-(id)localizedPaneTitle;
-(id)applicationBundleIdentifier;
@end

