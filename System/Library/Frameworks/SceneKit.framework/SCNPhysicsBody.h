/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNNode, SCNPhysicsShape;

@interface SCNPhysicsBody : NSObject <NSCopying, NSSecureCoding> {

	SCNNode* _node;
	double _mass;
	double _charge;
	double _friction;
	double _restitution;
	double _rollingFriction;
	SCNPhysicsShape* _physicsShape;
	long long _type;
	double _damping;
	SCNVector4 _angularVelocity;
	double _angularDamping;
	SCNVector3 _velocityFactor;
	SCNVector3 _angularVelocityFactor;
	SCNVector3 _velocity;
	BOOL _ignoreGravity;
	BOOL _explicitMomentOfInertia;
	SCNVector3 _momentOfInertia;
	unsigned long long _categoryBitMask;
	unsigned long long _collisionBitMask;
	unsigned long long _contactTestBitMask;
	BOOL _allowsResting;
	BOOL _isDefaultShape;
	btRigidBody* _body;

}

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) SCNVector3 momentOfInertia; 
@property (assign,nonatomic) BOOL usesDefaultMomentOfInertia; 
@property (assign,nonatomic) double charge; 
@property (assign,nonatomic) double friction; 
@property (assign,nonatomic) double restitution; 
@property (assign,nonatomic) double rollingFriction; 
@property (nonatomic,retain) SCNPhysicsShape * physicsShape; 
@property (nonatomic,readonly) BOOL isResting; 
@property (assign,nonatomic) BOOL allowsResting; 
@property (assign,nonatomic) SCNVector3 velocity; 
@property (assign,nonatomic) SCNVector4 angularVelocity; 
@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double angularDamping; 
@property (assign,nonatomic) SCNVector3 velocityFactor; 
@property (assign,nonatomic) SCNVector3 angularVelocityFactor; 
@property (assign,nonatomic) unsigned long long categoryBitMask; 
@property (assign,nonatomic) unsigned long long collisionBitMask; 
@property (assign,nonatomic) unsigned long long contactTestBitMask; 
@property (assign,getter=isAffectedByGravity,nonatomic) BOOL affectedByGravity; 
+(BOOL)supportsSecureCoding;
+(id)bodyWithType:(long long)arg1 shape:(id)arg2 ;
+(id)staticBody;
+(id)kinematicBody;
+(id)dynamicBody;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copy;
-(void)setVelocity:(SCNVector3)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(double)charge;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCharge:(double)arg1 ;
-(SCNVector3)velocity;
-(double)damping;
-(void)setFriction:(double)arg1 ;
-(void)setRestitution:(double)arg1 ;
-(double)friction;
-(void)setAngularDamping:(double)arg1 ;
-(SCNVector4)angularVelocity;
-(void)setAngularVelocity:(SCNVector4)arg1 ;
-(double)restitution;
-(double)angularDamping;
-(double)mass;
-(id)_owner;
-(void)resetTransform;
-(void)_setOwner:(id)arg1 ;
-(unsigned long long)categoryBitMask;
-(void)setCategoryBitMask:(unsigned long long)arg1 ;
-(void)setAffectedByGravity:(BOOL)arg1 ;
-(unsigned long long)collisionBitMask;
-(void)setCollisionBitMask:(unsigned long long)arg1 ;
-(void)setContactTestBitMask:(unsigned long long)arg1 ;
-(BOOL)isResting;
-(btRigidBody*)_handle;
-(void)_removeOwner;
-(C3DSceneRef)sceneRef;
-(btRigidBody*)_createBody;
-(id)initWithType:(long long)arg1 shape:(id)arg2 ;
-(btCollisionShape*)_shapeHandleWithShape:(id)arg1 owner:(id)arg2 ;
-(void)moveToTransform:(SCNMatrix4)arg1 ;
-(unsigned long long)contactTestBitMask;
-(void)setMomentOfInertia:(SCNVector3)arg1 ;
-(void)_didDecodeSCNPhysicsBody:(id)arg1 ;
-(BOOL)respondsToCollision;
-(SCNVector3)momentOfInertia;
-(void)setUsesDefaultMomentOfInertia:(BOOL)arg1 ;
-(BOOL)usesDefaultMomentOfInertia;
-(BOOL)isAffectedByGravity;
-(void)applyForce:(SCNVector3)arg1 impulse:(BOOL)arg2 ;
-(void)applyTorque:(SCNVector4)arg1 impulse:(BOOL)arg2 ;
-(void)clearAllForces;
-(void)resetToTransform:(SCNMatrix4)arg1 ;
-(void)moveToPosition:(SCNVector3)arg1 ;
-(void)rotateToAxisAngle:(SCNVector4)arg1 ;
-(void)applyForce:(SCNVector3)arg1 atPosition:(SCNVector3)arg2 impulse:(BOOL)arg3 ;
-(void)setPhysicsShape:(SCNPhysicsShape *)arg1 ;
-(double)rollingFriction;
-(void)setRollingFriction:(double)arg1 ;
-(SCNPhysicsShape *)physicsShape;
-(BOOL)allowsResting;
-(void)setAllowsResting:(BOOL)arg1 ;
-(SCNVector3)velocityFactor;
-(void)setVelocityFactor:(SCNVector3)arg1 ;
-(SCNVector3)angularVelocityFactor;
-(void)setAngularVelocityFactor:(SCNVector3)arg1 ;
-(void)_activate;
@end

