/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <AppleAccountSettings/AAUIFamilyInvitationAcceptanceDelegate.h>
#import <AppleAccountSettings/AAUIArrowControlsViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol AAUIInviteViewProtocol, AAUIFamilyInvitationsViewControllerDelegate;
@class AAGrandSlamSigner, ACAccount, ACAccountStore, NSMutableArray, UIView, UIToolbar, UIScrollView, UIBarButtonItem, AAUIArrowControlsView, NSOperationQueue, UIAlertView, NSString;

@interface AAUIFamilyInvitationsViewController : PSListController <AAUIFamilyInvitationAcceptanceDelegate, AAUIArrowControlsViewDelegate, UIAlertViewDelegate> {

	AAGrandSlamSigner* _grandSlamSigner;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	NSMutableArray* _invites;
	UIView* _masterView;
	UIToolbar* _toolbar;
	UIScrollView* _scrollView;
	UIView*<AAUIInviteViewProtocol> _inviteContenView;
	UIBarButtonItem* _acceptButton;
	UIBarButtonItem* _declineButton;
	UIBarButtonItem* _spinner;
	AAUIArrowControlsView* _arrowControlsView;
	NSOperationQueue* _networkingQueue;
	UIAlertView* _invalidInviteAlert;
	/*^block*/id _invalidInviteAlertCompletion;
	BOOL _isDeclining;
	BOOL _isAccepting;
	BOOL _shouldHideLocationSharing;
	id<AAUIFamilyInvitationsViewControllerDelegate> _delegate;
	unsigned long long _activeInviteIndex;

}

@property (assign,nonatomic,__weak) id<AAUIFamilyInvitationsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long activeInviteIndex;                                         //@synthesize activeInviteIndex=_activeInviteIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPresentAsModalSheet;
-(void)_showConnectionErrorAlert;
-(id)_toolbarItemsForDecliningState;
-(id)_toolbarItemsForAcceptingState;
-(void)_didProcessActiveInvite;
-(void)setActiveInviteIndex:(unsigned long long)arg1 ;
-(id)_inviteRequestForType:(long long)arg1 invite:(id)arg2 ;
-(void)_startInvitationAcceptanceFlow;
-(id)_arrowControlsView;
-(void)_declineButtonWasTapped:(id)arg1 ;
-(void)_refreshContentInviteView;
-(void)_refreshToolbar;
-(void)_refreshNavigationBar;
-(void)_acceptButtonWasTapped:(id)arg1 ;
-(id)_toolbarItemsForDefaultState;
-(unsigned long long)activeInviteIndex;
-(void)_executeInviteRequestWithType:(long long)arg1 invite:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setInviteRequestRunning:(BOOL)arg1 withType:(long long)arg2 ;
-(id)_inviteRequestErrorTitleKeyForRequestType:(long long)arg1 ;
-(id)_inviteRequestErrorMessageKeyForRequestType:(long long)arg1 ;
-(void)_showInvalidInviteErrorAlertWithTitle:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)arrowControlsView:(id)arg1 didTapUpButton:(id)arg2 ;
-(void)arrowControlsView:(id)arg1 didTapDownButton:(id)arg2 ;
-(id)initWithInvites:(id)arg1 grandSlamSigner:(id)arg2 ;
-(void)setDelegate:(id<AAUIFamilyInvitationsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<AAUIFamilyInvitationsViewControllerDelegate>)delegate;
-(id)title;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)familyInvitationAcceptanceViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
-(id)specifiers;
@end

