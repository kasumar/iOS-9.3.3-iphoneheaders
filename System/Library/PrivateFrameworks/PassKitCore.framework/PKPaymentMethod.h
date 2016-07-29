/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKPaymentPass;

@interface PKPaymentMethod : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSString* _network;
	unsigned long long _type;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,copy) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * network;                       //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) PKPaymentPass * paymentPass;              //@synthesize paymentPass=_paymentPass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)network;
-(void)setNetwork:(NSString *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(id)initWithPaymentPass:(id)arg1 obfuscateNetworks:(BOOL)arg2 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
@end

