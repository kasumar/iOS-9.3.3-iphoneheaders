/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMSystemMonitorListener.h>
#import <identityservicesd/IDSAppleEmailInterfaceListener.h>

@class NSMutableDictionary, NSMutableArray, FTMessageDelivery;

@interface IDSAppleIDRegistrationCenter : NSObject <IMSystemMonitorListener, IDSAppleEmailInterfaceListener> {

	NSMutableDictionary* _queues;
	NSMutableArray* _handlers;
	FTMessageDelivery* _messageDelivery;

}
+(id)sharedInstance;
-(void)center:(id)arg1 foundEmail:(id)arg2 vettingToken:(id)arg3 forRegistrationInfo:(id)arg4 ;
-(BOOL)authenticateRegistration:(id)arg1 ;
-(void)cancelActionsForRegistrationInfo:(id)arg1 ;
-(BOOL)authenticateRegistration:(id)arg1 forceNewToken:(BOOL)arg2 ;
-(BOOL)queryInitialInvitationContextForRegistration:(id)arg1 ;
-(BOOL)validateEmail:(id)arg1 forRegistration:(id)arg2 ;
-(BOOL)unlinkHandle:(id)arg1 forRegistration:(id)arg2 ;
-(BOOL)validateRegion:(id)arg1 phoneNumber:(id)arg2 forRegistration:(id)arg3 ;
-(id)_queueForKey:(id)arg1 ;
-(void)_setQueue:(id)arg1 forKey:(id)arg2 ;
-(void)_postUserNotificationWithTitle:(id)arg1 message:(id)arg2 identifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_notifyAuthenticationSuccess:(id)arg1 ;
-(void)_serviceQueueForKey:(id)arg1 ;
-(void)_handleServerResponse:(long long)arg1 registration:(id)arg2 ;
-(void)_notifyAuthenticationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5 ;
-(void)_notifyEmailValidationRequestSuccess:(id)arg1 emailAddress:(id)arg2 ;
-(void)_renewTokenForRegistrationInfo:(id)arg1 ;
-(void)_fetchPasswordForRegistrationInfo:(id)arg1 ;
-(void)_notifyEmailValidationRequestFailure:(id)arg1 emailAddress:(id)arg2 responseCode:(long long)arg3 registrationError:(long long)arg4 error:(id)arg5 info:(id)arg6 ;
-(void)_notifyEmailConfirmationSuccess:(id)arg1 emailAddress:(id)arg2 ;
-(void)_notifyHandleUnlinkSuccess:(id)arg1 handle:(id)arg2 ;
-(void)_notifyHandleUnlinkFailure:(id)arg1 handle:(id)arg2 responseCode:(long long)arg3 registrationError:(long long)arg4 error:(id)arg5 info:(id)arg6 ;
-(BOOL)linkHandle:(id)arg1 vettingToken:(id)arg2 forRegistration:(id)arg3 ;
-(void)_notifyEmailConfirmationFailure:(id)arg1 emailAddress:(id)arg2 responseCode:(long long)arg3 registrationError:(long long)arg4 error:(id)arg5 info:(id)arg6 ;
-(void)_notifyRegionValidationSuccess:(id)arg1 regionID:(id)arg2 phoneNumber:(id)arg3 context:(id)arg4 verified:(BOOL)arg5 ;
-(void)_notifyInitialRegionQuerySuccess:(id)arg1 ;
-(void)_notifyRegionValidationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5 ;
-(BOOL)__reallySendAuthentication:(id)arg1 password:(id)arg2 ;
-(id)_displayStringForIDSRegistrationServiceType:(id)arg1 ;
-(void)_noteSuccessfulToken:(id)arg1 profileID:(id)arg2 selfID:(id)arg3 forRegistrationInfo:(id)arg4 wasFetched:(BOOL)arg5 ;
-(void)_processAuthenticationMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4 ;
-(void)_fetchTokenForRegistrationInfo:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_processValidateHandleRequestMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4 ;
-(BOOL)_registrationNeedsAuthentication:(id)arg1 ;
-(BOOL)_registrationIsAuthenticating:(id)arg1 ;
-(BOOL)_sendAuthenticationRequest:(id)arg1 forceNew:(BOOL)arg2 ;
-(void)_processRegionValidationMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4 ;
-(void)_processDefaultInvitationContextMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4 ;
-(void)_processUnlinkHandleMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4 ;
-(void)_processLinkHandleMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4 ;
-(BOOL)_queryInitialInvitationContextForRegistration:(id)arg1 ;
-(BOOL)_validateRegionID:(id)arg1 phoneNumber:(id)arg2 registration:(id)arg3 ;
-(BOOL)_sendValidationForEmail:(id)arg1 registration:(id)arg2 ;
-(BOOL)_sendConfirmationForEmail:(id)arg1 vettingToken:(id)arg2 registration:(id)arg3 ;
-(BOOL)_sendUnlinkForHandle:(id)arg1 registration:(id)arg2 ;
-(void)_notifyRegistrationRequired:(id)arg1 ;
-(void)_removeMessageForRegistration:(id)arg1 fromQueueForKey:(id)arg2 ;
-(BOOL)_haveQueuedMessageForRegistration:(id)arg1 inQueueForKey:(id)arg2 ;
-(void)_notifyAuthenticating:(id)arg1 ;
-(BOOL)removeEmail:(id)arg1 forRegistration:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

