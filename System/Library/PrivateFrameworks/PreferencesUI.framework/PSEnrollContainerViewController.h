/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <UIKit/UIViewController.h>

@class BiometricKitUIEnrollViewController;

@interface PSEnrollContainerViewController : UIViewController {

	BiometricKitUIEnrollViewController* _enrollController;

}

@property (nonatomic,retain) BiometricKitUIEnrollViewController * enrollController;              //@synthesize enrollController=_enrollController - In the implementation block
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BiometricKitUIEnrollViewController *)enrollController;
-(CGRect)frameForEnrollmentController;
-(void)setEnrollController:(BiometricKitUIEnrollViewController *)arg1 ;
-(void)teardown;
@end

