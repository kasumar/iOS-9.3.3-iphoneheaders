/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol SKPhysicsContactDelegate;
@interface SKPhysicsWorld : NSObject <NSCoding> {

	double speed;
	id<SKPhysicsContactDelegate> _contactDelegate;
	CGVector _gravity;

}

@property (assign,nonatomic) CGVector gravity;                                          //@synthesize gravity=_gravity - In the implementation block
@property (assign,nonatomic) double speed; 
@property (assign,nonatomic) id<SKPhysicsContactDelegate> contactDelegate;              //@synthesize contactDelegate=_contactDelegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(double)speed;
-(void)removeJoint:(id)arg1 ;
-(void)addJoint:(id)arg1 ;
-(void)addBody:(id)arg1 ;
-(void)removeBody:(id)arg1 ;
-(id<SKPhysicsContactDelegate>)contactDelegate;
-(void)setContactDelegate:(id<SKPhysicsContactDelegate>)arg1 ;
-(void)enumerateBodiesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3 ;
-(CGVector)gravity;
-(void)setGravity:(CGVector)arg1 ;
-(id)bodies;
-(void)removeAllJoints;
-(BOOL)hasBodies;
-(BOOL)hasFields;
-(void)removeAllBodies;
-(void)enumerateBodiesAtPoint:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateBodiesAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)bodyAtPoint:(CGPoint)arg1 ;
-(id)bodyInRect:(CGRect)arg1 ;
-(id)bodyAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
-(3)sampleFields:;
-(3)sampleFieldsAt:;
-(id)fields;
@end

