/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXPasscodeViewControllerDelegate <NSObject>
@optional
-(void)passcodeViewController:(id)arg1 passcodeViewIsVisible:(BOOL)arg2;
-(void)passcodeViewController:(id)arg1 wasDismissedWithReason:(int)arg2;
-(BOOL)shouldShowCancelButtonForPasscodeViewController:(id)arg1;
-(void)passcodeViewController:(id)arg1 isPasscode:(id)arg2 correctWithCompletionHandler:(/*^block*/id)arg3;
-(void)passcodeViewController:(id)arg1 didFinishSettingUpPasscode:(id)arg2;

@end

