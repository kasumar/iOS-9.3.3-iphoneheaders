/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXGalleryComponentView.h>
#import <Silex/SXFullScreenCanvasShowable.h>
#import <Silex/SXItemizedScrollViewDataSource.h>
#import <Silex/SXItemizedScrollViewDelegate.h>
#import <Silex/SXImageViewDelegate.h>
#import <Silex/SXTextSourceDataSource.h>

@class NSArray, NSMutableArray, SXItemizedScrollView, UIView, SXFullScreenCanvasController, SXMediaExposureEvent, SXMediaViewEvent, SXImageView, NSString;

@interface SXStripGalleryComponentView : SXGalleryComponentView <SXFullScreenCanvasShowable, SXItemizedScrollViewDataSource, SXItemizedScrollViewDelegate, SXImageViewDelegate, SXTextSourceDataSource> {

	BOOL _loadedAtleastOneImage;
	NSArray* _imageResources;
	NSMutableArray* _imageViews;
	SXItemizedScrollView* _itemizedScrollView;
	long long _visibleImageViewIndex;
	UIView* _fullscreenGestureView;
	SXFullScreenCanvasController* _fullScreenCanvasController;
	SXMediaExposureEvent* _activeExposureEvent;
	SXMediaViewEvent* _activeViewEvent;
	double _contentOffset;
	double _contentWidth;
	unsigned long long _lastPreloadViewIndex;
	SXImageView* _targetGalleryItem;

}

@property (nonatomic,retain) NSArray * imageResources;                                               //@synthesize imageResources=_imageResources - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageViews;                                            //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) SXItemizedScrollView * itemizedScrollView;                              //@synthesize itemizedScrollView=_itemizedScrollView - In the implementation block
@property (assign,nonatomic) long long visibleImageViewIndex;                                        //@synthesize visibleImageViewIndex=_visibleImageViewIndex - In the implementation block
@property (assign,nonatomic,__weak) UIView * fullscreenGestureView;                                  //@synthesize fullscreenGestureView=_fullscreenGestureView - In the implementation block
@property (nonatomic,retain) SXFullScreenCanvasController * fullScreenCanvasController;              //@synthesize fullScreenCanvasController=_fullScreenCanvasController - In the implementation block
@property (nonatomic,retain) SXMediaExposureEvent * activeExposureEvent;                             //@synthesize activeExposureEvent=_activeExposureEvent - In the implementation block
@property (nonatomic,retain) SXMediaViewEvent * activeViewEvent;                                     //@synthesize activeViewEvent=_activeViewEvent - In the implementation block
@property (assign,nonatomic) BOOL loadedAtleastOneImage;                                             //@synthesize loadedAtleastOneImage=_loadedAtleastOneImage - In the implementation block
@property (nonatomic,readonly) double contentOffset;                                                 //@synthesize contentOffset=_contentOffset - In the implementation block
@property (nonatomic,readonly) double contentWidth;                                                  //@synthesize contentWidth=_contentWidth - In the implementation block
@property (assign,nonatomic) unsigned long long lastPreloadViewIndex;                                //@synthesize lastPreloadViewIndex=_lastPreloadViewIndex - In the implementation block
@property (nonatomic,retain) SXImageView * targetGalleryItem;                                        //@synthesize targetGalleryItem=_targetGalleryItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)documentController;
-(CGRect)transitionContentFrame;
-(id)imageContentView;
-(id)textRules;
-(BOOL)gestureShouldBegin:(id)arg1 ;
-(id)imageViewForLocation:(CGPoint)arg1 ;
-(void)forceImageViewFullscreen:(id)arg1 ;
-(void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3 ;
-(void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2 ;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 context:(id)arg3 ;
-(void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2 ;
-(void)presentComponent;
-(id)textResizer;
-(id)additions;
-(id)inlineTextStyles;
-(id)visibleGalleryItemViewForImageIdentifier:(id)arg1 ;
-(NSArray *)imageResources;
-(void)finishMediaExposureEvent;
-(void)finishMediaViewEvent;
-(SXFullScreenCanvasController *)fullScreenCanvasController;
-(void)setLoadedAtleastOneImage:(BOOL)arg1 ;
-(void)createMediaExposureEventIfLoadedAndVisible;
-(void)createMediaViewEvent;
-(void)didViewImageWithIdentifier:(id)arg1 ;
-(void)visibilityStateDidChangeFromState:(long long)arg1 ;
-(SXMediaExposureEvent *)activeExposureEvent;
-(BOOL)loadedAtleastOneImage;
-(void)setActiveExposureEvent:(SXMediaExposureEvent *)arg1 ;
-(SXMediaViewEvent *)activeViewEvent;
-(void)setActiveViewEvent:(SXMediaViewEvent *)arg1 ;
-(void)fullScreenCanvasController:(id)arg1 willTransitionToFullScreenAnimated:(BOOL)arg2 ;
-(void)fullScreenCanvasController:(id)arg1 didTransitionToFullScreenAnimated:(BOOL)arg2 ;
-(void)fullScreenCanvasController:(id)arg1 willTransitionFromFullScreenAnimated:(BOOL)arg2 ;
-(void)fullScreenCanvasController:(id)arg1 didTransitionFromFullScreenAnimated:(BOOL)arg2 ;
-(unsigned long long)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2 ;
-(void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3 ;
-(id)fullScreenCanvasController:(id)arg1 canvasViewForShowable:(id)arg2 ;
-(unsigned long long)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(CGPoint)arg2 inShowable:(id)arg3 ;
-(id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(CGRect)fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(unsigned long long)arg4 ;
-(CGRect)fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 withinRect:(CGRect)arg4 ;
-(void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3 ;
-(BOOL)requestInteractivityFocusForFullScreenCanvasController:(id)arg1 ;
-(id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(BOOL)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 didShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 willHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didShowViewWithIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 willShowViewWithIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didHideViewWithIndex:(unsigned long long)arg3 ;
-(BOOL)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3 ;
-(void)setFullScreenCanvasController:(SXFullScreenCanvasController *)arg1 ;
-(SXItemizedScrollView *)itemizedScrollView;
-(void)setItemizedScrollView:(SXItemizedScrollView *)arg1 ;
-(unsigned long long)numberOfViewsInItemizedScrollView:(id)arg1 ;
-(CGRect)itemizedScrollView:(id)arg1 frameForViewAtIndex:(unsigned long long)arg2 ;
-(id)itemizedScrollView:(id)arg1 viewAtIndex:(unsigned long long)arg2 ;
-(BOOL)itemizedScrollViewWillReindex:(id)arg1 ;
-(BOOL)itemizedScrollView:(id)arg1 isAllowedToAddViewInHierarchy:(unsigned long long)arg2 ;
-(double)gutterBetweenItemsInNotPagingItemizedScrollView:(id)arg1 ;
-(void)itemizedScrollView:(id)arg1 didChangeToActiveViewIndex:(unsigned long long)arg2 ;
-(void)itemizedScrollView:(id)arg1 didShowViewWithIndex:(unsigned long long)arg2 ;
-(double)xOffset;
-(double)rightContentInset;
-(long long)visibleImageViewIndex;
-(UIView *)fullscreenGestureView;
-(id)createViewForViewIndex:(unsigned long long)arg1 ;
-(void)preloadAdjacentViewsForIndex:(long long)arg1 ;
-(SXImageView *)targetGalleryItem;
-(void)setTargetGalleryItem:(SXImageView *)arg1 ;
-(void)setFullscreenGestureView:(UIView *)arg1 ;
-(CGRect)snapRegion;
-(unsigned long long)lastPreloadViewIndex;
-(void)setLastPreloadViewIndex:(unsigned long long)arg1 ;
-(id)fullScreenCanvasController:(id)arg1 copyViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(void)setImageResources:(NSArray *)arg1 ;
-(void)setVisibleImageViewIndex:(long long)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(double)contentOffset;
-(void)willMoveToWindow:(id)arg1 ;
-(CGRect)visibleFrame;
-(double)contentWidth;
-(id)textStyle;
-(void)setImageViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageViews;
@end

