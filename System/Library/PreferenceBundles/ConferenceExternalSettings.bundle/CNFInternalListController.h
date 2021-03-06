/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/ConferenceExternalSettings.bundle/ConferenceExternalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConferenceExternalSettings/ConferenceExternalSettings-Structs.h>
#import <Preferences/PSListController.h>

@class IMServiceImpl, FTRegConnectionHandler;

@interface CNFInternalListController : PSListController {

	SCPreferencesRef _prefs;
	IMServiceImpl* _service;
	FTRegConnectionHandler* _connectionHandler;

}

@property (nonatomic,retain) IMServiceImpl * service;              //@synthesize service=_service - In the implementation block
-(id)autoAnswerInvites:(id)arg1 ;
-(void)setAllowNonWifiCalls:(id)arg1 specifier:(id)arg2 ;
-(id)environment:(id)arg1 ;
-(void)setDNSLogging:(id)arg1 specifier:(id)arg2 ;
-(id)useBlurStyle:(id)arg1 ;
-(id)notifySMS:(id)arg1 ;
-(void)clearLogs:(id)arg1 ;
-(id)allowNonWifiCalls:(id)arg1 ;
-(void)dumpLastVC:(id)arg1 ;
-(void)daemonConnectionChanged:(id)arg1 ;
-(id)conferenceDebugLoggingDefaults;
-(void)loginStatusChanged:(id)arg1 ;
-(void)setNotifySMS:(id)arg1 specifier:(id)arg2 ;
-(id)registrationSMSAttempts:(id)arg1 ;
-(id)registrationLoggingEnabled:(id)arg1 ;
-(void)resetSMSCounter:(id)arg1 ;
-(void)syncAgentLogSettings;
-(void)setAutoAnswerInvites:(id)arg1 specifier:(id)arg2 ;
-(id)conferencePushToken:(id)arg1 ;
-(void)setEnvironment:(id)arg1 specifier:(id)arg2 ;
-(void)viewAccountsTapped:(id)arg1 ;
-(id)allowAnyNetworkCalls:(id)arg1 ;
-(id)conferenceDebugLogging:(id)arg1 ;
-(id)allowFaceTimeAudioFromDialer:(id)arg1 ;
-(void)setUseBlurStyle:(id)arg1 specifier:(id)arg2 ;
-(id)DNSLogging:(id)arg1 ;
-(void)registrationStatusChanged:(id)arg1 ;
-(void)setConferenceDebugLogging:(id)arg1 specifier:(id)arg2 ;
-(void)setAllowAnyNetworkCalls:(id)arg1 specifier:(id)arg2 ;
-(void)setAllowFaceTimeAudioFromDialer:(id)arg1 specifier:(id)arg2 ;
-(void)setRegistrationLoggingEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setService:(IMServiceImpl *)arg1 ;
-(IMServiceImpl *)service;
-(id)specifiers;
@end

