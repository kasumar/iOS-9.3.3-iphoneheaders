/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class PKPhysicsField, UIRegion, NSArray;

@interface UIFieldBehavior : UIDynamicBehavior {

	PKPhysicsField* _field;
	struct {
		unsigned fieldIsKindOfNoiseField : 1;
	}  _fieldFlags;
	UIRegion* _region;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) CGPoint position; 
@property (nonatomic,retain) UIRegion * region;                      //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) double strength; 
@property (assign,nonatomic) double falloff; 
@property (assign,nonatomic) double minimumRadius; 
@property (assign,nonatomic) CGVector direction; 
@property (assign,nonatomic) double smoothness; 
@property (assign,nonatomic) double animationSpeed; 
@property (nonatomic,readonly) PKPhysicsField * _field; 
+(BOOL)_isPrimitiveBehavior;
+(id)dragField;
+(id)vortexField;
+(id)radialGravityFieldWithPosition:(CGPoint)arg1 ;
+(id)linearGravityFieldWithVector:(CGVector)arg1 ;
+(id)velocityFieldWithVector:(CGVector)arg1 ;
+(id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)springField;
+(id)electricField;
+(id)magneticField;
+(id)fieldWithEvaluationBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)removeItem:(id)arg1 ;
-(void)setDirection:(CGVector)arg1 ;
-(CGVector)direction;
-(NSArray *)items;
-(void)_changedParameter;
-(void)_associate;
-(void)_dissociate;
-(void)addItem:(id)arg1 ;
-(void)setRegion:(UIRegion *)arg1 ;
-(UIRegion *)region;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(id)_initWithField:(id)arg1 ;
-(void)setSmoothness:(double)arg1 ;
-(void)setAnimationSpeed:(double)arg1 ;
-(void)_addItem:(id)arg1 ;
-(void)setFalloff:(double)arg1 ;
-(double)falloff;
-(void)setMinimumRadius:(double)arg1 ;
-(double)minimumRadius;
-(double)smoothness;
-(double)animationSpeed;
-(PKPhysicsField *)_field;
@end

