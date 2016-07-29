/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKNavigationController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@protocol PKPaymentSetupDelegate;
@class PKPaymentProvisioningController, NSString;

@interface PKPaymentSetupNavigationController : PKNavigationController <PKPaymentSetupViewControllerDelegate> {

	long long _context;
	BOOL _showsWelcomeViewController;
	BOOL _allowsManualEntry;
	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupDelegate> _setupDelegate;

}

@property (nonatomic,retain,readonly) PKPaymentProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupDelegate> setupDelegate;                                       //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsWelcomeViewController;                                                //@synthesize showsWelcomeViewController=_showsWelcomeViewController - In the implementation block
@property (assign,nonatomic) BOOL allowsManualEntry;                                                         //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerForPresentingPaymentError:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)cancel:(id)arg1 ;
-(PKPaymentProvisioningController *)provisioningController;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewController:(id)arg1 didShowProvisioningError:(id)arg2 ;
-(void)viewControllerDidShowEligibilityIssue:(id)arg1 ;
-(id<PKPaymentSetupDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupDelegate>)arg1 ;
-(void)setShowsWelcomeViewController:(BOOL)arg1 ;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 ;
-(BOOL)allowsManualEntry;
-(void)_handleAssociatedCredentialsDidChangeNotification:(id)arg1 ;
-(void)_reconfigureRootViewController;
-(BOOL)showsWelcomeViewController;
@end

