/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSAccount;

@interface LogoutOperation : ISOperation {

	SSAccount* _account;

}

@property (readonly) SSAccount * account; 
-(void)_disableAutomaticDownloadKinds;
-(void)_disableBookkeeper;
-(void)_sendLogoutRequest;
-(id)_sbsyncData;
-(void)run;
-(id)_copyAuthenticationContext;
-(id)initWithAccount:(id)arg1 ;
-(SSAccount *)account;
@end

