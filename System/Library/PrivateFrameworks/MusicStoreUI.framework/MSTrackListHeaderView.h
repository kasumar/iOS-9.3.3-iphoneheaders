/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKit/UIView.h>

@protocol MSTrackListHeaderDelegate;
@class UIImage, SUItem, UILabel, SUReflectionImageView, SUItemOfferButton, SUTouchCaptureView;

@interface MSTrackListHeaderView : UIView {

	id<MSTrackListHeaderDelegate> _delegate;
	UIImage* _artworkImage;
	SUItem* _item;
	UILabel* _albumLabel;
	UILabel* _artistLabel;
	UILabel* _disclaimerLabel;
	UILabel* _itemCountLabel;
	UILabel* _releaseDateLabel;
	SUReflectionImageView* _artworkView;
	SUItemOfferButton* _offerButton;
	SUTouchCaptureView* _touchCaptureView;

}

@property (nonatomic,retain) UIImage * artworkImage;                              //@synthesize artworkImage=_artworkImage - In the implementation block
@property (assign,nonatomic) id<MSTrackListHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SUItem * item;                                       //@synthesize item=_item - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<MSTrackListHeaderDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MSTrackListHeaderDelegate>)delegate;
-(SUItem *)item;
-(void)sizeToFit;
-(void)setItem:(SUItem *)arg1 ;
-(void)reloadView;
-(void)_touchCaptureAction:(id)arg1 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
-(void)_purchasesChangedNotification:(id)arg1 ;
-(void)_reloadAlbumLabel;
-(void)_reloadArtistLabel;
-(void)_reloadArtworkView;
-(void)_reloadDisclaimerLabel;
-(void)_reloadItemCountLabel;
-(void)_reloadOfferButton;
-(void)_reloadReleaseDateLabel;
-(CGSize)_sizeThatFitsLabel:(id)arg1 size:(CGSize)arg2 numberOfLines:(long long)arg3 ;
-(void)_showPurchaseConfirmation;
-(void)_hidePurchaseConfirmation;
-(void)_performPurchaseAnimation;
-(void)_setShowingPurchaseConfirmation:(BOOL)arg1 ;
-(id)_newGenericSmallFontLabel;
-(void)_offerButtonAction:(id)arg1 ;
@end

