/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentOverlayableRequest.h>

@class PKPaymentCredential, NSString, NSData;

@interface PKPaymentEligibilityRequest : PKPaymentOverlayableRequest {

	PKPaymentCredential* _paymentCredential;
	NSString* _productIdentifier;
	long long _panInputMethod;
	NSString* _issuerIdentifier;
	NSString* _hostApplicationIdentifier;
	NSString* _hostApplicationVersion;
	NSData* _FPInfo;
	NSString* _encryptionVersion;
	NSString* _cardholderName;
	NSString* _primaryAccountNumber;
	NSString* _expiration;
	NSData* _encryptedCardData;
	NSData* _publicKeyHash;
	NSData* _ephemeralPublicKey;
	NSData* _wrappedKey;
	long long _source;

}

@property (nonatomic,retain) PKPaymentCredential * paymentCredential;                         //@synthesize paymentCredential=_paymentCredential - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,setter=setPANInputMethod:,nonatomic) long long panInputMethod;              //@synthesize panInputMethod=_panInputMethod - In the implementation block
@property (nonatomic,copy) NSString * issuerIdentifier;                                       //@synthesize issuerIdentifier=_issuerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationIdentifier;                              //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationVersion;                                 //@synthesize hostApplicationVersion=_hostApplicationVersion - In the implementation block
@property (nonatomic,copy) NSData * FPInfo;                                                   //@synthesize FPInfo=_FPInfo - In the implementation block
@property (nonatomic,copy) NSString * encryptionVersion;                                      //@synthesize encryptionVersion=_encryptionVersion - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                                         //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountNumber;                                   //@synthesize primaryAccountNumber=_primaryAccountNumber - In the implementation block
@property (nonatomic,copy) NSString * expiration;                                             //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSData * encryptedCardData;                                        //@synthesize encryptedCardData=_encryptedCardData - In the implementation block
@property (nonatomic,copy) NSData * publicKeyHash;                                            //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy) NSData * ephemeralPublicKey;                                       //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,copy) NSData * wrappedKey;                                               //@synthesize wrappedKey=_wrappedKey - In the implementation block
@property (nonatomic,readonly) long long source;                                              //@synthesize source=_source - In the implementation block
-(void)dealloc;
-(id)init;
-(long long)source;
-(id)initWithSource:(long long)arg1 ;
-(NSString *)hostApplicationIdentifier;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5 ;
-(NSString *)primaryAccountNumber;
-(long long)panInputMethod;
-(PKPaymentCredential *)paymentCredential;
-(void)setPaymentCredential:(PKPaymentCredential *)arg1 ;
-(NSString *)productIdentifier;
-(id)initWithPaymentCredential:(id)arg1 ;
-(NSString *)issuerIdentifier;
-(NSData *)encryptedCardData;
-(NSString *)cardholderName;
-(void)setCardholderName:(NSString *)arg1 ;
-(NSData *)ephemeralPublicKey;
-(void)setEphemeralPublicKey:(NSData *)arg1 ;
-(NSData *)wrappedKey;
-(void)setWrappedKey:(NSData *)arg1 ;
-(NSString *)encryptionVersion;
-(void)setEncryptionVersion:(NSString *)arg1 ;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(void)setIssuerIdentifier:(NSString *)arg1 ;
-(NSString *)hostApplicationVersion;
-(void)setHostApplicationVersion:(NSString *)arg1 ;
-(NSData *)FPInfo;
-(void)setFPInfo:(NSData *)arg1 ;
-(void)setEncryptedCardData:(NSData *)arg1 ;
-(void)setPrimaryAccountNumber:(NSString *)arg1 ;
-(void)setPANInputMethod:(long long)arg1 ;
-(void)setExpiration:(NSString *)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)expiration;
@end

