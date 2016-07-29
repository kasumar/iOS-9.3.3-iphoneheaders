/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload {

	NSData* _pemData;

}

@property (nonatomic,retain,readonly) NSData * pemData;              //@synthesize pemData=_pemData - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(SecCertificateRef)copyCertificate;
-(SecIdentityRef)copyIdentityFromKeychain;
-(BOOL)isIdentity;
-(NSData *)pemData;
-(id)description;
@end

