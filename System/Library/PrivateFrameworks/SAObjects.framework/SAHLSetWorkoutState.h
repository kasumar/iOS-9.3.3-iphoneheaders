/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAHLWorkoutState;

@interface SAHLSetWorkoutState : SADomainCommand

@property (nonatomic,retain) SAHLWorkoutState * targetWorkoutState; 
+(id)setWorkoutState;
+(id)setWorkoutStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(SAHLWorkoutState *)targetWorkoutState;
-(void)setTargetWorkoutState:(SAHLWorkoutState *)arg1 ;
-(id)encodedClassName;
@end

