/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <FrontBoard/FBWindow.h>

@protocol SBWindowLayoutStrategy;
@class SBRecycledViewsContainer;

@interface SBWindow : FBWindow {

	SBRecycledViewsContainer* _recycledViewsContainerView;
	id<SBWindowLayoutStrategy> _layoutStrategy;

}

@property (nonatomic,readonly) id<SBWindowLayoutStrategy> layoutStrategy;              //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
+(BOOL)sb_autorotates;
+(id)defaultLayoutStrategy;
+(BOOL)sb_disableStatusBarHeightChanges;
-(void)setAlphaAndObeyBecauseIAmTheWindowManager:(double)arg1 ;
-(id)initWithScreen:(id)arg1 debugName:(id)arg2 ;
-(id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5 ;
-(id)initWithScreen:(id)arg1 debugName:(id)arg2 rootViewController:(id)arg3 ;
-(id)recycledViewsContainer;
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4 ;
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 ;
-(id<SBWindowLayoutStrategy>)layoutStrategy;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)description;
-(void)setAutorotates:(BOOL)arg1 forceUpdateInterfaceOrientation:(BOOL)arg2 ;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
@end

