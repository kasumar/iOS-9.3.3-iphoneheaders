/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSArray;

@interface IMDAccountController : NSObject {

	NSMutableDictionary* _accounts;
	NSMutableDictionary* _activeAccounts;
	BOOL _isLoading;
	BOOL _isFirstLoad;

}

@property (nonatomic,readonly) NSDictionary * loadOldStatusStore; 
@property (nonatomic,readonly) BOOL isLoading;                                 //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,readonly) NSArray * accounts; 
@property (nonatomic,readonly) NSArray * activeAccounts; 
@property (nonatomic,readonly) NSArray * connectedAccounts; 
@property (nonatomic,readonly) NSArray * connectingAccounts; 
@property (nonatomic,readonly) NSArray * activeSessions; 
+(id)sharedInstance;
+(id)sharedAccountController;
-(NSDictionary *)loadOldStatusStore;
-(id)_superFormatFromAIML:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isLoading;
-(void)load;
-(NSArray *)activeAccounts;
-(id)activeAccountsForService:(id)arg1 ;
-(id)connectedAccountsForService:(id)arg1 ;
-(NSArray *)connectedAccounts;
-(void)activateAccounts:(id)arg1 ;
-(void)deactivateAccounts:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(void)deactivateAccount:(id)arg1 ;
-(void)activateAccount:(id)arg1 ;
-(NSArray *)accounts;
-(void)addAccount:(id)arg1 ;
-(void)save;
-(id)accountsForService:(id)arg1 ;
-(BOOL)isAccountActive:(id)arg1 ;
-(void)_daemonWillShutdown:(id)arg1 ;
-(id)accountForAccountID:(id)arg1 ;
-(void)_checkPowerAssertion;
-(void)deactivateAccounts:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)_isAccountActive:(id)arg1 forService:(id)arg2 ;
-(void)deactivateAccount:(id)arg1 force:(BOOL)arg2 ;
-(void)deferredSave;
-(void)setupAccount:(id)arg1 ;
-(id)accountsForLoginID:(id)arg1 onService:(id)arg2 ;
-(NSArray *)connectingAccounts;
-(id)connectingAccountsForService:(id)arg1 ;
-(id)accountForIDSAccountUniqueID:(id)arg1 ;
-(NSArray *)activeSessions;
-(id)sessionForAccount:(id)arg1 ;
-(id)anySessionForServiceName:(id)arg1 ;
@end

