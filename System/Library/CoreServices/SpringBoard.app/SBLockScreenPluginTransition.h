/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLockScreenPluginTransitionContext;

@interface SBLockScreenPluginTransition : NSObject {

	SBLockScreenPluginTransitionContext* _context;

}

@property (nonatomic,readonly) SBLockScreenPluginTransitionContext * context;              //@synthesize context=_context - In the implementation block
-(void)_removeFromView;
-(void)_addToView;
-(void)_removeViewFromHierarchy:(id)arg1 ;
-(SBLockScreenPluginTransitionContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)beginTransition;
@end

