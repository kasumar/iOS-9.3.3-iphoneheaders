/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, GKState;

@interface GKStateMachine : NSObject {

	NSDictionary* _states;
	GKState* _currentState;

}

@property (nonatomic,readonly) GKState * currentState;              //@synthesize currentState=_currentState - In the implementation block
+(id)stateMachineWithStates:(id)arg1 ;
-(id)init;
-(GKState *)currentState;
-(void)updateWithDeltaTime:(double)arg1 ;
-(id)initWithStates:(id)arg1 ;
-(id)stateForClass:(Class)arg1 ;
-(BOOL)canEnterState:(Class)arg1 ;
-(void)forceEnterState:(Class)arg1 ;
-(BOOL)enterState:(Class)arg1 ;
@end
