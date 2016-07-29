/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>

@protocol TSDGLLayerDelegate, TSDGLLayerContext;
@class NSObject, CADisplayLink;

@interface TSDGLLayer : CAEAGLLayer {

	NSObject*<TSDGLLayerDelegate> mDelegate;
	id<TSDGLLayerContext> mContext;
	CADisplayLink* mDisplayLink;

}

@property (assign) NSObject*<TSDGLLayerDelegate> delegate; 
-(void)p_drawFrameAtLayerTime:(double)arg1 ;
-(void)p_drawFrameFromDisplayLink:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 isOpaque:(BOOL)arg2 delegate:(id)arg3 ;
-(void)displayAtCurrentLayerTime;
-(void)setDelegate:(NSObject*<TSDGLLayerDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<TSDGLLayerDelegate>)delegate;
-(void)lock;
-(void)unlock;
-(void)stopAnimation;
-(void)startAnimation;
-(void)setCurrentContext;
-(void)pauseAnimation;
-(void)resumeAnimation;
-(void)teardown;
@end

