/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertDelegate.h>
#import <SpringBoard/SBAlertWindowDelegate.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBAlertManagerDelegate;
@class UIScreen, FBScene, NSSet, FBSScene, SBAlertWindow, NSMutableArray, NSMapTable, NSMutableSet, NSString;

@interface SBAlertManager : NSObject <SBAlertDelegate, SBAlertWindowDelegate, FBSceneLayerManagerObserver, BSDescriptionProviding> {

	UIScreen* _screen;
	FBScene* _alertServerScene;
	NSSet* _alertClientSceneOcclusions;
	FBSScene* _alertClientScene;
	SBAlertWindow* _alertWindow;
	SBAlertWindow* _deferredAlertWindow;
	NSMutableArray* _alerts;
	NSMapTable* _observers;
	NSMutableSet* _removalPendingAlerts;
	BOOL _deactivatingAllAlerts;
	struct {
		unsigned deactivateDismissed : 1;
		unsigned newWindow : 1;
		unsigned defaultShouldAutorotate : 1;
		unsigned defaultPresentationOrientation : 1;
		unsigned defaultSupportedOrientations : 1;
	}  _delegateFlags;
	id<SBAlertManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBAlertManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBAlertWindow * alertWindow;                             //@synthesize alertWindow=_alertWindow - In the implementation block
@property (nonatomic,retain) SBAlertWindow * deferredAlertWindow;                     //@synthesize deferredAlertWindow=_deferredAlertWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activeAlert;
-(id)allAlerts;
-(BOOL)hasStackedAlerts;
-(BOOL)deactivate:(id)arg1 ;
-(BOOL)containsAlert:(id)arg1 ;
-(id)initWithScreen:(id)arg1 delegate:(id)arg2 ;
-(void)deactivateAlertsAfterLaunch;
-(id)stackedAlertsIncludingActiveAlert:(BOOL)arg1 ;
-(BOOL)defaultShouldAutorotateForAlertWindow:(id)arg1 ;
-(long long)defaultInterfaceOrientationForPresentationOfAlertWindow:(id)arg1 ;
-(unsigned long long)defaultSupportedInterfaceOrientationsForAlertWindow:(id)arg1 ;
-(BOOL)defaultShouldAutorotateForAlert:(id)arg1 ;
-(long long)defaultInterfaceOrientationForPresentationOfAlert:(id)arg1 ;
-(unsigned long long)defaultSupportedInterfaceOrientationsForAlert:(id)arg1 ;
-(void)alertWillDismiss:(id)arg1 ;
-(void)alertIsReadyToBeDeactivated:(id)arg1 ;
-(void)alert:(id)arg1 requestsBackgroundStyleChangeWithAnimationFactory:(id)arg2 ;
-(void)alertDidChangeOrientationEventsEnabled:(id)arg1 ;
-(void)alertIsReadyToBeRemovedFromView:(id)arg1 ;
-(void)alertDidChangeOccluding:(id)arg1 ;
-(void)deactivateAll;
-(unsigned long long)_alertCount;
-(id)_alertAtIndex:(unsigned long long)arg1 ;
-(void)_noteWillDisplayAlert:(id)arg1 ;
-(void)_deactivate:(id)arg1 ;
-(void)_noteFinishedWithAlert:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)_canAutorotate;
-(void)_noteAlertWillDismiss:(id)arg1 ;
-(void)_activate:(id)arg1 ;
-(void)_makeAlertWindowOpaque:(BOOL)arg1 ;
-(void)_resetAlertWindowOpacity;
-(void)_createAlertWindowIfNecessaryForAlert:(id)arg1 ;
-(void)_removeFromView:(id)arg1 oldAlertIndex:(unsigned long long)arg2 ;
-(void)setDeferredAlertWindow:(SBAlertWindow *)arg1 ;
-(void)alert:(id)arg1 didChangeStatusBarVisibility:(BOOL)arg2 ;
-(void)alertWantsToForceWallpaperTunnelUpdate:(id)arg1 ;
-(void)setAlertsShouldDeactivateAfterLaunch;
-(void)applicationWillAnimateActivation;
-(void)applicationFinishedAnimatingBeneathAlert;
-(SBAlertWindow *)deferredAlertWindow;
-(void)setDelegate:(id<SBAlertManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<SBAlertManagerDelegate>)delegate;
-(void)addObserver:(id)arg1 ;
-(id)screen;
-(SBAlertWindow *)alertWindow;
-(void)removeObserver:(id)arg1 ;
-(void)setAlertWindow:(SBAlertWindow *)arg1 ;
-(void)activate:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)sceneLayerManagerWillStartTrackingLayers:(id)arg1 ;
-(void)sceneLayerManagerDidStopTrackingLayers:(id)arg1 ;
-(id)contextHostManager;
@end

