/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PKPaymentSetupPrivacyFooterViewDelegate;
@class UITextView, UIColor, NSString;

@interface PKPaymentSetupPrivacyFooterView : UIView <UITextViewDelegate> {

	long long _context;
	UITextView* _messageView;
	id<PKPaymentSetupPrivacyFooterViewDelegate> _delegate;
	UIColor* _messageColor;
	UIColor* _linkColor;

}

@property (assign,nonatomic) id<PKPaymentSetupPrivacyFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIColor * messageColor;                                              //@synthesize messageColor=_messageColor - In the implementation block
@property (nonatomic,copy) UIColor * linkColor;                                                 //@synthesize linkColor=_linkColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PKPaymentSetupPrivacyFooterViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PKPaymentSetupPrivacyFooterViewDelegate>)delegate;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(id)_textAttributes;
-(void)setMessageColor:(UIColor *)arg1 ;
-(void)setLinkColor:(UIColor *)arg1 ;
-(id)_linkTextAttributes;
-(id)_defaultMessageColor;
-(id)_defaultLinkColor;
-(void)_loadMessageView;
-(void)_loadMessageViewIfNecessary;
-(UIColor *)messageColor;
-(UIColor *)linkColor;
@end

