/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink, NSMutableSet;

@interface TKDisplayLinkManager : NSObject {

	BOOL _hasUpdatedTargetActions;
	BOOL _handlingDisplayRefresh;
	CADisplayLink* _storedDisplayLink;
	NSMutableSet* _activeTargetActions;
	NSMutableSet* _updatedTargetActions;
	unsigned long long _warmUpModeRequirementsCount;

}

@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) unsigned long long frameInterval; 
@property (setter=_setDisplayLink:,nonatomic,retain) CADisplayLink * _displayLink; 
@property (setter=_setStoredDisplayLink:,nonatomic,retain) CADisplayLink * _storedDisplayLink;                                              //@synthesize storedDisplayLink=_storedDisplayLink - In the implementation block
@property (setter=_setActiveTargetActions:,nonatomic,retain) NSMutableSet * _activeTargetActions;                                           //@synthesize activeTargetActions=_activeTargetActions - In the implementation block
@property (setter=_setUpdatedTargetActions:,nonatomic,retain) NSMutableSet * _updatedTargetActions;                                         //@synthesize updatedTargetActions=_updatedTargetActions - In the implementation block
@property (assign,setter=_setHasUpdatedTargetActions:,nonatomic) BOOL _hasUpdatedTargetActions;                                             //@synthesize hasUpdatedTargetActions=_hasUpdatedTargetActions - In the implementation block
@property (assign,setter=_setHandlingDisplayRefresh:,getter=_isHandlingDisplayRefresh,nonatomic) BOOL _handlingDisplayRefresh;              //@synthesize handlingDisplayRefresh=_handlingDisplayRefresh - In the implementation block
@property (assign,setter=_setWarmUpModeRequirementsCount:,nonatomic) unsigned long long _warmUpModeRequirementsCount;                       //@synthesize warmUpModeRequirementsCount=_warmUpModeRequirementsCount - In the implementation block
@property (getter=_isWarmUpModeEnabled,nonatomic,readonly) BOOL _warmUpModeEnabled; 
+(void)_releaseCurrentDisplayLinkManager;
+(id)currentDisplayLinkManager;
-(void)dealloc;
-(id)init;
-(double)timestamp;
-(double)duration;
-(unsigned long long)frameInterval;
-(void)_displayDidRefresh:(id)arg1 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 frameInterval:(unsigned long long)arg3 ;
-(id)_prepareUpdatedTargetActionsForModification;
-(void)_didAddFirstTargetAction;
-(void)_didRemoveLastTargetAction;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)removeTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)beginRequiringWarmUpMode;
-(void)endRequiringWarmUpMode;
-(void)_setDisplayLink:(id)arg1 ;
-(CADisplayLink *)_displayLink;
-(BOOL)isPaused;
-(void)_setActiveTargetActions:(id)arg1 ;
-(void)_setUpdatedTargetActions:(id)arg1 ;
-(CADisplayLink *)_storedDisplayLink;
-(void)_setStoredDisplayLink:(id)arg1 ;
-(BOOL)_isHandlingDisplayRefresh;
-(NSMutableSet *)_activeTargetActions;
-(NSMutableSet *)_updatedTargetActions;
-(BOOL)_hasUpdatedTargetActions;
-(void)_setHasUpdatedTargetActions:(BOOL)arg1 ;
-(BOOL)_isWarmUpModeEnabled;
-(unsigned long long)_warmUpModeRequirementsCount;
-(void)_setWarmUpModeRequirementsCount:(unsigned long long)arg1 ;
-(void)_setHandlingDisplayRefresh:(BOOL)arg1 ;
@end

