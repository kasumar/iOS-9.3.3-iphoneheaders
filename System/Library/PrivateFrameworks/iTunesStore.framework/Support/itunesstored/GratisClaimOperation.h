/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSNumber, NSString, SSURLRequestProperties, NSDictionary, SSVGratisRequestBody, SSURLConnectionResponse;

@interface GratisClaimOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSNumber* _accountID;
	NSString* _authenticationReasonDescription;
	SSURLRequestProperties* _defaultRequestProperties;
	NSDictionary* _rawOutput;
	SSVGratisRequestBody* _requestBody;
	BOOL _suppressesErrorDialogs;
	SSURLConnectionResponse* _urlResponse;

}

@property (copy) NSString * authenticationReasonDescription; 
@property (assign) BOOL suppressesErrorDialogs; 
@property (readonly) NSDictionary * rawOutput; 
@property (readonly) SSURLConnectionResponse * URLResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)rawOutput;
-(id)_accountID;
-(id)initWithRequestBody:(id)arg1 ;
-(id)_newDefaultRequestProperties;
-(id)_newRetryRequestPropertiesWithURL:(id)arg1 ;
-(BOOL)suppressesErrorDialogs;
-(NSString *)authenticationReasonDescription;
-(void)setAuthenticationReasonDescription:(NSString *)arg1 ;
-(void)setSuppressesErrorDialogs:(BOOL)arg1 ;
-(void)dealloc;
-(void)run;
-(void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2 ;
-(id)initWithPurchase:(id)arg1 ;
-(SSURLConnectionResponse *)URLResponse;
-(id)_authenticationContext;
-(id)_bodyData;
@end

