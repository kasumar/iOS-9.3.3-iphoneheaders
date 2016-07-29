/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDServerEnvironmentURLRequest : CKDURLRequest {

	long long _environment;

}

@property (assign,nonatomic) long long environment;              //@synthesize environment=_environment - In the implementation block
-(id)url;
-(long long)environment;
-(void)setEnvironment:(long long)arg1 ;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)requiresSignature;
-(BOOL)allowsAnonymousAccount;
-(BOOL)allowsAuthedAccount;
-(long long)serverType;
-(long long)partitionType;
-(BOOL)hasRequestBody;
-(void)requestDidParseJSONObject:(id)arg1 ;
@end

