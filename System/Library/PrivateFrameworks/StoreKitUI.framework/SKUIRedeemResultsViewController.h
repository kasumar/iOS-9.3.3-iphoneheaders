/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIRedeemStepViewController.h>
#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>
#import <libobjc.A.dylib/SKUIRedeemResultsViewDelegate.h>

@class UIButton, SKUITextLayout, SKUITextBoxView, UIImageView, UIImage, SKUIItemStateCenter, SKUIGiftItemView, SKUIRedeemResultMessageView, NSOperationQueue, SKUIRedeemITunesPassLockup, SKUIRedeem, NSString;

@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController <SKUIItemStateCenterObserver, SKUIRedeemResultsViewDelegate> {

	UIButton* _anotherButton;
	BOOL _extendedMessageIsExpanded;
	SKUITextLayout* _extendedMessageTextLayout;
	SKUITextBoxView* _extendedMessageView;
	UIImageView* _headerImageView;
	UIImage* _itemImage;
	SKUIItemStateCenter* _itemStateCenter;
	SKUIGiftItemView* _itemView;
	SKUIRedeemResultMessageView* _messageView;
	NSOperationQueue* _operationQueue;
	SKUIRedeemITunesPassLockup* _passbookLockup;
	SKUIRedeem* _redeem;
	long long _redeemCategory;

}

@property (nonatomic,readonly) SKUIRedeem * redeem;                 //@synthesize redeem=_redeem - In the implementation block
@property (assign,nonatomic) long long redeemCategory;              //@synthesize redeemCategory=_redeemCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(id)_item;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2 ;
-(void)_reloadSections;
-(id)_itemView;
-(void)_setHeaderImage:(id)arg1 ;
-(id)initWithRedeem:(id)arg1 ;
-(void)setRedeemCategory:(long long)arg1 ;
-(void)_setItemImage:(id)arg1 ;
-(void)_reloadResultViewMessage;
-(void)_redeemAnotherAction:(id)arg1 ;
-(double)_tableWidth;
-(void)_extendedMessageAction:(id)arg1 ;
-(void)_openAction:(id)arg1 ;
-(void)_passbookLockupAction:(id)arg1 ;
-(id)_emptySection;
-(id)_resultImageViewSection;
-(id)_itemViewSection;
-(id)_messageViewSection;
-(id)_anotherButtonSection;
-(id)_passbookLearnMoreSection;
-(id)_headerImageViewSection;
-(id)_extendedMessageViewSection;
-(id)_linksSection;
-(void)redeemResultsView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)redeemCategory;
-(SKUIRedeem *)redeem;
-(void)_doneAction:(id)arg1 ;
@end

