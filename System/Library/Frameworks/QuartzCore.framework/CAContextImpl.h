/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAContext.h>

@interface CAContextImpl : CAContext {

	Context* _impl;

}
-(id)initWithOptions:(id)arg1 localContext:(BOOL)arg2 ;
-(id)initRemoteWithOptions:(id)arg1 ;
-(void)orderBelow:(unsigned)arg1 ;
-(void)setFence:(unsigned)arg1 count:(unsigned)arg2 ;
-(void)invalidateFences;
-(BOOL)colorMatchUntaggedContent;
-(void)setColorMatchUntaggedContent:(BOOL)arg1 ;
-(id)layer;
-(void)dealloc;
-(void)invalidate;
-(void)setLayer:(id)arg1 ;
-(void)setLevel:(float)arg1 ;
-(unsigned)contextId;
-(void)setFencePort:(unsigned)arg1 commitHandler:(/*^block*/id)arg2 ;
-(void)setFencePort:(unsigned)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(float)level;
-(void)orderAbove:(unsigned)arg1 ;
-(unsigned)createFencePort;
-(unsigned)createImageSlot:(CGSize)arg1 hasAlpha:(BOOL)arg2 ;
-(void)deleteSlot:(unsigned)arg1 ;
-(id)options;
-(BOOL)valid;
-(ContextRef)renderContext;
-(unsigned)createSlot;
-(void)setObject:(id)arg1 forSlot:(unsigned)arg2 ;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
@end

