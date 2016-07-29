/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSArray, UIImage, NSString;

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {

	UIAlertView* _alertSheet;
	BOOL _orderOverSBAlert;
	BOOL _preventLockOver;
	BOOL _didEverActivate;
	BOOL _didEverDeactivate;
	BOOL _ignoreIfAlreadyDisplaying;
	BOOL _didPlayPresentationSound;
	BOOL _allowInSetup;
	BOOL _pendInSetupIfNotAllowed;
	BOOL _pendWhileKeyBagLocked;
	NSArray* _allowedBundleIDs;
	BOOL _allowInCar;
	BOOL _allowMessageInCar;
	UIImage* _iconImage;

}

@property (assign,nonatomic) BOOL ignoreIfAlreadyDisplaying;              //@synthesize ignoreIfAlreadyDisplaying=_ignoreIfAlreadyDisplaying - In the implementation block
@property (assign,nonatomic) BOOL allowInSetup;                           //@synthesize allowInSetup=_allowInSetup - In the implementation block
@property (assign,nonatomic) BOOL pendInSetupIfNotAllowed;                //@synthesize pendInSetupIfNotAllowed=_pendInSetupIfNotAllowed - In the implementation block
@property (assign,nonatomic) BOOL pendWhileKeyBagLocked;                  //@synthesize pendWhileKeyBagLocked=_pendWhileKeyBagLocked - In the implementation block
@property (nonatomic,retain) NSArray * allowedBundleIDs;                  //@synthesize allowedBundleIDs=_allowedBundleIDs - In the implementation block
@property (assign,nonatomic) BOOL allowInCar;                             //@synthesize allowInCar=_allowInCar - In the implementation block
@property (assign,nonatomic) BOOL allowMessageInCar;                      //@synthesize allowMessageInCar=_allowMessageInCar - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                         //@synthesize iconImage=_iconImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_alertItemsController;
+(void)activateAlertItem:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)dismiss;
-(UIImage *)iconImage;
-(void)dismiss:(int)arg1 ;
-(id)alertController;
-(void)setAllowInSetup:(BOOL)arg1 ;
-(void)setPendInSetupIfNotAllowed:(BOOL)arg1 ;
-(void)setAllowMessageInCar:(BOOL)arg1 ;
-(BOOL)didPlayPresentationSound;
-(void)_playPresentationSound;
-(BOOL)hasActiveKeyboardOnScreen;
-(void)cleanPreviousConfiguration;
-(BOOL)allowLockScreenDismissal;
-(BOOL)allowAutoUnlock;
-(BOOL)undimsScreen;
-(BOOL)unlocksScreen;
-(int)unlockSource;
-(BOOL)togglesMediaControls;
-(BOOL)dismissOnModalDisplayActivation;
-(BOOL)isCriticalAlert;
-(void)playPresentationSound;
-(id)shortLockLabel;
-(double)autoDismissInterval;
-(void)setOrderOverSBAlert:(BOOL)arg1 ;
-(BOOL)preventLockOver;
-(void)setPreventLockOver:(BOOL)arg1 ;
-(void)_noteDeactivated;
-(BOOL)_didEverDeactivate;
-(BOOL)_didEverActivate;
-(void)didActivate;
-(void)screenWillUndim;
-(void)didFailToActivate;
-(void)willDeactivateForReason:(int)arg1 ;
-(void)noteVolumeOrLockPressed;
-(int)alertItemNotificationType;
-(id)alertItemNotificationDate;
-(id)alertItemNotificationSender;
-(BOOL)behavesSuperModally;
-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(BOOL)preventInterruption;
-(int)alertPriority;
-(BOOL)displayActionButtonOnLockScreen;
-(BOOL)allowInLoginWindow;
-(id)prepareNewAlertSheetWithLockedState:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)dismissesAutomatically;
-(BOOL)_dismissesOverlaysOnLockScreen;
-(BOOL)ignoreIfAlreadyDisplaying;
-(void)setIgnoreIfAlreadyDisplaying:(BOOL)arg1 ;
-(BOOL)allowInSetup;
-(BOOL)pendInSetupIfNotAllowed;
-(BOOL)pendWhileKeyBagLocked;
-(void)setPendWhileKeyBagLocked:(BOOL)arg1 ;
-(NSArray *)allowedBundleIDs;
-(void)setAllowedBundleIDs:(NSArray *)arg1 ;
-(BOOL)allowInCar;
-(void)setAllowInCar:(BOOL)arg1 ;
-(BOOL)allowMessageInCar;
-(void)setIconImage:(UIImage *)arg1 ;
-(id)alertSheet;
-(void)didDeactivateForReason:(int)arg1 ;
-(void)buttonDismissed;
-(Class)alertSheetClass;
-(void)willRelockForButtonPress:(BOOL)arg1 ;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)performUnlockAction;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)willActivate;
-(id)lockLabel;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(id)sound;
@end

