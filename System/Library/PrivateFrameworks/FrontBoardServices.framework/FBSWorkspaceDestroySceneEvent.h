/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSSceneTransitionContext;

@interface FBSWorkspaceDestroySceneEvent : FBSWorkspaceSceneEvent {

	FBSSceneTransitionContext* _transitionContext;

}

@property (nonatomic,retain) FBSSceneTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
-(void)dealloc;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(FBSSceneTransitionContext *)transitionContext;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

