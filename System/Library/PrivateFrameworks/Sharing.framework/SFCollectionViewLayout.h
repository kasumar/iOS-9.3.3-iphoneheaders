/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSArray;

@interface SFCollectionViewLayout : UICollectionViewLayout {

	double _evaluatedHorizontalItemOffset;
	NSArray* _preparedLayoutAttributes;
	NSArray* _preparedUpdateItems;
	CGSize _evaluatedItemSize;
	CGSize _evaluatedContentSize;
	UIEdgeInsets _evaluatedInset;

}

@property (assign,nonatomic) UIEdgeInsets evaluatedInset;                       //@synthesize evaluatedInset=_evaluatedInset - In the implementation block
@property (assign,nonatomic) CGSize evaluatedItemSize;                          //@synthesize evaluatedItemSize=_evaluatedItemSize - In the implementation block
@property (assign,nonatomic) CGSize evaluatedContentSize;                       //@synthesize evaluatedContentSize=_evaluatedContentSize - In the implementation block
@property (assign,nonatomic) double evaluatedHorizontalItemOffset;              //@synthesize evaluatedHorizontalItemOffset=_evaluatedHorizontalItemOffset - In the implementation block
@property (nonatomic,copy) NSArray * preparedLayoutAttributes;                  //@synthesize preparedLayoutAttributes=_preparedLayoutAttributes - In the implementation block
@property (nonatomic,copy) NSArray * preparedUpdateItems;                       //@synthesize preparedUpdateItems=_preparedUpdateItems - In the implementation block
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)_indexPathsForItemsInSection:(long long)arg1 ;
-(CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1 ;
-(UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1 ;
-(void)setEvaluatedHorizontalItemOffset:(double)arg1 ;
-(void)setEvaluatedInset:(UIEdgeInsets)arg1 ;
-(void)setEvaluatedItemSize:(CGSize)arg1 ;
-(CGSize)evaluatedContentSize;
-(void)setEvaluatedContentSize:(CGSize)arg1 ;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2 ;
-(void)setPreparedLayoutAttributes:(NSArray *)arg1 ;
-(NSArray *)preparedLayoutAttributes;
-(NSArray *)preparedUpdateItems;
-(void)setPreparedUpdateItems:(NSArray *)arg1 ;
-(BOOL)shouldReverseLayoutDirection;
-(CGSize)evaluatedItemSize;
-(double)evaluatedHorizontalItemOffset;
-(UIEdgeInsets)evaluatedInset;
-(void)invalidateGroupViewLayoutAnimated:(BOOL)arg1 ;
-(void)calculateLayoutValuesForIndexPaths:(id)arg1 containerWidth:(double)arg2 ;
-(double)_evaluateHorizontalItemOffsetForItemSize:(CGSize)arg1 containerWidth:(double)arg2 inset:(UIEdgeInsets)arg3 ;
-(CGPoint)firstItemCenterForContainerWidth:(double)arg1 ;
@end

