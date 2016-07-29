/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSAuthenticationContext, SSAuthenticateResponse, NSString, NSData;

@interface AuthenticateOperation : ISOperation {

	SSAuthenticationContext* _authenticationContext;
	SSAuthenticateResponse* _authenticateResponse;
	NSString* _clientIdentifier;
	NSData* _secondaryToken;

}

@property (readonly) SSAuthenticationContext * authenticationContext; 
@property (copy) NSString * clientIdentifier; 
@property (readonly) SSAuthenticateResponse * authenticateResponse; 
+(BOOL)shouldOfferRetryForError:(id)arg1 ;
-(SSAuthenticateResponse *)authenticateResponse;
-(BOOL)_runAuthenticationAttempts:(id*)arg1 ;
-(void)_setAuthenticateResponseWithAccount:(id)arg1 type:(long long)arg2 ;
-(void)_setAuthenticateResponseWithAccount:(id)arg1 authenticationResponse:(id)arg2 ;
-(BOOL)_addAccountForAttempt:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldRetryAfterOperationFailed:(id)arg1 didCancel:(BOOL*)arg2 ;
-(void)_showDialogForFailedOperation:(id)arg1 error:(id)arg2 ;
-(void)_setAuthenticateResponseWithFailedAttempt:(id)arg1 didCancel:(BOOL)arg2 ;
-(void)_setAuthenticateResponse:(id)arg1 ;
-(BOOL)_shouldRetryForError:(id)arg1 didCancel:(BOOL*)arg2 ;
-(BOOL)_shouldRetryForServerResponse:(id)arg1 didCancel:(BOOL*)arg2 ;
-(BOOL)_promptForRetryWithTitle:(id)arg1 message:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)_account;
-(id)uniqueKey;
-(SSAuthenticationContext *)authenticationContext;
-(id)authenticatedAccountDSID;
-(NSString *)clientIdentifier;
-(id)initWithAuthenticationContext:(id)arg1 ;
@end
