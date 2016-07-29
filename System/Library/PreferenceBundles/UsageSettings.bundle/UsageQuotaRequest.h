/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, ACAccountStore;

@interface UsageQuotaRequest : AARequest {

	ACAccount* _account;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
+(void)addHeadersForPrimaryAccountToRequest:(id)arg1 ;
+(void)addHeadersToRequest:(id)arg1 forAccount:(id)arg2 ;
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 URLString:(id)arg3 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(id)urlRequest;
-(ACAccountStore *)accountStore;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
@end

