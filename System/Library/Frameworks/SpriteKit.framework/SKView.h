/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class SKMetalLayer, CAEAGLLayer, NSUserDefaults, SKDisplayLink, NSObject, SKNode, SKTransition, SKScene, NSData, NSMutableDictionary, NSMapTable;

@interface SKView : UIView {

	SKCStats* _currentStats;
	SKCStats* _nextStats;
	SKCStats* _frameStats;
	SKCRenderer* _renderer;
	 _viewScale;
	 _viewTranslation;
	shared_ptr<jet_framebuffer>* _framebuffer;
	shared_ptr<jet_texture>* _frameBufferColorTexture;
	shared_ptr<jet_texture>* _frameBufferDepthStencilTexture;
	unsigned _colorRenderBuffer;
	unsigned _depthStencilRenderBuffer;
	shared_ptr<jet_fence>* _renderFence;
	SKMetalLayer* _metalLayer;
	CAEAGLLayer* _eaglLayer;
	NSUserDefaults* _skDefaults;
	BOOL _needsInitialUpdate;
	BOOL _didRunOnce;
	BOOL _viewFramebufferIsValid;
	 _viewFramebufferPixelSize;
	BOOL _isBackgrounded;
	BOOL _allowsTransparency;
	BOOL _priorResignActivePausedState;
	unsigned long long _frameInterval;
	SKDisplayLink* _displayLink;
	NSObject*<OS_dispatch_queue> _updateQueue;
	double _timePreviousUpdate;
	BOOL _prefersLowPowerGPU;
	BOOL _usesAsyncUpdateQueue;
	BOOL _hasRenderedOnce;
	BOOL _hasRenderedForCurrentUpdate;
	BOOL _disableInput;
	BOOL _mouseIsDown;
	SKNode* _nodeUnderCursor;
	SKTransition* _transition;
	SKScene* _nextScene;
	SKScene* _scene;
	BOOL _paused;
	NSData* _spriteArrayHint;
	NSMutableDictionary* _viewRenderOptions;
	NSMapTable* _touchMap;
	float _prevBackingScaleFactor;
	NSObject*<OS_dispatch_queue> _renderQueue;
	NSObject*<OS_dispatch_semaphore> _renderSemaphore;
	int _queuedFrameCount;
	double _physicsDebugStrokeWidth;
	SKCRenderer* __layerBackedRenderer;
	CGSize _pixelSize;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) BOOL showsFPS; 
@property (assign,nonatomic) BOOL showsDrawCount; 
@property (assign,nonatomic) BOOL showsNodeCount; 
@property (assign,nonatomic) BOOL showsQuadCount; 
@property (assign,nonatomic) BOOL showsPhysics; 
@property (assign,nonatomic) BOOL showsFields; 
@property (assign,getter=isAsynchronous,nonatomic) BOOL asynchronous; 
@property (assign,nonatomic) BOOL allowsTransparency; 
@property (assign,nonatomic) BOOL ignoresSiblingOrder; 
@property (assign,nonatomic) BOOL shouldCullNonVisibleNodes; 
@property (assign,nonatomic) long long frameInterval; 
@property (nonatomic,readonly) SKScene * scene; 
@property (readonly) NSMutableDictionary * options; 
@property (assign,nonatomic) double physicsDebugStrokeWidth;                       //@synthesize physicsDebugStrokeWidth=_physicsDebugStrokeWidth - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                                   //@synthesize pixelSize=_pixelSize - In the implementation block
@property (assign) SKCRenderer* _layerBackedRenderer;                              //@synthesize _layerBackedRenderer=__layerBackedRenderer - In the implementation block
+(Class)layerClass;
-(BOOL)isAsynchronous;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_commonInit;
-(void)setFrameInterval:(long long)arg1 ;
-(BOOL)isOpaque;
-(id)snapshot;
-(long long)frameInterval;
-(void)setPaused:(BOOL)arg1 ;
-(NSMutableDictionary *)options;
-(void)_update:(double)arg1 ;
-(double)_viewScale;
-(BOOL)isPaused;
-(void)setShowsFPS:(BOOL)arg1 ;
-(void)setShowsNodeCount:(BOOL)arg1 ;
-(void)setShowsDrawCount:(BOOL)arg1 ;
-(void)setShowsQuadCount:(BOOL)arg1 ;
-(void)set_showsGPUStats:(BOOL)arg1 ;
-(void)set_showsCPUStats:(BOOL)arg1 ;
-(void)setShowsPhysics:(BOOL)arg1 ;
-(void)setShowsFields:(BOOL)arg1 ;
-(void)setIgnoresSiblingOrder:(BOOL)arg1 ;
-(BOOL)ignoresSiblingOrder;
-(BOOL)showsFPS;
-(BOOL)showsNodeCount;
-(BOOL)showsQuadCount;
-(BOOL)showsDrawCount;
-(BOOL)showsPhysics;
-(BOOL)showsFields;
-(BOOL)_showsCPUStats;
-(BOOL)_showsGPUStats;
-(void)_showAllStats;
-(SCD_Struct_SK5)getViewTransform;
-(void)willRenderContent;
-(id)archiveToFile:(id)arg1 ;
-(float)_getViewContentsScale;
-(void)debugPrint;
-(SKCRenderer*)chooseViewRenderer;
-(void)setShouldCullNonVisibleNodes:(BOOL)arg1 ;
-(void)onInit;
-(void)_ensureRenderer;
-(void)setUpRenderCallback;
-(void)startRenderCallbacks;
-(void)CBApplicationWillResignActive;
-(void)CBApplicationDidBecomeActive;
-(void)_renderSynchronouslyForTime:(double)arg1 preRender:(/*^block*/id)arg2 postRender:(/*^block*/id)arg3 ;
-(id)getRenderOptions;
-(id)captureToFile:(id)arg1 ;
-(BOOL)hasValidViewFramebuffer;
-(shared_ptr<jet_framebuffer>*)nextFramebuffer;
-(SKCNode*)getRootNode;
-(1)getViewport;
-(void)notifyWillRenderContent;
-(void)runOnce;
-(void)_vsyncRenderForTime:(double)arg1 preRender:(/*^block*/id)arg2 postRender:(/*^block*/id)arg3 ;
-(void)stopRenderCallbacks;
-(void)renderContent;
-(void)_reshape;
-(void)_renderToIOSurfaceID:(unsigned)arg1 scaleFactor:(float)arg2 asynchronous:(BOOL)arg3 preRender:(/*^block*/id)arg4 postRender:(/*^block*/id)arg5 ;
-(void)remakeFramebuffer;
-(void)_renderContent;
-(BOOL)shouldCullNonVisibleNodes;
-(void)renderForTime:(double)arg1 shouldBlock:(BOOL)arg2 ;
-(void)set_usesAsyncUpdateQueue:(BOOL)arg1 ;
-(BOOL)_usesAsyncUpdateQueue;
-(CGPoint)convertPoint:(CGPoint)arg1 toScene:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromScene:(id)arg2 ;
-(void)remakeFramebuffer:(double)arg1 ;
-(double)alphaValue;
-(BOOL)allowsTransparency;
-(void)setAllowsTransparency:(BOOL)arg1 ;
-(void)presentScene:(id)arg1 transition:(id)arg2 ;
-(id)textureFromNode:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 updateQueue:(id)arg2 ;
-(void)writeContentsToPNG:(id)arg1 ;
-(void)renderToIOSurfaceID:(unsigned)arg1 withScaleFactor:(double)arg2 ;
-(void)_setUpdateQueue:(id)arg1 ;
-(id)textureFromNode:(id)arg1 crop:(CGRect)arg2 ;
-(void)set_viewScale:(double)arg1 ;
-(CGPoint)_viewTranslation;
-(void)set_viewTranslation:(CGPoint)arg1 ;
-(double)physicsDebugStrokeWidth;
-(void)setPhysicsDebugStrokeWidth:(double)arg1 ;
-(SKCRenderer*)_layerBackedRenderer;
-(void)set_layerBackedRenderer:(SKCRenderer*)arg1 ;
-(SKScene *)scene;
-(void)presentScene:(id)arg1 ;
-(void)setAsynchronous:(BOOL)arg1 ;
-(CGSize)pixelSize;
@end

