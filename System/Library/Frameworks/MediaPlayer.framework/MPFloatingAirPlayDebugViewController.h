/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/AirPlayDiagnosticsFullscreenControllerDelegate.h>

@class UIWindow, AirPlayDiagnosticsFullscreenController, NSString;

@interface MPFloatingAirPlayDebugViewController : UINavigationController <AirPlayDiagnosticsFullscreenControllerDelegate> {

	UIWindow* _floatingWindow;
	BOOL _presentedAnimated;
	AirPlayDiagnosticsFullscreenController* _airPlayDiagsController;

}

@property (nonatomic,readonly) AirPlayDiagnosticsFullscreenController * airPlayDiagsController;              //@synthesize airPlayDiagsController=_airPlayDiagsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)_destroyFloatingWindow;
-(void)presentFromFloatingWindowAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)airPlayDiagnosticsContentViewController:(id)arg1 didComplete:(BOOL)arg2 ;
-(AirPlayDiagnosticsFullscreenController *)airPlayDiagsController;
@end

