/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <Accounts/Accounts-Structs.h>
@class NSObject;

@interface ACSystemConfigManager : NSObject {

	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_source> _timerSource;
	NSObject*<OS_dispatch_queue> _preferencesQueue;
	SCPreferencesRef _preferencesSession;
	int _applySkipCount;

}
+(unsigned long long)_timeoutInterval;
+(id)_livingInstance;
+(id)sharedInstance;
-(void)_createSCPreferencesSession;
-(void)_destroySCPreferencesSession;
-(void)_handleSCPreferencesSessionNotification:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setAccountsWithAccountTypeIdentifier:(id)arg1 exist:(BOOL)arg2 ;
-(void)setCountOfAccounts:(long long)arg1 withAccountTypeIdentifier:(id)arg2 ;
-(void)_keepAlive;
-(void*)_getValueForKey:(id)arg1 ;
-(void)_tearDown;
-(long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(int)accountsWithAccountTypeIdentifierExist:(id)arg1 ;
-(void)_setValue:(void*)arg1 forKey:(id)arg2 ;
@end

