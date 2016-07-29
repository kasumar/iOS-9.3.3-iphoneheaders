/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIViewReusePool, NSMutableArray, NSMapTable, NSArray;

@interface SKUIViewModification : NSObject {

	SKUIViewReusePool* _viewPool;
	NSMutableArray* _views;
	NSMapTable* _allViewTextProperties;

}

@property (nonatomic,copy,readonly) NSMapTable * allViewTextProperties;              //@synthesize allViewTextProperties=_allViewTextProperties - In the implementation block
@property (nonatomic,readonly) NSArray * views;                                      //@synthesize views=_views - In the implementation block
-(id)addImageViewWithVideoElement:(id)arg1 context:(id)arg2 ;
-(id)addImageViewWithElement:(id)arg1 context:(id)arg2 ;
-(id)addButtonWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addLabelViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addBadgeViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addMenuButtonWithTitleItem:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addDividerWithElement:(id)arg1 context:(id)arg2 ;
-(id)addTabularLockupWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addHorizontalLockupWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addTomatoRatingViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addStarRatingControlViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addStarRatingViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addHeaderViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addHorizontalListWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addOfferViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addImageDeckViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addImageGridViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addLabelViewWithOrdinalElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addTextViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)_attributedStringViewForLayout:(id)arg1 ;
-(id)_itemStateForButton:(id)arg1 ;
-(void)_styleItemOfferButton:(id)arg1 forElement:(id)arg2 context:(id)arg3 ;
-(id)_addImageViewWithReuseIdentifier:(id)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(id)addBarRatingWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addReusableViewWithReuseIdentifier:(id)arg1 ;
-(id)initWithViewReusePool:(id)arg1 ;
-(NSArray *)views;
-(void)addView:(id)arg1 ;
-(void)setTextProperties:(id)arg1 forView:(id)arg2 ;
-(NSMapTable *)allViewTextProperties;
@end

