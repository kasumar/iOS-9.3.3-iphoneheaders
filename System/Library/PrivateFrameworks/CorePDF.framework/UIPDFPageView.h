/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <UIKit/UIView.h>

@protocol NSObjectUIPDFPageViewDelegate;
@class UIPDFDocument, UIPDFViewTouchHandler, UIPDFSelectionController, CALayer, UIImage, UIPDFPageContentDelegate, UIPDFAnnotationController, UIActivityIndicatorView, UIColor, NSMutableArray, UIPDFSearchHighlightsController, UIPDFPage;

@interface UIPDFPageView : UIView {

	UIPDFDocument* _document;
	unsigned long long _pageIndex;
	UIPDFViewTouchHandler* _touchHandler;
	CGAffineTransform _pageToViewTransform;
	CGAffineTransform _viewToPageTransform;
	CGRect _cropBox;
	double _margin;
	BOOL _allowSelection;
	UIPDFSelectionController* _selectionController;
	id<NSObject><UIPDFPageViewDelegate> _delegate;
	CGRect zoomRect;
	BOOL _useBackingLayer;
	CALayer* _backingLayer;
	UIImage* _backgroundImage;
	BOOL _backgroundIsScheduled;
	unsigned long long _backgroundScheduleCount;
	BOOL _backgroundIsFullResolution;
	BOOL _boundsChanged;
	BOOL _useTiledContent;
	BOOL _enableLightMemoryFootprint;
	CALayer* _contentLayer;
	CALayer* _effectsLayer;
	UIPDFPageContentDelegate* _contentDelegate;
	UIPDFAnnotationController* _annotationController;
	BOOL _scalePageOnDraw;
	CGColorRef _highLightColor;
	BOOL _animateSetFrame;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _showActivityIndicator;
	UIColor* _backingLayerColor;
	int _lock;
	NSMutableArray* _highlights;
	double _cachedScale;
	BOOL _allowHighlighting;
	UIPDFSearchHighlightsController* _searchHighlightController;
	NSMutableArray* _searchHiglightLayers;
	UIPDFPage* _page;
	BOOL showAnnotations;
	BOOL _allowTwoFingerSelection;
	BOOL _showTextAnnotations;
	BOOL _showLinkAnnotationUnderline;

}

@property (retain,readonly) UIPDFDocument * document; 
@property (readonly) unsigned long long pageIndex; 
@property (assign) UIPDFPage * page; 
@property (assign,nonatomic) id<NSObject><UIPDFPageViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double margin;                                                   //@synthesize margin=_margin - In the implementation block
@property (nonatomic,readonly) CALayer * contentLayer;                                        //@synthesize contentLayer=_contentLayer - In the implementation block
@property (nonatomic,readonly) CALayer * effectsLayer;                                        //@synthesize effectsLayer=_effectsLayer - In the implementation block
@property (assign,nonatomic) BOOL allowSelection;                                             //@synthesize allowSelection=_allowSelection - In the implementation block
@property (assign,nonatomic) BOOL useBackingLayer;                                            //@synthesize useBackingLayer=_useBackingLayer - In the implementation block
@property (assign) UIPDFSelectionController * selectionController;                            //@synthesize selectionController=_selectionController - In the implementation block
@property (readonly) CGColorRef highLightColor; 
@property (assign,nonatomic) BOOL allowMenu; 
@property (assign,nonatomic) BOOL animateSetFrame;                                            //@synthesize animateSetFrame=_animateSetFrame - In the implementation block
@property (retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIColor * backingLayerColor;                                     //@synthesize backingLayerColor=_backingLayerColor - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                                      //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (assign,nonatomic) BOOL showAnnotations; 
@property (assign,nonatomic) BOOL allowHighlighting; 
@property (assign,nonatomic) BOOL showTextAnnotations;                                        //@synthesize showTextAnnotations=_showTextAnnotations - In the implementation block
@property (nonatomic,readonly) UIPDFAnnotationController * annotationController;              //@synthesize annotationController=_annotationController - In the implementation block
@property (assign,nonatomic) BOOL showLinkAnnotationUnderline;                                //@synthesize showLinkAnnotationUnderline=_showLinkAnnotationUnderline - In the implementation block
@property (assign,nonatomic) BOOL allowTwoFingerSelection;                                    //@synthesize allowTwoFingerSelection=_allowTwoFingerSelection - In the implementation block
-(CGPDFDictionaryRef)_annotForPoint:(CGPoint)arg1 rect:(CGRect*)arg2 ;
-(void)setNeedsDisplay;
-(void)setDelegate:(id<NSObject><UIPDFPageViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<NSObject><UIPDFPageViewDelegate>)delegate;
-(void)willMoveToSuperview:(id)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)clearSelection;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(UIPDFSelectionController *)selectionController;
-(UIPDFDocument *)document;
-(UIPDFPage *)page;
-(void)setPage:(UIPDFPage *)arg1 ;
-(void)setMargin:(double)arg1 ;
-(double)margin;
-(unsigned long long)pageIndex;
-(void)addPage:(id)arg1 ;
-(void)didScroll:(id)arg1 ;
-(id)initWithPage:(id)arg1 ;
-(void)setShowAnnotations:(BOOL)arg1 ;
-(void)setAllowSelection:(BOOL)arg1 ;
-(void)setUseBackingLayer:(BOOL)arg1 ;
-(UIPDFAnnotationController *)annotationController;
-(void)setBackingLayerColor:(UIColor *)arg1 ;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(void)setShowLinkAnnotationUnderline:(BOOL)arg1 ;
-(CGRect)convertRectToPDFPageSpace:(CGRect)arg1 ;
-(CGRect)convertRectFromPDFPageSpace:(CGRect)arg1 ;
-(BOOL)showAnnotations;
-(CGPoint)convertPointFromPDFPageSpace:(CGPoint)arg1 ;
-(void)setSelectionNeedsDisplay;
-(void)setAllowMenu:(BOOL)arg1 ;
-(void)setAllowHighlighting:(BOOL)arg1 ;
-(void)setShowTextAnnotations:(BOOL)arg1 ;
-(void)viewDidZoom:(id)arg1 ;
-(CGColorRef)highLightColor;
-(void)addLayers:(BOOL)arg1 ;
-(void)enableLightMemoryFootprint;
-(UIColor *)backingLayerColor;
-(id)receiveBackgroundImage:(id)arg1 info:(id)arg2 ;
-(void)scheduleBackgroundImage;
-(id)createBackingLayer;
-(BOOL)allowHighlighting;
-(void)showContent;
-(void)setTransforms;
-(void)drawAnnotations:(CGContextRef)arg1 ;
-(CGRect)rectangleOfInterestAt:(CGPoint)arg1 kind:(int*)arg2 ;
-(BOOL)willDoSomethingWithTap:(CGPoint)arg1 ;
-(CGRect)fitWidth:(CGRect)arg1 atVertical:(double)arg2 ;
-(CGRect)fitRect:(CGRect)arg1 ;
-(BOOL)hasSearchHighlights;
-(BOOL)allowMenu;
-(id)initWithPageLimitedMemory:(id)arg1 ;
-(void)setDrawingSurfaceLayer:(id)arg1 ;
-(void)removeBackingLayer;
-(void)layoutTextEffects;
-(void)ignoreTouches:(BOOL)arg1 ;
-(void)doubleTapAt:(CGPoint)arg1 ;
-(void)twoFingerDoubleTapAt:(CGPoint)arg1 ;
-(void)singleTapAt:(CGPoint)arg1 ;
-(void)displayContent;
-(void)hideSelection;
-(void)showSelection;
-(CALayer *)effectsLayer;
-(id)searchHighlightSelectionAt:(CGPoint)arg1 ;
-(void)addWidgetToSelection;
-(void)suspendInstantTouchHighlighting;
-(BOOL)allowSelection;
-(void)setSelectionController:(UIPDFSelectionController *)arg1 ;
-(BOOL)animateSetFrame;
-(void)setAnimateSetFrame:(BOOL)arg1 ;
-(BOOL)useBackingLayer;
-(BOOL)allowTwoFingerSelection;
-(void)setAllowTwoFingerSelection:(BOOL)arg1 ;
-(BOOL)showTextAnnotations;
-(BOOL)showLinkAnnotationUnderline;
-(id)initWithPage:(id)arg1 tiledContent:(BOOL)arg2 ;
-(CALayer *)contentLayer;
-(void)highlightSearchSelection:(id)arg1 animated:(BOOL)arg2 ;
-(void)clearSearchHighlights;
-(void)stopActivityIndicator;
-(CGPoint)convertPointToPDFPageSpace:(CGPoint)arg1 ;
-(BOOL)showActivityIndicator;
@end

