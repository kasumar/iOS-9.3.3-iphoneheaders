/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, IMTimer;

@interface IDSAppleRegistrationKeychainReader : NSObject {

	NSMutableArray* _registrationData;
	IMTimer* _purgeTimer;
	/*^block*/id _purgeCancelBlock;
	/*^block*/id _purgeEnqueueBlock;

}
+(id)sharedInstance;
+(id)keychainServiceForVersion:(unsigned long long)arg1 ;
+(id)keychainAccountForVersion:(unsigned long long)arg1 ;
+(id)keychainAccessGroupForVersion:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_reloadFromKeychainLocked;
-(void)_setPurgeTimer;
-(void)_reloadFromDictionaryLocked:(id)arg1 ;
-(id)registrationData;
-(id)registrationWithServiceType:(id)arg1 accountType:(int)arg2 value:(id)arg3 ;
-(void)_flush;
-(void)flushCache;
@end

