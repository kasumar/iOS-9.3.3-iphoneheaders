/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>
#import <SpringBoard/SBUIPasscodeLockViewDelegate.h>
#import <SpringBoard/SBWorkspaceAlertAnimationProviding.h>

@protocol SBPasscodeEntryAlertViewControllerDelegate;
@class NSString;

@interface SBPasscodeEntryAlertViewController : SBAlert <SBUIPasscodeLockViewDelegate, SBWorkspaceAlertAnimationProviding> {

	id<SBPasscodeEntryAlertViewControllerDelegate> _delegate;
	BOOL _attemptingUnlock;

}

@property (assign,nonatomic,__weak) id<SBPasscodeEntryAlertViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)managesOwnStatusBarAtActivation;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(BOOL)arg2 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_configurePasscodeView:(id)arg1 ;
-(void)_authenticationCancelled;
-(void)_authenticationSuccess:(id)arg1 fromMesa:(BOOL)arg2 ;
-(BOOL)_attemptUnlock:(id)arg1 ;
-(void)_authenticationFailure:(id)arg1 fromMesa:(BOOL)arg2 ;
-(void)setDelegate:(id<SBPasscodeEntryAlertViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBPasscodeEntryAlertViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)hasTranslucentBackground;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
@end

