/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CAMetalLayer : CALayer {

	CAMetalLayerPrivate* _priv;

}

@property (assign) unsigned long long maximumDrawableCount; 
@property (assign) BOOL lowLatency; 
@property (retain) id<MTLDevice> device; 
@property (assign) unsigned long long pixelFormat; 
@property (assign) BOOL framebufferOnly; 
@property (assign) CGSize drawableSize; 
@property (assign) BOOL presentsWithTransaction; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(BOOL)lowLatency;
-(unsigned long long)maximumDrawableCount;
-(void)setMaximumDrawableCount:(unsigned long long)arg1 ;
-(void)setLowLatency:(BOOL)arg1 ;
-(void)discardContents;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(BOOL)presentsWithTransaction;
-(CGSize)drawableSize;
-(BOOL)framebufferOnly;
-(CGColorSpaceRef)colorspace;
-(void)setColorspace:(CGColorSpaceRef)arg1 ;
-(id)newDrawable;
-(void)dealloc;
-(id)init;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)_display;
-(unsigned long long)pixelFormat;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(id)nextDrawable;
-(void)setDrawableSize:(CGSize)arg1 ;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(id<MTLDevice>)device;
@end

