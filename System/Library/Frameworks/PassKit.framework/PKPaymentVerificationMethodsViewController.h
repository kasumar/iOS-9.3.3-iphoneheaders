/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentSetupTableViewController.h>

@class PKPaymentPass, PKPaymentWebService, PKWeakReference, PKTableHeaderView, UIActivityIndicatorView, NSArray, UIImage;

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupTableViewController {

	PKPaymentPass* _pass;
	PKPaymentWebService* _paymentWebService;
	PKWeakReference* _setupDelegate;
	PKTableHeaderView* _tableHeader;
	UIActivityIndicatorView* _activityIndicator;
	NSArray* _verificationChannels;
	unsigned long long _selectedIndex;
	BOOL _existingVerificationMethod;
	BOOL _loadingChannels;
	UIImage* _passSnapshot;
	/*^block*/id _verificationRequestHandler;

}

@property (nonatomic,retain) UIImage * passSnapshot;                                              //@synthesize passSnapshot=_passSnapshot - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate; 
@property (nonatomic,copy) id verificationRequestHandler;                                         //@synthesize verificationRequestHandler=_verificationRequestHandler - In the implementation block
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)send:(id)arg1 ;
-(void)_showRequestError:(id)arg1 ;
-(id)_detailTextLabelForChannel:(id)arg1 ;
-(void)_terminateFlow;
-(void)_disableCells;
-(id)verificationRequestHandler;
-(void)_enableCells;
-(void)_showSendCodeError:(id)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(long long)arg3 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(UIImage *)passSnapshot;
-(void)setPassSnapshot:(UIImage *)arg1 ;
-(void)setVerificationRequestHandler:(id)arg1 ;
@end

