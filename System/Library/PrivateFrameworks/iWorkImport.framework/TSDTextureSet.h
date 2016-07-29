/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, TSUNoCopyDictionary, NSMutableDictionary, NSDictionary, CALayer, TSDRep, TSDBitmapRenderingQualityInfo, NSArray;

@interface TSDTextureSet : NSObject <NSCopying> {

	CGPoint mCenter;
	CGRect mBounds;
	CGPoint mOriginalPosition;
	BOOL mIsBaked;
	BOOL mShouldIncludeFinalTexturesInVisibleSet;
	BOOL mShouldTransformUsingTextureCenter;
	unsigned long long mChunkCount;
	NSMutableArray* mTextures;
	NSMutableArray* mAllTextures;
	TSUNoCopyDictionary* mStageIndexForTexture;
	NSMutableDictionary* mFinalTextureForStage;
	NSMutableDictionary* mBoundingRectForStage;
	NSMutableDictionary* mReverseFinalTextureForStage;
	TSUNoCopyDictionary* mFinalTexturesToStageMap;
	TSUNoCopyDictionary* mReverseFinalTexturesToStageMap;
	NSDictionary* mBakedAttributes;
	NSRange mActiveChunkIndices;
	CALayer* mLayer;
	BOOL mIsMagicMove;
	double mTextureOpacity;
	double mTextureAngle;
	long long mTextureZOrder;
	BOOL mIsBackground;
	CALayer* mAlternateLayer;
	TSDRep* mRep;
	CGColorSpaceRef mColorSpace;
	TSDBitmapRenderingQualityInfo* mBitmapRenderingQualityInfo;
	BOOL _isFlippedHorizontally;
	long long mMaxStageIndex;
	long long _stageIndex;
	double _textureAnimationPercent;
	long long _objectType;

}

@property (nonatomic,readonly) long long maxStageIndex; 
@property (nonatomic,readonly) long long stageIndex;                                                  //@synthesize stageIndex=_stageIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long chunkCount; 
@property (nonatomic,readonly) NSArray * visibleTextures; 
@property (nonatomic,readonly) NSArray * allTextures; 
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect boundingRect; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,retain) CALayer * alternateLayer; 
@property (assign,nonatomic) BOOL isMagicMove; 
@property (assign,nonatomic) double textureAngle; 
@property (assign,nonatomic) long long textureZOrder; 
@property (assign,nonatomic) double textureOpacity; 
@property (assign,nonatomic) double textureAnimationPercent;                                          //@synthesize textureAnimationPercent=_textureAnimationPercent - In the implementation block
@property (assign,nonatomic) long long objectType;                                                    //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL isBackground; 
@property (assign,nonatomic) BOOL isBaked; 
@property (assign,nonatomic) BOOL shouldIncludeFinalTexturesInVisibleSet; 
@property (assign,nonatomic) BOOL shouldTransformUsingTextureCenter; 
@property (assign) TSDRep * rep; 
@property (nonatomic,retain) NSDictionary * boundingRectForStage; 
@property (assign,nonatomic) CGPoint originalPosition; 
@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
@property (nonatomic,readonly) BOOL isRenderable; 
@property (nonatomic,readonly) BOOL isImageSource; 
@property (assign,nonatomic) BOOL isFlippedHorizontally;                                              //@synthesize isFlippedHorizontally=_isFlippedHorizontally - In the implementation block
@property (nonatomic,retain) TSDBitmapRenderingQualityInfo * bitmapRenderingQualityInfo; 
+(id)newFlattenedTextureFromTextures:(id)arg1 newRect:(CGRect)arg2 ;
-(TSDBitmapRenderingQualityInfo *)bitmapRenderingQualityInfo;
-(void)addRenderable:(id)arg1 forStage:(long long)arg2 ;
-(void)addFinalTexture:(id)arg1 forStage:(long long)arg2 reverse:(BOOL)arg3 ;
-(void)setRep:(TSDRep *)arg1 ;
-(BOOL)isMagicMove;
-(void)setIsMagicMove:(BOOL)arg1 ;
-(void)setBoundingRect:(CGRect)arg1 ;
-(void)setBoundingRect:(CGRect)arg1 forStage:(long long)arg2 ;
-(CALayer *)alternateLayer;
-(void)setTextureAngle:(double)arg1 ;
-(void)setTextureZOrder:(long long)arg1 ;
-(void)setIsFlippedHorizontally:(BOOL)arg1 ;
-(void)setTextureOpacity:(double)arg1 ;
-(void)addRenderable:(id)arg1 ;
-(double)textureAngle;
-(void)setIsBaked:(BOOL)arg1 ;
-(BOOL)isBackgroundTexture:(id)arg1 ;
-(BOOL)isImageSource;
-(void)resetAnchorPoint;
-(BOOL)isRenderable;
-(void)renderLayerContentsIfNeeded;
-(void)setBitmapRenderingQualityInfo:(TSDBitmapRenderingQualityInfo *)arg1 ;
-(CGPoint)originalPosition;
-(void)setOriginalPosition:(CGPoint)arg1 ;
-(double)textureOpacity;
-(long long)stageIndexForTexture:(id)arg1 ;
-(void)setAlternateLayer:(CALayer *)arg1 ;
-(void)setBoundingRectForStage:(NSDictionary *)arg1 ;
-(NSArray *)visibleTextures;
-(void)p_applyPositionFromAttributes:(id)arg1 viewScale:(double)arg2 ;
-(void)p_resetAttributesWithViewScale:(double)arg1 ;
-(CGRect)boundingRectForStage:(long long)arg1 isBuildIn:(BOOL)arg2 ;
-(id)visibleTexturesForStage:(long long)arg1 isBuildIn:(BOOL)arg2 shouldFlatten:(BOOL)arg3 ;
-(void)removeRenderable:(id)arg1 ;
-(id)firstVisibleTextureForTextureType:(long long)arg1 ;
-(id)visibleTexturesWithTextureType:(long long)arg1 ;
-(id)newFlattenedTexture;
-(id)finalTextureForStage:(long long)arg1 reverse:(BOOL)arg2 ;
-(void)hideLayersOfFinalTextures;
-(void)setLayerGeometryFromRep:(id)arg1 ;
-(void)adjustAnchorPointRelativeToCenterOfRotation;
-(void)resetToOriginalSource;
-(void)applyActionEffect:(id)arg1 viewScale:(double)arg2 isMagicMove:(BOOL)arg3 shouldBake:(BOOL)arg4 applyScaleOnly:(BOOL)arg5 ignoreScale:(BOOL)arg6 shouldCheckActionKeys:(BOOL)arg7 ;
-(void)renderIntoContext:(CGContextRef)arg1 requiresTransparentBackground:(BOOL)arg2 ;
-(void)addPerspectiveLayerToTexture:(id)arg1 withShowSize:(CGSize)arg2 ;
-(NSArray *)allTextures;
-(NSDictionary *)boundingRectForStage;
-(long long)maxStageIndex;
-(BOOL)shouldIncludeFinalTexturesInVisibleSet;
-(void)setShouldIncludeFinalTexturesInVisibleSet:(BOOL)arg1 ;
-(BOOL)shouldTransformUsingTextureCenter;
-(void)setShouldTransformUsingTextureCenter:(BOOL)arg1 ;
-(long long)textureZOrder;
-(TSDRep *)rep;
-(long long)stageIndex;
-(double)textureAnimationPercent;
-(void)setTextureAnimationPercent:(double)arg1 ;
-(BOOL)isFlippedHorizontally;
-(CALayer *)layer;
-(void)dealloc;
-(id)init;
-(CGRect)frame;
-(id)description;
-(CGPoint)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(CGRect)boundingRect;
-(void)setIsBackground:(BOOL)arg1 ;
-(BOOL)isBackground;
-(unsigned long long)chunkCount;
-(BOOL)isBaked;
-(void)setObjectType:(long long)arg1 ;
-(long long)objectType;
-(void)teardown;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
@end

