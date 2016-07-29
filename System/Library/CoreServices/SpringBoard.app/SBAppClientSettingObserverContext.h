/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBScene, SBApplication, UIApplicationSceneSettings, UIApplicationSceneClientSettings, FBSSceneTransitionContext;

@interface SBAppClientSettingObserverContext : NSObject {

	FBScene* _scene;
	SBApplication* _app;
	UIApplicationSceneSettings* _settings;
	UIApplicationSceneClientSettings* _oldClientSettings;
	UIApplicationSceneClientSettings* _updatedClientSettings;
	FBSSceneTransitionContext* _transition;

}

@property (nonatomic,retain) FBScene * scene;                                                       //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) SBApplication * app;                                                   //@synthesize app=_app - In the implementation block
@property (nonatomic,retain) UIApplicationSceneSettings * settings;                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) UIApplicationSceneClientSettings * oldClientSettings;                  //@synthesize oldClientSettings=_oldClientSettings - In the implementation block
@property (nonatomic,retain) UIApplicationSceneClientSettings * updatedClientSettings;              //@synthesize updatedClientSettings=_updatedClientSettings - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transition;                                //@synthesize transition=_transition - In the implementation block
-(void)setOldClientSettings:(UIApplicationSceneClientSettings *)arg1 ;
-(void)setUpdatedClientSettings:(UIApplicationSceneClientSettings *)arg1 ;
-(UIApplicationSceneClientSettings *)updatedClientSettings;
-(UIApplicationSceneClientSettings *)oldClientSettings;
-(UIApplicationSceneSettings *)settings;
-(void)setTransition:(FBSSceneTransitionContext *)arg1 ;
-(FBSSceneTransitionContext *)transition;
-(void)setSettings:(UIApplicationSceneSettings *)arg1 ;
-(SBApplication *)app;
-(void)setApp:(SBApplication *)arg1 ;
-(FBScene *)scene;
-(void)setScene:(FBScene *)arg1 ;
@end

