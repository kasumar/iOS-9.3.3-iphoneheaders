/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SBSideSwitcherScrollingItemViewDelegate;
@class SBAppSwitcherScrollView, NSArray, NSMutableDictionary, SBDisplayItem, SBChevronView, NSString;

@interface SBSideSwitcherScrollingItemViewController : UIViewController <UIScrollViewDelegate> {

	SBAppSwitcherScrollView* _scrollView;
	NSArray* _displayItems;
	NSMutableDictionary* _visiblePageViews;
	SBDisplayItem* _transitioningDisplayItem;
	double _transitionProgress;
	double _interactiveTransitionProgress;
	double _displayItemContentTransitionProgress;
	BOOL _isAnimatingDisplayItemContentTransition;
	BOOL _transitionPresenting;
	unsigned long long _transitionState;
	SBChevronView* _grabberView;
	long long _sideSwitcherGrabberStyle;
	BOOL _sideSwitcherGrabberPressed;
	CGPoint _beginningOfDismissalContentOffset;
	BOOL _shouldResetContentOffset;
	id<SBSideSwitcherScrollingItemViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBSideSwitcherScrollingItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * displayItems;                                                     //@synthesize displayItems=_displayItems - In the implementation block
@property (assign,nonatomic) long long sideSwitcherGrabberStyle;                                       //@synthesize sideSwitcherGrabberStyle=_sideSwitcherGrabberStyle - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (assign,nonatomic) double transitionProgress;                                                //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (assign,nonatomic) unsigned long long transitionState;                                       //@synthesize transitionState=_transitionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endTransitionWithSuccess:(BOOL)arg1 ;
-(void)setTransitionState:(unsigned long long)arg1 ;
-(void)setDisplayItems:(NSArray *)arg1 ;
-(void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 duration:(double)arg3 updateScrollPosition:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)removeItem:(id)arg1 duration:(double)arg2 updateScrollPosition:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateScrollViewFrameAndContentSize;
-(long long)sideSwitcherGrabberStyle;
-(void)setSideSwitcherGrabberStyle:(long long)arg1 ;
-(void)startTransitionWithDisplayItem:(id)arg1 presenting:(BOOL)arg2 ;
-(void)prepareToEndTransitionAnimated:(BOOL)arg1 ;
-(double)heightFromTopForFinalItemSize;
-(double)contentOffsetSpeedInScrollingDirection;
-(void)_layoutGrabber;
-(CGSize)_scrollViewContentSizeForProgress:(double)arg1 ;
-(CGPoint)_scrollViewContentOffsetForProgress:(double)arg1 ;
-(void)_startUpdatingScrollViewForPresentationOrDismissal;
-(void)_updateVisiblePageViews;
-(CGRect)_frameForItem:(unsigned long long)arg1 ;
-(void)_applyPageViewStyleToVisiblePageViews;
-(CGPoint)_contentOffsetOnRotationToSize:(CGSize)arg1 oldViewHeight:(double)arg2 oldOffsetY:(double)arg3 ;
-(CGPoint)_centerOfIndex:(long long)arg1 ;
-(double)_distanceBetweenItems;
-(unsigned long long)_itemsPerScreen;
-(CGSize)_itemSizeForProgress:(double)arg1 ;
-(CGPoint)_centerOfIndex:(long long)arg1 forProgress:(double)arg2 ;
-(CGRect)_frameForItem:(unsigned long long)arg1 progressPresented:(double)arg2 ;
-(void)_updateScrollViewLayoutForPresentationOrDismissal;
-(void)_applyStyleToPageView:(id)arg1 ;
-(BOOL)_isItemVisible:(id)arg1 withSidePadding:(double)arg2 progress:(double)arg3 ;
-(void)scrollViewDidBeginDragging:(id)arg1 ;
-(void)replaceItemAtIndex:(unsigned long long)arg1 withNewItem:(id)arg2 duration:(double)arg3 ;
-(void)setDelegate:(id<SBSideSwitcherScrollingItemViewDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SBSideSwitcherScrollingItemViewDelegate>)delegate;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(BOOL)isScrollEnabled;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTransitionProgress:(double)arg1 ;
-(double)transitionProgress;
-(NSArray *)displayItems;
-(unsigned long long)transitionState;
-(CGSize)_itemSize;
@end

