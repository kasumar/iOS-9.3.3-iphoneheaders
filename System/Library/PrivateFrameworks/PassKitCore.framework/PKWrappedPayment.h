/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKWrappedPayment : NSObject <NSSecureCoding> {

	NSString* _transactionIdentifier;
	NSData* _transactionData;

}

@property (nonatomic,copy) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSData * transactionData;                      //@synthesize transactionData=_transactionData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setTransactionData:(NSData *)arg1 ;
-(NSData *)transactionData;
-(NSString *)transactionIdentifier;
@end

