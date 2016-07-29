/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@protocol UITextFieldDelegate;
@class NSString, SKUIGift, UITextView, SKUIGiftRecipientTableViewCell;

@interface SKUIGiftAddressingSection : SKUIGiftTableViewSection {

	double _footerHeight;
	NSString* _footerString;
	SKUIGift* _gift;
	UITextView* _messagingTextView;
	SKUIGiftRecipientTableViewCell* _recipientTableViewCell;
	id<UITextFieldDelegate> _textFieldDelegate;
	double _textViewCellHeight;

}

@property (nonatomic,retain) SKUIGift * gift;                                        //@synthesize gift=_gift - In the implementation block
@property (assign,nonatomic) id<UITextFieldDelegate> textFieldDelegate;              //@synthesize textFieldDelegate=_textFieldDelegate - In the implementation block
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3 ;
-(SKUIGift *)gift;
-(void)setTextFieldDelegate:(id<UITextFieldDelegate>)arg1 ;
-(void)beginEditingMessageForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)endEditingMessageForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithGiftConfiguration:(id)arg1 ;
-(void)setGift:(SKUIGift *)arg1 ;
-(id)_recipientTableViewCell;
-(id)_footerString;
-(id)_textFieldTableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_textViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_attributedPlaceholderWithString:(id)arg1 ;
-(id<UITextFieldDelegate>)textFieldDelegate;
@end

