/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/DAEAS-Structs.h>
#import <DAEAS/ASTask.h>

@class NSString, NSMutableDictionary, NSError;

@interface ASAutodiscoverTask : ASTask {

	NSString* _serverURL;
	NSString* _emailAddress;
	NSString* _redirectEmail;
	NSString* _authUsername;
	NSMutableDictionary* _accountInfo;
	NSError* _discoveryError;

}
-(id)contentType;
-(id)requestBody;
-(BOOL)processContext:(id)arg1 ;
-(void)_handleErrorNode:(xmlNode*)arg1 ;
-(void)_handleServerNode:(xmlNode*)arg1 ;
-(void)_handleActionNode:(xmlNode*)arg1 ;
-(void)_handleUserNode:(xmlNode*)arg1 ;
-(void)_setAccountInfoFromAutoDiscoveryXML:(id)arg1 ;
-(void)didProcessContext:(id)arg1 ;
-(id)initWithURL:(id)arg1 emailAddress:(id)arg2 authUsername:(id)arg3 ;
-(id)_url;
-(id)_easVersion;
-(id)_policyKey;
-(id)_HTTPMethodForRequest:(id)arg1 ;
-(BOOL)_shouldSendAuthForRequest:(id)arg1 ;
-(void)_addAuthToRequest:(id)arg1 ;
-(BOOL)_shouldRedirectToHTTPForRequest:(id)arg1 ;
-(id)localizedErrorStringForCertificateErrorCode:(int)arg1 host:(id)arg2 ;
-(BOOL)shouldHandlePasswordErrors;
-(BOOL)shouldStallAfterConnectionLost;
-(BOOL)requiresEASVersionInformaton;
-(BOOL)shouldLogIncomingData;
-(double)timeoutInterval;
-(void)finishWithError:(id)arg1 ;
@end

