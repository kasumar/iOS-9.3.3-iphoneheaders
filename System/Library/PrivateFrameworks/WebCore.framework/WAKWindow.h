/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKResponder.h>

@class CALayer, WAKView;

@interface WAKWindow : WAKResponder {

	CALayer* _hostLayer;
	LegacyTileCache* _tileCache;
	CGRect _frozenVisibleRect;
	CALayer* _rootLayer;
	CGSize _screenSize;
	CGSize _availableScreenSize;
	double _screenScale;
	CGRect _frame;
	WAKView* _contentView;
	WAKView* _responderView;
	WAKView* _nextResponder;
	BOOL _visible;
	BOOL _useOrientationDependentFontAntialiasing;
	BOOL _entireWindowVisibleForTesting;
	SpinLock _exposedScrollViewRectLock;
	CGRect _exposedScrollViewRect;

}

@property (assign,nonatomic) BOOL useOrientationDependentFontAntialiasing;              //@synthesize useOrientationDependentFontAntialiasing=_useOrientationDependentFontAntialiasing - In the implementation block
@property (assign,nonatomic) CGImageRef contentReplacementImage; 
+(void)setOrientationProvider:(id)arg1 ;
+(BOOL)hasLandscapeOrientation;
+(id)currentEvent;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(CGRect)extendedVisibleRect;
-(BOOL)useOrientationDependentFontAntialiasing;
-(CGSize)availableScreenSize;
-(LegacyTileCache*)tileCache;
-(CGRect)_visibleRectRespectingMasksToBounds:(BOOL)arg1 ;
-(void)freezeVisibleRect;
-(void)unfreezeVisibleRect;
-(void)setFrame:(CGRect)arg1 display:(BOOL)arg2 ;
-(void)setEntireWindowVisibleForTesting:(BOOL)arg1 ;
-(int)tilingMode;
-(int)tilingDirection;
-(float)zoomedOutTileScale;
-(float)currentTileScale;
-(BOOL)hasPendingDraw;
-(CGImageRef)contentReplacementImage;
-(void)setTileControllerShouldUseLowScaleTiles:(BOOL)arg1 ;
-(int)keyViewSelectionDirection;
-(id)_newFirstResponderAfterResigning;
-(CGPoint)convertScreenToBase:(CGPoint)arg1 ;
-(CGPoint)convertBaseToScreen:(CGPoint)arg1 ;
-(id)hostLayer;
-(void)setTileBordersVisible:(BOOL)arg1 ;
-(void)setTilePaintCountsVisible:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)dealloc;
-(CGRect)frame;
-(id)description;
-(id)firstResponder;
-(void)sendEvent:(id)arg1 ;
-(BOOL)isKeyWindow;
-(void)makeKeyWindow;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id)recursiveDescription;
-(void)setVisible:(BOOL)arg1 ;
-(CGRect)visibleRect;
-(void)layoutTilesNow;
-(void)willRotate;
-(void)didRotate;
-(BOOL)isVisible;
-(void)close;
-(void)setContentRect:(CGRect)arg1 ;
-(void)setCurrentTileScale:(float)arg1 ;
-(void)setZoomedOutTileScale:(float)arg1 ;
-(void)removeAllNonVisibleTiles;
-(void)setTilesOpaque:(BOOL)arg1 ;
-(void)removeAllTiles;
-(void)setUseOrientationDependentFontAntialiasing:(BOOL)arg1 ;
-(void)setTilingDirection:(int)arg1 ;
-(void)setExposedScrollViewRect:(CGRect)arg1 ;
-(void)displayRect:(CGRect)arg1 ;
-(void)removeForegroundTiles;
-(BOOL)makeFirstResponder:(id)arg1 ;
-(void)setAcceleratedDrawingEnabled:(BOOL)arg1 ;
-(CGRect)exposedScrollViewRect;
-(void)sendEventSynchronously:(id)arg1 ;
-(void)sendMouseMoveEvent:(id)arg1 contentChange:(int*)arg2 ;
-(void)setRootLayer:(id)arg1 ;
-(void)setScreenSize:(CGSize)arg1 ;
-(void)setAvailableScreenSize:(CGSize)arg1 ;
-(double)screenScale;
-(void)setScreenScale:(double)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutTilesNowForRect:(CGRect)arg1 ;
-(void)setContentReplacementImage:(CGImageRef)arg1 ;
-(void)layoutTiles;
-(id)rootLayer;
-(void)setTilingMode:(int)arg1 ;
-(BOOL)tilesOpaque;
-(void)setKeepsZoomedOutTiles:(BOOL)arg1 ;
-(BOOL)keepsZoomedOutTiles;
-(void)dumpTiles;
-(CGSize)screenSize;
@end

