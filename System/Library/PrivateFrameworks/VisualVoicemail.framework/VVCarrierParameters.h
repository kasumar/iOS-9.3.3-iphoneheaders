/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VVCarrierParameters : NSObject {

	NSDictionary* _parameterValues;

}
+(id)retryIntervals;
+(id)carrierServiceName;
+(BOOL)supportsGreetingChanges;
+(BOOL)supportsPasswordChanges;
+(BOOL)ignoresRoamingSwitch;
+(id)messageNotificationFallbackTimeout;
+(BOOL)supportsDetachedStorage;
-(id)parameterValueForKey:(id)arg1 ;
-(void)_initForBundle:(id)arg1 ;
-(id)initForServiceBundleId:(id)arg1 ;
-(id)initForService:(id)arg1 ;
@end

