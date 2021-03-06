/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@interface MRCroppingSpriteVBO : NSObject {

	CGPoint mPosition;
	CGSize mHalfSize;
	float mRotation;
	CGRect mInnerRect;
	CGRect mOuterRect;
	BOOL mPreservesImageAspectRatio;
	BOOL mHitIsActive;
	BOOL mNeedsInSpriteCoordinates;
	CGSize mSpriteCoordinatesFactor;
	CGPoint mSpriteCoordinatesOffset;
	unsigned char mMeshType;
	unsigned mVBO;
	unsigned char mMiddleOffset;
	unsigned char mOuterOffset;
	unsigned char mNumberOfVertices;
	BOOL mPositionWasUpdated;
	BOOL mRectsWereUpdated;

}

@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGSize halfSize; 
@property (nonatomic,readonly) float rotation; 
@property (assign,nonatomic) CGRect innerRect; 
@property (assign,nonatomic) CGRect outerRect; 
@property (assign,nonatomic) BOOL preservesImageAspectRatio; 
@property (assign,nonatomic) BOOL hitIsActive; 
@property (assign,nonatomic) BOOL needsInSpriteCoordinates; 
@property (assign,nonatomic) CGSize spriteCoordinatesFactor; 
@property (assign,nonatomic) CGPoint spriteCoordinatesOffset; 
@property (assign,nonatomic) unsigned char meshType; 
-(void)setNeedsInSpriteCoordinates:(BOOL)arg1 ;
-(void)renderImageOuter:(id)arg1 inContext:(id)arg2 ;
-(void)setInnerRect:(CGRect)arg1 ;
-(void)fakeRenderInContext:(id)arg1 atPosition:(CGPoint)arg2 andSize:(CGSize)arg3 zRotation:(float)arg4 ;
-(BOOL)hitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 ;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 zRotation:(float)arg3 innerRect:(CGRect)arg4 outerRect:(CGRect)arg5 context:(id)arg6 ;
-(void)updateVBOsInContext:(id)arg1 ;
-(void)setOuterRect:(CGRect)arg1 ;
-(CGSize)spriteCoordinatesFactor;
-(CGRect)outerRect;
-(void)setHitIsActive:(BOOL)arg1 ;
-(CGRect)innerRect;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 zRotation:(float)arg3 innerRect:(CGRect)arg4 context:(id)arg5 ;
-(BOOL)hitIsActive;
-(void)setPreservesImageAspectRatio:(BOOL)arg1 ;
-(CGSize)halfSize;
-(BOOL)needsInSpriteCoordinates;
-(void)setSpriteCoordinatesFactor:(CGSize)arg1 ;
-(void)setSpriteCoordinatesOffset:(CGPoint)arg1 ;
-(unsigned char)meshType;
-(void)setMeshType:(unsigned char)arg1 ;
-(CGPoint)spriteCoordinatesOffset;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 zRotation:(float)arg3 context:(id)arg4 ;
-(BOOL)preservesImageAspectRatio;
-(void)getOpaquePosition:(CGPoint*)arg1 andHalfSize:(CGSize*)arg2 ;
-(void)renderImageInner:(id)arg1 inContext:(id)arg2 ;
-(void)renderImageMiddle:(id)arg1 inContext:(id)arg2 ;
-(id)init;
-(void)reset;
-(CGPoint)position;
-(float)rotation;
@end

