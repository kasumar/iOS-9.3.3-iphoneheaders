/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationsUI/NotificationsUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/NCInteractiveNotificationHost.h>

@protocol NCInteractiveNotificationHostDelegate, NCNotificationActionTextInputDelegate;
@class NCViewServiceDescriptor, NSString, _UITextFieldRoundedRectBackgroundViewNeue, UITextView, UIButton;

@interface NCNotificationActionTextInputViewController : UIViewController <UITextViewDelegate, NCInteractiveNotificationHost> {

	BOOL _modal;
	double _maximumHeight;
	id<NCInteractiveNotificationHostDelegate> _delegate;
	NSString* _buttonTitle;
	NSString* _actionIdentifier;
	id<NCNotificationActionTextInputDelegate> _textInputDelegate;
	_UITextFieldRoundedRectBackgroundViewNeue* _coverView;
	UITextView* _textEntryView;
	UIButton* _sendButton;

}

@property (assign,nonatomic) id<NCNotificationActionTextInputDelegate> textInputDelegate;              //@synthesize textInputDelegate=_textInputDelegate - In the implementation block
@property (nonatomic,retain) NSString * buttonTitle;                                                   //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,retain) NSString * actionIdentifier;                                              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,retain) _UITextFieldRoundedRectBackgroundViewNeue * coverView;                    //@synthesize coverView=_coverView - In the implementation block
@property (nonatomic,retain) UITextView * textEntryView;                                               //@synthesize textEntryView=_textEntryView - In the implementation block
@property (nonatomic,retain) UIButton * sendButton;                                                    //@synthesize sendButton=_sendButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<NCInteractiveNotificationHostDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL showsKeyboard; 
@property (nonatomic,readonly) double bottomOverhangHeight; 
@property (assign,getter=isModal,nonatomic) BOOL modal;                                                //@synthesize modal=_modal - In the implementation block
@property (assign,nonatomic) double maximumHeight;                                                     //@synthesize maximumHeight=_maximumHeight - In the implementation block
@property (nonatomic,retain,readonly) NCViewServiceDescriptor * inlayViewService; 
@property (nonatomic,retain,readonly) NCViewServiceDescriptor * accessoryViewService; 
-(void)setDelegate:(id<NCInteractiveNotificationHostDelegate>)arg1 ;
-(void)dealloc;
-(id<NCInteractiveNotificationHostDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)showsKeyboard;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(double)preferredContentHeight;
-(double)bottomOverhangHeight;
-(NCViewServiceDescriptor *)inlayViewService;
-(NCViewServiceDescriptor *)accessoryViewService;
-(void)interactiveNotificationDidAppear;
-(void)didChangeRevealPercent:(double)arg1 ;
-(void)handleActionIdentifier:(id)arg1 ;
-(void)willPresentFromActionIdentifier:(id)arg1 ;
-(void)_sendButtonTouchUpInside:(id)arg1 ;
-(void)_updateForTextChanged;
-(void)getActionContextWithCompletion:(/*^block*/id)arg1 ;
-(id<NCNotificationActionTextInputDelegate>)textInputDelegate;
-(void)setTextInputDelegate:(id<NCNotificationActionTextInputDelegate>)arg1 ;
-(BOOL)isModal;
-(void)setTextEntryView:(UITextView *)arg1 ;
-(void)setModal:(BOOL)arg1 ;
-(NSString *)actionIdentifier;
-(void)setMaximumHeight:(double)arg1 ;
-(double)maximumHeight;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(UITextView *)textEntryView;
-(UIButton *)sendButton;
-(_UITextFieldRoundedRectBackgroundViewNeue *)coverView;
-(void)setSendButton:(UIButton *)arg1 ;
-(void)setCoverView:(_UITextFieldRoundedRectBackgroundViewNeue *)arg1 ;
-(void)handleActionAtIndex:(long long)arg1 ;
@end

