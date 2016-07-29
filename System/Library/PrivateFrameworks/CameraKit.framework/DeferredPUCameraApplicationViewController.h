/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CMKApplicationViewController.h>

@class CMKCameraRollSpec, DeferredFrameworkLoader;

@interface DeferredPUCameraApplicationViewController : CMKApplicationViewController {

	CMKCameraRollSpec* _spec;
	DeferredFrameworkLoader* _deferredLoader;

}

@property (nonatomic,retain) CMKCameraRollSpec * spec;                              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) DeferredFrameworkLoader * deferredLoader;              //@synthesize deferredLoader=_deferredLoader - In the implementation block
-(BOOL)definesPresentationContext;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)navigationController:(id)arg1 animatorForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)navigationController:(id)arg1 interactionControllerUsingAnimator:(id)arg2 ;
-(BOOL)_navigationControllerShouldCrossFadeBottomBars:(id)arg1 ;
-(id)newAlbumNavigationControllerForCameraRoll:(id)arg1 ;
-(void)prepareAlbumNavigationControllerForReuse:(id)arg1 withCameraRoll:(id)arg2 ;
-(void)reloadAlbumNavigationController:(id)arg1 withCameraRoll:(id)arg2 ;
-(id)_initWithSessionID:(id)arg1 usesCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3 ;
-(id)initForCurrentPlatformWithSessionID:(id)arg1 startPreviewImmediately:(BOOL)arg2 ;
-(id)initForCurrentPlatformWithSessionID:(id)arg1 usesCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3 ;
-(DeferredFrameworkLoader *)deferredLoader;
-(void)setDeferredLoader:(DeferredFrameworkLoader *)arg1 ;
-(CMKCameraRollSpec *)spec;
-(void)setSpec:(CMKCameraRollSpec *)arg1 ;
@end

