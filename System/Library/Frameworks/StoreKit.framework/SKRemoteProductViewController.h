/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientProductPageViewController.h>

@class SKStoreProductViewController, NSString;

@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController> {

	SKStoreProductViewController* _productViewController;

}

@property (assign,nonatomic,__weak) SKStoreProductViewController * productViewController;              //@synthesize productViewController=_productViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setStatusBarHidden:(id)arg1 withAnimation:(id)arg2 ;
-(void)setStatusBarStyle:(id)arg1 animated:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)didFinish;
-(void)setProductViewController:(SKStoreProductViewController *)arg1 ;
-(void)didFinishWithResult:(id)arg1 ;
-(void)didReceiveTitle:(id)arg1 ;
-(void)loadDidFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)presentPageWithRequest:(id)arg1 animated:(id)arg2 ;
-(void)promptForStarRating;
-(SKStoreProductViewController *)productViewController;
@end

