/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@class NSDictionary, NSString;

@interface GKPreferences : NSObject {

	BOOL _shouldSynchronizeOnNextRead;
	BOOL _webKitInspectElementEnabled;
	NSDictionary* _overrideValues;

}

@property (assign,nonatomic) id<GKPreferencesDelegate> preferencesDelegate; 
@property (getter=isStoreDemoModeEnabled,nonatomic,readonly) BOOL storeDemoModeEnabled; 
@property (getter=isAddingFriendsRestricted,nonatomic,readonly) BOOL addingFriendsRestricted; 
@property (getter=isMultiplayerGamingRestricted,nonatomic,readonly) BOOL multiplayerGamingRestricted; 
@property (getter=isAppInstallationRestricted,nonatomic,readonly) BOOL appInstallationRestricted; 
@property (getter=isAccountModificationRestricted,nonatomic,readonly) BOOL accountModificationRestricted; 
@property (getter=isGameCenterRestricted,nonatomic,readonly) BOOL gameCenterRestricted; 
@property (copy) NSDictionary * overrideValues;                                                                        //@synthesize overrideValues=_overrideValues - In the implementation block
@property (assign,nonatomic) long long environment; 
@property (nonatomic,retain) NSString * storeBagURL; 
@property (assign,nonatomic) unsigned long long mescalSetupRetries; 
@property (assign,nonatomic) unsigned long long loginDisableThreshold; 
@property (assign,nonatomic) BOOL allowUnsignedBag; 
@property (assign,nonatomic) BOOL useTestProtocols; 
@property (assign,nonatomic) double terminationInterval; 
@property (assign,nonatomic) double garbageCollectionInterval; 
@property (assign,nonatomic) double minimumCacheTTL; 
@property (assign,nonatomic) double cacheTTLOverride; 
@property (assign,nonatomic) double operationTimeout; 
@property (assign,nonatomic) double operationRetryDelay; 
@property (assign,nonatomic) unsigned long long operationRetryCount; 
@property (assign,nonatomic) double debugRequestTimeout; 
@property (assign,getter=isNotificationCenterEnabled,nonatomic) BOOL notificationCenterEnabled; 
@property (assign,nonatomic) BOOL notificationBadgesEnabled; 
@property (assign,nonatomic) BOOL notificationSoundsEnabled; 
@property (assign,nonatomic) BOOL notificationAlertsEnabled; 
@property (assign,nonatomic) BOOL verboseLogging; 
@property (assign,nonatomic) unsigned logFilter; 
@property (assign,getter=isComprehensiveLoggingEnabled,nonatomic) BOOL comprehensiveLoggingEnabled; 
@property (nonatomic,copy) NSString * testRunID; 
@property (assign,getter=isClipGestureEnabled,nonatomic) BOOL clipGestureEnabled; 
@property (assign,nonatomic) BOOL forceRelay; 
@property (assign,nonatomic) BOOL preemptiveRelay; 
@property (assign,nonatomic) long long pushEnvironment; 
@property (assign,nonatomic) long long pipeliningSetting; 
@property (assign,nonatomic) unsigned long long maxPlayersP2P; 
@property (assign,nonatomic) unsigned long long maxPlayersHosted; 
@property (assign,nonatomic) unsigned long long maxPlayersTurnBased; 
@property (assign,nonatomic) unsigned long long maxGameStateSizeTurnBased; 
@property (assign,nonatomic) unsigned long long exchangeDataMaximumSize; 
@property (assign,nonatomic) unsigned long long exchangeMaxInitiatedExchangesPerPlayer; 
@property (nonatomic,readonly) BOOL HTTPShouldUsePipelining; 
@property (nonatomic,readonly) unsigned long long maxDefaultPlayersP2P; 
@property (nonatomic,readonly) unsigned long long maxDefaultPlayersHosted; 
@property (nonatomic,readonly) unsigned long long maxDefaultPlayersTurnBased; 
@property (nonatomic,readonly) unsigned long long maxDefaultGameStateSizeTurnBased; 
@property (nonatomic,readonly) unsigned long long exchangeDataDefaultMaximumSize; 
@property (nonatomic,readonly) unsigned long long exchangeDefaultMaxInitiatedExchangesPerPlayer; 
@property (assign,nonatomic) BOOL useInternalHeader; 
@property (assign,getter=isWebKitInspectElementEnabled,nonatomic) BOOL webKitInspectElementEnabled;                    //@synthesize webKitInspectElementEnabled=_webKitInspectElementEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAnnotateImageUsage; 
@property (assign,nonatomic) BOOL shouldTrackAtlasImageUsage; 
@property (assign,nonatomic) BOOL shouldUseTestIcons; 
@property (assign,nonatomic) BOOL shouldLinkPlayerToICloud; 
@property (assign,nonatomic) BOOL shouldLinkPlayerToTwitter; 
@property (assign,nonatomic) BOOL shouldLinkPlayerToFacebook; 
@property (nonatomic,readonly) BOOL shouldDisallowInvitesFromStrangers; 
@property (assign,nonatomic) BOOL shouldAllowGameInvites; 
@property (assign,nonatomic) BOOL shouldAllowNearbyMultiplayer; 
@property (assign,nonatomic) BOOL shouldAddPlayerInfoToAddressBook; 
@property (assign,nonatomic) BOOL _shouldSynchronizeOnNextRead;                                                        //@synthesize shouldSynchronizeOnNextRead=_shouldSynchronizeOnNextRead - In the implementation block
+(id)sharedPreferences;
+(id)hostNameForEnvironment:(long long)arg1 ;
+(id)displayNameForEnvironment:(long long)arg1 ;
-(BOOL)isMultiplayerGamingRestricted;
-(BOOL)isAddingFriendsRestricted;
-(BOOL)isGameCenterRestricted;
-(id<GKPreferencesDelegate>)preferencesDelegate;
-(BOOL)restrictionEnabledForKey:(id)arg1 ;
-(void)setPreferencesDelegate:(id<GKPreferencesDelegate>)arg1 ;
-(BOOL)isAccountModificationRestricted;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isAppInstallationRestricted;
-(BOOL)isStoreDemoModeEnabled;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)synchronize;
-(long long)environment;
-(void)setEnvironment:(long long)arg1 ;
-(double)minimumCacheTTL;
-(id)initWithoutUIKitNotifications;
-(unsigned)logFilter;
-(BOOL)useTestProtocols;
-(double)operationTimeout;
-(BOOL)useInternalHeader;
-(NSString *)testRunID;
-(void)applicationWillEnterBackground:(id)arg1 ;
-(id)initWithUIKitNotifications;
-(BOOL)_shouldSynchronizeOnNextRead;
-(void)set_shouldSynchronizeOnNextRead:(BOOL)arg1 ;
-(void)removeOverrideForKey:(id)arg1 ;
-(id)preferencesValueForKey:(id)arg1 ;
-(BOOL)booleanValueForKey:(CFStringRef)arg1 defaultValue:(BOOL)arg2 ;
-(void)_didWriteKey:(CFStringRef)arg1 ;
-(void)setOverrideValues:(NSDictionary *)arg1 ;
-(long long)integerValueForKey:(CFStringRef)arg1 defaultValue:(long long)arg2 ;
-(void)setIntegerValue:(long long)arg1 forKey:(CFStringRef)arg2 ;
-(BOOL)booleanValueForKey:(CFStringRef)arg1 ;
-(void)setBooleanValue:(BOOL)arg1 forKey:(CFStringRef)arg2 ;
-(long long)unsignedIntegerValueForKey:(CFStringRef)arg1 defaultValue:(long long)arg2 ;
-(void)setUnsignedIntegerValue:(long long)arg1 forKey:(CFStringRef)arg2 ;
-(double)timeIntervalForKey:(CFStringRef)arg1 defaultValue:(double)arg2 ;
-(void)setTimeInterval:(double)arg1 forKey:(CFStringRef)arg2 ;
-(id)stringValueForKey:(CFStringRef)arg1 defaultValue:(id)arg2 ;
-(void)setStringValue:(id)arg1 forKey:(CFStringRef)arg2 ;
-(unsigned long long)maxDefaultPlayersP2P;
-(unsigned long long)maxDefaultPlayersHosted;
-(unsigned long long)maxDefaultPlayersTurnBased;
-(unsigned long long)maxDefaultGameStateSizeTurnBased;
-(unsigned long long)exchangeDataDefaultMaximumSize;
-(unsigned long long)exchangeDefaultMaxInitiatedExchangesPerPlayer;
-(void)setLogFilter:(unsigned)arg1 ;
-(BOOL)isInternalBuild;
-(NSString *)storeBagURL;
-(void)setStoreBagURL:(NSString *)arg1 ;
-(BOOL)allowUnsignedBag;
-(void)setAllowUnsignedBag:(BOOL)arg1 ;
-(void)setUseTestProtocols:(BOOL)arg1 ;
-(unsigned long long)mescalSetupRetries;
-(void)setMescalSetupRetries:(unsigned long long)arg1 ;
-(unsigned long long)loginDisableThreshold;
-(void)setLoginDisableThreshold:(unsigned long long)arg1 ;
-(void)setOperationTimeout:(double)arg1 ;
-(double)operationRetryDelay;
-(void)setOperationRetryDelay:(double)arg1 ;
-(unsigned long long)operationRetryCount;
-(void)setOperationRetryCount:(unsigned long long)arg1 ;
-(double)debugRequestTimeout;
-(void)setDebugRequestTimeout:(double)arg1 ;
-(BOOL)isNotificationCenterEnabled;
-(void)setNotificationCenterEnabled:(BOOL)arg1 ;
-(BOOL)notificationBadgesEnabled;
-(void)setNotificationBadgesEnabled:(BOOL)arg1 ;
-(BOOL)notificationSoundsEnabled;
-(void)setNotificationSoundsEnabled:(BOOL)arg1 ;
-(BOOL)notificationAlertsEnabled;
-(void)setNotificationAlertsEnabled:(BOOL)arg1 ;
-(BOOL)verboseLogging;
-(void)setVerboseLogging:(BOOL)arg1 ;
-(void)setTestRunID:(NSString *)arg1 ;
-(BOOL)forceRelay;
-(void)setForceRelay:(BOOL)arg1 ;
-(BOOL)preemptiveRelay;
-(void)setPreemptiveRelay:(BOOL)arg1 ;
-(long long)pushEnvironment;
-(void)setPushEnvironment:(long long)arg1 ;
-(long long)pipeliningSetting;
-(void)setPipeliningSetting:(long long)arg1 ;
-(unsigned long long)maxPlayersP2P;
-(void)setMaxPlayersP2P:(unsigned long long)arg1 ;
-(unsigned long long)maxPlayersHosted;
-(void)setMaxPlayersHosted:(unsigned long long)arg1 ;
-(unsigned long long)maxPlayersTurnBased;
-(void)setMaxPlayersTurnBased:(unsigned long long)arg1 ;
-(unsigned long long)maxGameStateSizeTurnBased;
-(void)setMaxGameStateSizeTurnBased:(unsigned long long)arg1 ;
-(unsigned long long)exchangeDataMaximumSize;
-(void)setExchangeDataMaximumSize:(unsigned long long)arg1 ;
-(unsigned long long)exchangeMaxInitiatedExchangesPerPlayer;
-(void)setExchangeMaxInitiatedExchangesPerPlayer:(unsigned long long)arg1 ;
-(void)setUseInternalHeader:(BOOL)arg1 ;
-(double)terminationInterval;
-(void)setTerminationInterval:(double)arg1 ;
-(double)garbageCollectionInterval;
-(void)setGarbageCollectionInterval:(double)arg1 ;
-(void)setMinimumCacheTTL:(double)arg1 ;
-(double)cacheTTLOverride;
-(void)setCacheTTLOverride:(double)arg1 ;
-(BOOL)shouldAnnotateImageUsage;
-(void)setShouldAnnotateImageUsage:(BOOL)arg1 ;
-(BOOL)shouldTrackAtlasImageUsage;
-(void)setShouldTrackAtlasImageUsage:(BOOL)arg1 ;
-(BOOL)shouldUseTestIcons;
-(void)setShouldUseTestIcons:(BOOL)arg1 ;
-(BOOL)shouldLinkPlayerToICloud;
-(void)setShouldLinkPlayerToICloud:(BOOL)arg1 ;
-(BOOL)shouldLinkPlayerToTwitter;
-(void)setShouldLinkPlayerToTwitter:(BOOL)arg1 ;
-(BOOL)shouldLinkPlayerToFacebook;
-(void)setShouldLinkPlayerToFacebook:(BOOL)arg1 ;
-(BOOL)shouldAllowGameInvites;
-(BOOL)shouldDisallowInvitesFromStrangers;
-(BOOL)shouldAllowNearbyMultiplayer;
-(BOOL)shouldAddPlayerInfoToAddressBook;
-(void)setShouldAddPlayerInfoToAddressBook:(BOOL)arg1 ;
-(BOOL)HTTPShouldUsePipelining;
-(BOOL)isClipGestureEnabled;
-(void)setClipGestureEnabled:(BOOL)arg1 ;
-(BOOL)isComprehensiveLoggingEnabled;
-(void)setComprehensiveLoggingEnabled:(BOOL)arg1 ;
-(BOOL)isWebKitInspectElementEnabled;
-(void)setWebKitInspectElementEnabled:(BOOL)arg1 ;
-(NSDictionary *)overrideValues;
-(void)setShouldAllowGameInvites:(BOOL)arg1 ;
-(void)setShouldAllowNearbyMultiplayer:(BOOL)arg1 ;
@end

