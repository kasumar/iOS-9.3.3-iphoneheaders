/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UACornerActionItem.h>

@class SFActivityScanner, UACornerActionManager, NSData, NSDate, NSMutableSet, NSString;

@interface CornerActionBTLEItem : UACornerActionItem {

	SFActivityScanner* _scanner;
	UACornerActionManager* _manager;
	NSData* _advertisementPayload;
	unsigned _optionBits;
	NSDate* _currentUntilDate;
	double _payloadAvailabilityDelay;
	NSMutableSet* _payloadRequestedCompletions;
	NSString* _dynamicIdentifier;

}

@property (copy,readonly) SFActivityScanner * scanner;                      //@synthesize scanner=_scanner - In the implementation block
@property (copy,readonly) UACornerActionManager * manager;                  //@synthesize manager=_manager - In the implementation block
@property (copy,readonly) NSData * BTLEPayloadData; 
@property (copy) NSData * advertisementPayload;                             //@synthesize advertisementPayload=_advertisementPayload - In the implementation block
@property (assign) unsigned optionBits;                                     //@synthesize optionBits=_optionBits - In the implementation block
@property (copy) NSDate * currentUntilDate;                                 //@synthesize currentUntilDate=_currentUntilDate - In the implementation block
@property (assign) double payloadAvailabilityDelay;                         //@synthesize payloadAvailabilityDelay=_payloadAvailabilityDelay - In the implementation block
@property (retain) NSMutableSet * payloadRequestedCompletions;              //@synthesize payloadRequestedCompletions=_payloadRequestedCompletions - In the implementation block
+(id)cornerActionBTLEItemWithSFAdvertisement:(id)arg1 optionBits:(unsigned)arg2 scanner:(id)arg3 manager:(id)arg4 ;
+(BOOL)applicationProxyWillLaunchWithSupportedArchitecture:(id)arg1 ;
+(id)applicationProxyForWebBrowserSupportingContinuation;
+(double)currentAbsoluteTime;
+(BOOL)applicationProxyCanHandleWebBrowserContinuation:(id)arg1 ;
+(id)statusString;
-(unsigned)optionBits;
-(BOOL)updateFromSFAdvertisement:(id)arg1 ;
-(void)requestPayloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSFAdvertisement:(id)arg1 optionBits:(unsigned)arg2 type:(unsigned long long)arg3 activityType:(id)arg4 bundleIdentifier:(id)arg5 teamIDs:(id)arg6 advertisingOptions:(id)arg7 scanner:(id)arg8 manager:(id)arg9 dynamicIdentifier:(id)arg10 ;
-(id)initWithSFAdvertisement:(id)arg1 optionBits:(unsigned)arg2 type:(unsigned long long)arg3 activityType:(id)arg4 bundleIdentifier:(id)arg5 teamIDs:(id)arg6 advertisingOptions:(id)arg7 scanner:(id)arg8 manager:(id)arg9 ;
-(void)setCurrentUntilDate:(NSDate *)arg1 ;
-(NSMutableSet *)payloadRequestedCompletions;
-(void)setPayloadRequestedCompletions:(NSMutableSet *)arg1 ;
-(void)clearPayload;
-(NSDate *)currentUntilDate;
-(double)payloadAvailabilityDelay;
-(void)setPayloadAvailabilityDelay:(double)arg1 ;
-(void)setOptionBits:(unsigned)arg1 ;
-(UACornerActionManager *)manager;
-(id)dynamicIdentifier;
-(void)setDynamicIdentifier:(id)arg1 ;
-(id)statusString;
-(SFActivityScanner *)scanner;
-(NSData *)advertisementPayload;
-(void)setAdvertisementPayload:(NSData *)arg1 ;
-(void)setWhen:(id)arg1 ;
-(id)when;
@end

