/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBClientSideAnimation.h>

@class CASpringAnimation;

@interface SBSpringClientSideAnimation : SBClientSideAnimation {

	CASpringAnimation* _springAnimation;
	double _completionEpsilon;

}

@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) double stiffness; 
@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double velocity; 
@property (assign,nonatomic) double completionEpsilon;              //@synthesize completionEpsilon=_completionEpsilon - In the implementation block
+(id)criticallyDampedSpringAnimation;
-(void)setCompletionEpsilon:(double)arg1 ;
-(double)completionEpsilon;
-(id)init;
-(void)setVelocity:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)_solveForInput:(double)arg1 ;
-(double)velocity;
-(double)damping;
-(double)mass;
-(void)_updateDuration;
-(double)stiffness;
@end

