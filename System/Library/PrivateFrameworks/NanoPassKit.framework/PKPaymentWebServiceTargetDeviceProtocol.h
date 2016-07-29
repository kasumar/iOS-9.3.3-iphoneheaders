/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentWebServiceTargetDeviceProtocol <NSObject>
@optional
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)noteProvisioningDidBegin;
-(void)noteProvisioningDidEnd;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(/*^block*/id)arg3;

@required
-(id)deviceRegion;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
-(void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2;
-(id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
-(id)bridgedClientInfo;
-(void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessary:(/*^block*/id)arg2;
-(BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
-(BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
-(BOOL)supportsAutomaticPassPresentation;
-(void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
-(void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
-(id)deviceDescriptionForPaymentWebService:(id)arg1;
-(void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(id)deviceName;

@end

