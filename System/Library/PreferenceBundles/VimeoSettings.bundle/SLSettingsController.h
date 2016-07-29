/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/VimeoSettings.bundle/VimeoSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <FacebookSettings/ACUIAppInstallerDelegate.h>

@class ACUIAppDescription, ACUIAppInstaller, PSSpecifier, NSString;

@interface SLSettingsController : ACUIViewController <ACUIAppInstallerDelegate> {

	ACUIAppDescription* _appDescription;
	ACUIAppInstaller* _appInstaller;
	BOOL _pendingAppStoreAvailabilityCheck;
	BOOL _pendingAppDownloadabilityCheck;
	PSSpecifier* _installSpecifier;
	PSSpecifier* _installAppSpecifier;

}

@property (nonatomic,retain) PSSpecifier * installAppSpecifier;              //@synthesize installAppSpecifier=_installAppSpecifier - In the implementation block
@property (nonatomic,retain) ACUIAppInstaller * appInstaller;                //@synthesize appInstaller=_appInstaller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ACUIAppInstaller *)appInstaller;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 appDescription:(id)arg3 publisherURL:(id)arg4 storefrontsWithoutTheApp:(id)arg5 ;
-(PSSpecifier *)installAppSpecifier;
-(void)shouldDisplayAppDownloadAlert:(/*^block*/id)arg1 ;
-(void)_initializeAppInstallerWithPublisherURL:(id)arg1 storefrontsWithoutTheApp:(id)arg2 ;
-(BOOL)_expectedAppAvailabilityInCurrentAppStore:(id)arg1 ;
-(void)_installButtonTapped:(id)arg1 ;
-(void)_updateInstallCell:(id)arg1 ;
-(void)setInstallAppSpecifier:(PSSpecifier *)arg1 ;
-(void)setAppInstaller:(ACUIAppInstaller *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)appIsDownloadableDidChange:(id)arg1 ;
-(void)appInstallerWillStart:(id)arg1 ;
-(void)appIsAvailableInStoreDidChange:(id)arg1 ;
@end

