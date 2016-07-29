/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMCore/IMCore-Structs.h>
@interface IMService : NSObject
+(id)callService;
+(id)facetimeService;
+(id)aimService;
+(id)subnetService;
+(id)jabberService;
+(id)iMessageService;
+(id)smsService;
+(void)forgetStatusImageAppearance;
+(id)imageNameForStatus:(unsigned long long)arg1 ;
+(id)imageURLForStatus:(unsigned long long)arg1 ;
+(id)allServices;
+(id)allServicesNonBlocking;
+(id)serviceWithName:(id)arg1 ;
+(id)myIdleTime;
+(unsigned long long)myStatus;
+(BOOL)isEmailAddress:(id)arg1 inDomains:(id)arg2 ;
+(unsigned long long)statusForIMPerson:(id)arg1 ;
+(unsigned long long)statusForABPerson:(id)arg1 ;
+(id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2 ;
+(id)notificationCenter;
-(char)__ck_displayColor;
-(BOOL)__ck_isSMS;
-(BOOL)__ck_isiMessage;
-(long long)__ck_maxRecipientCount;
-(id)__ck_displayName;
-(id)infoForPerson:(id)arg1 ;
-(id)infoForAllPeople;
-(id)infoForDisplayedPeople;
-(id)name;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedName;
-(id)localizedShortName;
-(unsigned long long)status;
-(void)login;
-(void)logout;
-(BOOL)initialSyncPerformed;
-(id)infoForScreenName:(id)arg1 ;
-(id)infoForAllScreenNames;
-(id)infoForPreferredScreenNames;
-(id)canonicalFormOfID:(id)arg1 ;
-(id)peopleWithScreenName:(id)arg1 ;
-(id)screenNamesForPerson:(id)arg1 ;
-(id)myScreenNames;
@end

