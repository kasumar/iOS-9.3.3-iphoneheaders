/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentWebServiceDelegate.h>

@class NSMutableSet, NSTimer, NSMutableArray, NSString, PKPaymentRequirementsResponse, PKPaymentEligibilityResponse, PKPaymentPass, PKPaymentWebService, NSArray;

@interface PKPaymentProvisioningController : NSObject <PKPaymentWebServiceDelegate> {

	NSMutableSet* _tasks;
	NSTimer* _descriptionTimer;
	NSMutableArray* _associatedCredentials;
	BOOL _provisioningUserInterfaceIsVisible;
	NSString* _productIdentifier;
	long long _state;
	PKPaymentRequirementsResponse* _requirementsResponse;
	PKPaymentEligibilityResponse* _eligibilityResponse;
	PKPaymentPass* _provisionedPass;
	PKPaymentWebService* _webService;
	NSString* _localizedProgressDescription;

}

@property (assign,nonatomic) long long state;                                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) PKPaymentRequirementsResponse * requirementsResponse;              //@synthesize requirementsResponse=_requirementsResponse - In the implementation block
@property (nonatomic,readonly) PKPaymentEligibilityResponse * eligibilityResponse;                //@synthesize eligibilityResponse=_eligibilityResponse - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * provisionedPass;                                   //@synthesize provisionedPass=_provisionedPass - In the implementation block
@property (nonatomic,retain,readonly) PKPaymentWebService * webService;                           //@synthesize webService=_webService - In the implementation block
@property (nonatomic,copy,readonly) NSArray * associatedCredentials;                              //@synthesize associatedCredentials=_associatedCredentials - In the implementation block
@property (nonatomic,copy,readonly) NSString * productIdentifier;                                 //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedProgressDescription;                      //@synthesize localizedProgressDescription=_localizedProgressDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(id)initWithWebService:(id)arg1 ;
-(PKPaymentWebService *)webService;
-(void)associateCredentials:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(PKPaymentRequirementsResponse *)requirementsResponse;
-(void)requestRequirements:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestEligibility:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(PKPaymentEligibilityResponse *)eligibilityResponse;
-(void)acceptTerms;
-(void)requestProvisioning:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(PKPaymentPass *)provisionedPass;
-(NSString *)productIdentifier;
-(void)associateCredential:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)alertForDisplayableError:(id)arg1 ;
-(void)validatePreconditionsRegisterAndAssociateRemoteCredentials:(/*^block*/id)arg1 ;
-(void)resolveAmbiguousRequirementsWithProductIdentifier:(id)arg1 ;
-(void)resolveRequirementsUsingProduct:(id)arg1 ;
-(long long)_defaultResetState;
-(void)_setState:(long long)arg1 notify:(BOOL)arg2 ;
-(void)_validatePreconditionsWhileRetrievingRemoteCredentials:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)displayableErrorForError:(id)arg1 ;
-(void)_registerWhileRetrievingRemoteCredentials:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)retrieveRemoteCredentials:(/*^block*/id)arg1 ;
-(void)_queryEligibilityForCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queryRequirementsForCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestRequirements:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_setLocalizedProgressDescription:(id)arg1 ;
-(void)_requestEligibility:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_passAlreadyProvisioned;
-(void)_requestProvisioning:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleProvisioningError:(id)arg1 forRequest:(id)arg2 ;
-(id)_displayableErrorOverrideForUnderlyingError:(id)arg1 ;
-(id)alertForDisplayableError:(id)arg1 earlyExitHandler:(/*^block*/id)arg2 ;
-(void)_updateLocalizedProgressAndInvalidateTimer;
-(void)paymentWebService:(id)arg1 didQueueTSMConnectionForTaskID:(unsigned long long)arg2 ;
-(void)paymentWebService:(id)arg1 didCompleteTSMConnectionForTaskID:(unsigned long long)arg2 ;
-(void)validatePreconditionsAndRegister:(/*^block*/id)arg1 ;
-(BOOL)provisioningUserInterfaceIsVisible;
-(id)displayableErrorForProvisioningError:(id)arg1 ;
-(NSArray *)associatedCredentials;
-(NSString *)localizedProgressDescription;
@end

