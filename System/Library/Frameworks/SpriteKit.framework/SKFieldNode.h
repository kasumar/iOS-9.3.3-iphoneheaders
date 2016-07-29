/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class PKPhysicsField, SKRegion, SKTexture;

@interface SKFieldNode : SKNode {

	PKPhysicsField* _field;
	SKRegion* _region;
	float _smoothness;
	float _animationSpeed;
	SKTexture* _texture;
	BOOL _exclusive;

}

@property (nonatomic,retain) SKRegion * region; 
@property (assign,nonatomic) float strength; 
@property (assign,nonatomic) float falloff; 
@property (assign,nonatomic) float minimumRadius; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isExclusive,nonatomic) BOOL exclusive;              //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic)  direction; 
@property (assign,nonatomic) float smoothness; 
@property (assign,nonatomic) float animationSpeed; 
@property (nonatomic,retain) SKTexture * texture; 
+(id)dragField;
+(id)vortexField;
+(id)linearGravityFieldWithVector:;
+(id)velocityFieldWithVector:;
+(id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)springField;
+(id)electricField;
+(id)magneticField;
+(id)velocityFieldWithTexture:(id)arg1 ;
+(id)radialGravityField;
+(id)customFieldWithEvaluationBlock:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDirection:;
-()direction;
-(void)setRegion:(SKRegion *)arg1 ;
-(SKRegion *)region;
-(float)strength;
-(void)setStrength:(float)arg1 ;
-(id)field;
-(void)setSmoothness:(float)arg1 ;
-(void)setAnimationSpeed:(float)arg1 ;
-(unsigned)categoryBitMask;
-(void)setFalloff:(float)arg1 ;
-(float)falloff;
-(void)setMinimumRadius:(float)arg1 ;
-(float)minimumRadius;
-(float)smoothness;
-(float)animationSpeed;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(SKTexture *)texture;
-(void)setTexture:(SKTexture *)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(id)_descriptionClassName;
-(id)initWithCoder:(id)arg1 field:(id)arg2 ;
-(void)setPhysicsField:(id)arg1 ;
-(void)setExclusive:(BOOL)arg1 ;
-(BOOL)isExclusive;
@end

