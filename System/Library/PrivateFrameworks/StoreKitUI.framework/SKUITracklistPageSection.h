/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@protocol SKUIEntityProviding;
@class SKUIViewElementLayoutContext, SKUITracklistColumnData, SKUITracklistPageComponent, NSString;

@interface SKUITracklistPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {

	SKUIViewElementLayoutContext* _cellLayoutContext;
	SKUITracklistColumnData* _columnData;
	id<SKUIEntityProviding> _entityProvider;
	long long _lastNeedsMoreCount;

}

@property (nonatomic,readonly) SKUITracklistPageComponent * pageComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(long long)applyUpdateType:(long long)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(id)relevantEntityProviders;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2 ;
-(long long)numberOfCells;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)requestLayoutWithReloadReason:(long long)arg1 ;
-(void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionViewWillScrollToOffset:(CGPoint)arg1 visibleRange:(SKUIIndexPathRange)arg2 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)firstAppearanceIndexPath;
-(void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_columnData;
-(void)_enumerateVisibleViewElementsUsingBlock:(/*^block*/id)arg1 ;
-(void)_reloadEntityProvider;
-(id)_viewElementForIndex:(long long)arg1 ;
-(void)_requestCellLayoutWithColumnData:(id)arg1 ;
-(double)_widthForButtonElements:(id)arg1 ;
-(id)_representativeStringForViewElement:(id)arg1 ;
-(BOOL)_isDynamicTracklist;
-(UIEdgeInsets)sectionContentInset;
@end

