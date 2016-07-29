/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentSetupTableViewController.h>

@class PKPaymentWebService, PKTableHeaderView, PKWeakReference, UIImage, PKPass;

@interface PKPassSetupAutomaticPresentationController : PKPaymentSetupTableViewController {

	PKPaymentWebService* _webService;
	unsigned long long _selectedIndex;
	PKTableHeaderView* _headerView;
	PKWeakReference* _setupDelegate;
	UIImage* _passSnapshot;
	PKPass* _pass;
	/*^block*/id _verificationRequestHandler;

}

@property (nonatomic,readonly) PKPass * pass;                                                     //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate; 
@property (nonatomic,copy) id verificationRequestHandler;                                         //@synthesize verificationRequestHandler=_verificationRequestHandler - In the implementation block
+(BOOL)passNeedsAutomaticPresentationSetup:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(PKPass *)pass;
-(id)verificationRequestHandler;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(long long)arg3 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)setVerificationRequestHandler:(id)arg1 ;
-(void)logAggDContextSpecificCheckpointForKey:(id)arg1 ;
-(long long)_paymentPassState;
-(id)_buttonTitleForPaymentPassState:(long long)arg1 ;
-(void)_dismissView;
-(void)_saveSettings;
-(void)_showVerificationMethodsForPass:(id)arg1 ;
-(void)_showAddToWatchOfferForPass:(id)arg1 ;
-(id)_contextSpecificStringForAggDKey:(id)arg1 ;
@end

