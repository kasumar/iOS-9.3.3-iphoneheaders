/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSNumber, NSDictionary, NSURL, NSArray;

@interface PKPaymentRegistrationResponse : PKPaymentWebServiceResponse {

	NSString* _deviceIdentifier;
	NSNumber* _cardsOnFile;
	NSNumber* _maxCards;
	NSString* _primaryRegion;
	NSDictionary* _regions;
	NSURL* _brokerURL;
	NSURL* _trustedServiceManagerURL;
	NSURL* _paymentServicesURL;
	NSArray* _certificates;

}

@property (nonatomic,retain) NSString * deviceIdentifier;                   //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * cardsOnFile;                        //@synthesize cardsOnFile=_cardsOnFile - In the implementation block
@property (nonatomic,retain) NSNumber * maxCards;                           //@synthesize maxCards=_maxCards - In the implementation block
@property (nonatomic,readonly) NSString * primaryRegion;                    //@synthesize primaryRegion=_primaryRegion - In the implementation block
@property (nonatomic,retain) NSDictionary * regions;                        //@synthesize regions=_regions - In the implementation block
@property (nonatomic,retain) NSURL * brokerURL;                             //@synthesize brokerURL=_brokerURL - In the implementation block
@property (nonatomic,retain) NSURL * trustedServiceManagerURL;              //@synthesize trustedServiceManagerURL=_trustedServiceManagerURL - In the implementation block
@property (nonatomic,retain) NSURL * paymentServicesURL;                    //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
@property (nonatomic,retain) NSArray * certificates;                        //@synthesize certificates=_certificates - In the implementation block
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)setRegions:(NSDictionary *)arg1 ;
-(NSDictionary *)regions;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSURL *)trustedServiceManagerURL;
-(void)setBrokerURL:(NSURL *)arg1 ;
-(void)setTrustedServiceManagerURL:(NSURL *)arg1 ;
-(void)setPaymentServicesURL:(NSURL *)arg1 ;
-(NSString *)primaryRegion;
-(NSURL *)brokerURL;
-(NSURL *)paymentServicesURL;
-(NSNumber *)maxCards;
-(void)setCardsOnFile:(NSNumber *)arg1 ;
-(void)setMaxCards:(NSNumber *)arg1 ;
-(NSNumber *)cardsOnFile;
-(NSArray *)certificates;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
@end

