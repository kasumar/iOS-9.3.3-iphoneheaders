/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class UIButton, UIImage, SKUIGiftItemView;

@interface SKUIGiftResultViewController : SKUIGiftStepViewController {

	UIButton* _giftAgainButton;
	UIImage* _itemImage;
	SKUIGiftItemView* _itemView;

}
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(id)_itemView;
-(void)_setItemImage:(id)arg1 error:(id)arg2 ;
-(id)_itemImage;
-(void)_giftAgainAction:(id)arg1 ;
-(void)_doneButtonAction:(id)arg1 ;
@end

