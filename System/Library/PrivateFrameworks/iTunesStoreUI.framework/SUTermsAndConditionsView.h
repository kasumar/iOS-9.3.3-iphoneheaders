/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIAlertView, SUSubtitledButton, SUClientInterface, SULinkControl;

@interface SUTermsAndConditionsView : UIView {

	UIAlertView* _accountButtonAlert;
	SUSubtitledButton* _button;
	SUClientInterface* _clientInterface;
	BOOL _hideAccountButton;
	double _rightMargin;
	long long _style;
	SULinkControl* _termsAndConditionsControl;
	SUClientInterface* clientInterface;

}

@property (nonatomic,retain) SUClientInterface * clientInterface; 
@property (assign,nonatomic) BOOL hideAccountButton;                           //@synthesize hideAccountButton=_hideAccountButton - In the implementation block
@property (assign,nonatomic) double rightMargin;                               //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign,nonatomic) long long style;                                  //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)sizeToFit;
-(void)setRightMargin:(double)arg1 ;
-(id)_button;
-(double)rightMargin;
-(void)setHideAccountButton:(BOOL)arg1 ;
-(void)_accountsChangedNotification:(id)arg1 ;
-(void)_destroyButton;
-(long long)_linkStyleForStyle:(long long)arg1 ;
-(double)_buttonHeightForStyle:(long long)arg1 ;
-(id)_termsAndConditionsControl;
-(void)_clearButtonSelection:(id)arg1 ;
-(void)_termsAndConditionsAction:(id)arg1 ;
-(BOOL)hideAccountButton;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(SUClientInterface *)clientInterface;
-(void)_buttonAction:(id)arg1 ;
-(void)_updateButton;
@end

