/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFLoyaltyAndPaymentSessionDelegate <NSObject>
@optional
-(void)loyaltyAndPaymentSession:(id)arg1 didDetectField:(BOOL)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didDetectTechnology:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didSelectApplet:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didReceiveButtonPressForApplet:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didStartTransaction:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2;
-(void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;
-(void)loyaltyAndPaymentSession:(id)arg1 didSelectValueAddedService:(BOOL)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;

@end

