/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCHacks.h>

@interface MCServerSideHacks : MCHacks
+(void)setAllowHacksToCallExternalComponents:(BOOL)arg1 ;
+(id)sharedHacks;
-(void)recomputeWebContentFilterEffectiveUserSettings:(id)arg1 outEffectiveChangeDetected:(BOOL*)arg2 outMechanismChangedDetected:(BOOL*)arg3 ;
-(void)_checkCarrierBundleRelatedSettings;
-(void)applyGracePeriodSettingFromKeybagToUserSettings;
-(void)resetSettings;
-(void)recomputeAppRulesForNetworkExtension;
-(void)recomputeAppOptionsEffectiveUserSettings:(id)arg1 outEffectiveChangeDetected:(BOOL*)arg2 ;
-(BOOL)applyEffectiveSettings:(id)arg1 toSettings:(id)arg2 withOldRestrictions:(id)arg3 newRestrictions:(id)arg4 ;
-(void)applyEffectiveSettings:(id)arg1 toOtherSubsystemsPasscode:(id)arg2 ;
-(void)recomputeHacksAfterProfileChangesEffectiveUserSettings:(id)arg1 sendNotifications:(BOOL)arg2 ;
-(BOOL)_anyBoolRestrictionChangedInSet:(id)arg1 oldRestrictions:(id)arg2 newRestrictions:(id)arg3 ;
-(void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4 ;
@end

