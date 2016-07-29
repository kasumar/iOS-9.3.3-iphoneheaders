/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MRLoadable.h>
#import <OpusOrigamiProducer/MRRenderable.h>

@class NSDictionary, MRLayer, MRImage, NSString;

@interface MRTransition : NSObject <MRLoadable, MRRenderable> {

	NSDictionary* mDescription;
	id mTransitioner;
	MRLayer* mSourceLayer;
	MRLayer* mTargetLayer;
	MRImage* mSourceLayerImage;
	MRImage* mTargetLayerImage;
	MRImage* mOutputImage;
	NSString* mTransitionID;
	NSString* mPresetID;
	NSDictionary* mAttributes;
	NSDictionary* mFlattenedAttributes;
	BOOL mNeedsToUpdateAttributes;
	CGSize mPixelSize;
	char _direction;
	double _progress;

}

@property (retain) MRLayer * sourceLayer; 
@property (retain) MRLayer * targetLayer; 
@property (nonatomic,retain) MRImage * sourceLayerImage; 
@property (nonatomic,retain) MRImage * targetLayerImage; 
@property (readonly) NSString * transitionID; 
@property (copy) NSString * presetID; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (readonly) double progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL controlsLayersTime; 
@property (nonatomic,readonly) BOOL noContentsMotion; 
@property (nonatomic,readonly) BOOL needsSourceLayerImageForPrecomputing; 
@property (nonatomic,readonly) BOOL needsTargetLayerImageForPrecomputing; 
@property (readonly) BOOL supportsDirectionOverride; 
@property (assign,nonatomic) char direction;                                           //@synthesize direction=_direction - In the implementation block
@property (readonly) BOOL isSplit; 
@property (nonatomic,readonly) BOOL isNative3D; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaFriendly; 
@property (nonatomic,readonly) BOOL isInfinite; 
+(id)retainedTransitionWithTransitionID:(id)arg1 forTransitioner:(id)arg2 ;
-(double)pzrCancel:(id)arg1 ;
-(double)pzrUpdate:(id)arg1 ;
-(double)pzrEnd:(id)arg1 ;
-(double)pzrStart:(id)arg1 ;
-(BOOL)dependsOnFingerPosition;
-(BOOL)isTransitioning;
-(BOOL)controlsLayersTime;
-(void)setPresetID:(NSString *)arg1 ;
-(void)setTargetLayerImage:(MRImage *)arg1 ;
-(void)setSourceLayerImage:(MRImage *)arg1 ;
-(id)initWithTransitionID:(id)arg1 ;
-(BOOL)isAlphaFriendly;
-(NSString *)presetID;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)setTargetLayer:(MRLayer *)arg1 ;
-(void)retainByTransitioner:(id)arg1 ;
-(MRImage *)sourceLayerImage;
-(MRImage *)targetLayerImage;
-(BOOL)isNative3D;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(NSString *)transitionID;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4 ;
-(MRLayer *)targetLayer;
-(BOOL)needsSourceLayerImageForPrecomputing;
-(BOOL)needsTargetLayerImageForPrecomputing;
-(void)releaseByTransitioner:(id)arg1 ;
-(BOOL)noContentsMotion;
-(BOOL)supportsDirectionOverride;
-(BOOL)isRetainedByTransitioner;
-(void)dealloc;
-(BOOL)isSplit;
-(BOOL)isOpaque;
-(void)setDirection:(char)arg1 ;
-(char)direction;
-(double)progress;
-(NSDictionary *)attributes;
-(void)cleanup;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setSourceLayer:(MRLayer *)arg1 ;
-(void)cancelLoading;
-(MRLayer *)sourceLayer;
-(BOOL)isInfinite;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)unload;
-(CGSize)pixelSize;
@end

