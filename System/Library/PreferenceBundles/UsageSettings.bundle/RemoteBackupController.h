/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <UsageSettings/DelayedPushDelegate.h>

@class DeviceIdentificationView, NSString, NSURL, SpinnerBezel, PreferencesRemoteUIDelegate, UIAlertView;

@interface RemoteBackupController : PSListController <NSURLConnectionDelegate, DelayedPushDelegate> {

	DeviceIdentificationView* _deviceIdentificationView;
	NSString* _deviceName;
	NSString* _deviceIdentifier;
	NSString* _backupSizeString;
	NSString* _lastBackupDateString;
	NSURL* _deletionURL;
	NSURL* _deviceImageURL;
	SpinnerBezel* _deletionBezel;
	PreferencesRemoteUIDelegate* _remoteDelegate;
	UIAlertView* _remoteBackupAlertView;

}

@property (nonatomic,retain) NSString * deviceName;                                     //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                               //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * backupSizeString;                               //@synthesize backupSizeString=_backupSizeString - In the implementation block
@property (nonatomic,retain) NSString * lastBackupDateString;                           //@synthesize lastBackupDateString=_lastBackupDateString - In the implementation block
@property (nonatomic,retain) NSURL * deletionURL;                                       //@synthesize deletionURL=_deletionURL - In the implementation block
@property (nonatomic,retain) NSURL * deviceImageURL;                                    //@synthesize deviceImageURL=_deviceImageURL - In the implementation block
@property (nonatomic,retain) PreferencesRemoteUIDelegate * remoteDelegate;              //@synthesize remoteDelegate=_remoteDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)specifier;
-(void)loadFinished:(id)arg1 ;
-(void)setDeletionURL:(NSURL *)arg1 ;
-(void)deleteBackupConfirmed;
-(NSString *)backupSizeString;
-(void)startDeletionBezel;
-(void)endDeletionBezel;
-(void)setLastBackupDateString:(NSString *)arg1 ;
-(void)setBackupSizeString:(NSString *)arg1 ;
-(NSString *)lastBackupDateString;
-(NSURL *)deletionURL;
-(void)loadFailed:(id)arg1 withError:(id)arg2 ;
-(void)setDeviceImageURL:(NSURL *)arg1 ;
-(void)loadPropertyValuesFromDictionary:(id)arg1 ;
-(NSURL *)deviceImageURL;
-(void)loadStarted:(id)arg1 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)loadView;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)needsToShowToolbarInPrefsAppRoot;
-(void)setRemoteDelegate:(PreferencesRemoteUIDelegate *)arg1 ;
-(PreferencesRemoteUIDelegate *)remoteDelegate;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)specifiers;
-(void)confirmDelete:(id)arg1 ;
-(NSString *)deviceName;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
@end

