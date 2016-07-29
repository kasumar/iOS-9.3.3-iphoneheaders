/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BBSectionIcon, BBColor, NSNumber, NSSet;

@interface BBSectionSubtypeParameters : NSObject <NSSecureCoding> {

	BBSectionSubtypeParameters* _fallbackParameters;
	NSString* _topic;
	NSString* _missedBannerDescriptionFormat;
	NSString* _fullUnlockActionLabel;
	NSString* _unlockActionLabel;
	NSString* _fullAlternateActionLabel;
	NSString* _alternateActionLabel;
	BBSectionIcon* _sectionIconOverride;
	BBColor* _tintColor;
	NSString* _bannerAccessoryRemoteViewControllerClassName;
	NSString* _bannerAccessoryRemoteServiceBundleIdentifier;
	NSString* _secondaryContentRemoteViewControllerClassName;
	NSString* _secondaryContentRemoteServiceBundleIdentifier;
	NSNumber* _boxedSuppressesAlertsWhenAppIsActive;
	NSNumber* _boxedCoalescesWhenLocked;
	NSNumber* _boxedRealertCount;
	NSNumber* _boxedInertWhenLocked;
	NSNumber* _boxedPreservesUnlockActionCase;
	NSNumber* _boxedVisuallyIndicatesWhenDateIsInFuture;
	NSNumber* _boxedCanBeSilencedByMenuButtonPress;
	NSNumber* _boxedPreventLock;
	NSNumber* _boxedIgnoresQuietMode;
	NSNumber* _boxedSuppressesTitle;
	NSNumber* _boxedShowsUnreadIndicatorForNoticesFeed;
	NSNumber* _boxedShowsContactPhoto;
	NSNumber* _boxedPlaysSoundForModify;
	NSNumber* _boxedSubtypePriority;
	NSNumber* _boxedIPodOutAlertType;
	NSNumber* _boxedAllowsAutomaticRemovalFromLockScreen;
	NSNumber* _boxedAllowsAddingToLockScreenWhenUnlocked;

}

@property (nonatomic,copy) NSString * topic;                                                      //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy) NSString * missedBannerDescriptionFormat;                              //@synthesize missedBannerDescriptionFormat=_missedBannerDescriptionFormat - In the implementation block
@property (nonatomic,copy) NSString * fullUnlockActionLabel;                                      //@synthesize fullUnlockActionLabel=_fullUnlockActionLabel - In the implementation block
@property (nonatomic,copy) NSString * unlockActionLabel;                                          //@synthesize unlockActionLabel=_unlockActionLabel - In the implementation block
@property (nonatomic,copy) NSString * fullAlternateActionLabel;                                   //@synthesize fullAlternateActionLabel=_fullAlternateActionLabel - In the implementation block
@property (nonatomic,copy) NSString * alternateActionLabel;                                       //@synthesize alternateActionLabel=_alternateActionLabel - In the implementation block
@property (nonatomic,copy) BBSectionIcon * sectionIconOverride;                                   //@synthesize sectionIconOverride=_sectionIconOverride - In the implementation block
@property (assign,nonatomic) BOOL suppressesAlertsWhenAppIsActive; 
@property (assign,nonatomic) BOOL coalescesWhenLocked; 
@property (assign,nonatomic) unsigned long long realertCount; 
@property (assign,nonatomic) BOOL inertWhenLocked; 
@property (assign,nonatomic) BOOL preservesUnlockActionCase; 
@property (assign,nonatomic) unsigned long long subtypePriority; 
@property (assign,nonatomic) long long iPodOutAlertType; 
@property (nonatomic,retain) BBColor * tintColor;                                                 //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) BOOL canBeSilencedByMenuButtonPress; 
@property (assign,nonatomic) BOOL preventLock; 
@property (assign,nonatomic) BOOL ignoresQuietMode; 
@property (assign,nonatomic) BOOL suppressesTitle; 
@property (assign,nonatomic) BOOL showsUnreadIndicatorForNoticesFeed; 
@property (assign,nonatomic) BOOL showsContactPhoto; 
@property (assign,nonatomic) BOOL playsSoundForModify; 
@property (assign,nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture; 
@property (nonatomic,retain) NSSet * alertSuppressionAppIDs; 
@property (nonatomic,copy) NSString * bannerAccessoryRemoteViewControllerClassName;               //@synthesize bannerAccessoryRemoteViewControllerClassName=_bannerAccessoryRemoteViewControllerClassName - In the implementation block
@property (nonatomic,copy) NSString * bannerAccessoryRemoteServiceBundleIdentifier;               //@synthesize bannerAccessoryRemoteServiceBundleIdentifier=_bannerAccessoryRemoteServiceBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * secondaryContentRemoteViewControllerClassName;              //@synthesize secondaryContentRemoteViewControllerClassName=_secondaryContentRemoteViewControllerClassName - In the implementation block
@property (nonatomic,copy) NSString * secondaryContentRemoteServiceBundleIdentifier;              //@synthesize secondaryContentRemoteServiceBundleIdentifier=_secondaryContentRemoteServiceBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL allowsAutomaticRemovalFromLockScreen; 
@property (assign,nonatomic) BOOL allowsAddingToLockScreenWhenUnlocked; 
@property (assign,nonatomic) BBSectionSubtypeParameters * fallbackParameters;                     //@synthesize fallbackParameters=_fallbackParameters - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressesAlertsWhenAppIsActive;                     //@synthesize boxedSuppressesAlertsWhenAppIsActive=_boxedSuppressesAlertsWhenAppIsActive - In the implementation block
@property (nonatomic,retain) NSNumber * boxedCoalescesWhenLocked;                                 //@synthesize boxedCoalescesWhenLocked=_boxedCoalescesWhenLocked - In the implementation block
@property (nonatomic,retain) NSNumber * boxedRealertCount;                                        //@synthesize boxedRealertCount=_boxedRealertCount - In the implementation block
@property (nonatomic,retain) NSNumber * boxedInertWhenLocked;                                     //@synthesize boxedInertWhenLocked=_boxedInertWhenLocked - In the implementation block
@property (nonatomic,retain) NSNumber * boxedPreservesUnlockActionCase;                           //@synthesize boxedPreservesUnlockActionCase=_boxedPreservesUnlockActionCase - In the implementation block
@property (nonatomic,retain) NSNumber * boxedVisuallyIndicatesWhenDateIsInFuture;                 //@synthesize boxedVisuallyIndicatesWhenDateIsInFuture=_boxedVisuallyIndicatesWhenDateIsInFuture - In the implementation block
@property (nonatomic,retain) NSNumber * boxedCanBeSilencedByMenuButtonPress;                      //@synthesize boxedCanBeSilencedByMenuButtonPress=_boxedCanBeSilencedByMenuButtonPress - In the implementation block
@property (nonatomic,retain) NSNumber * boxedPreventLock;                                         //@synthesize boxedPreventLock=_boxedPreventLock - In the implementation block
@property (nonatomic,retain) NSNumber * boxedIgnoresQuietMode;                                    //@synthesize boxedIgnoresQuietMode=_boxedIgnoresQuietMode - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressesTitle;                                     //@synthesize boxedSuppressesTitle=_boxedSuppressesTitle - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSubtypePriority;                                     //@synthesize boxedSubtypePriority=_boxedSubtypePriority - In the implementation block
@property (nonatomic,retain) NSNumber * boxedIPodOutAlertType;                                    //@synthesize boxedIPodOutAlertType=_boxedIPodOutAlertType - In the implementation block
@property (nonatomic,retain) NSNumber * boxedShowsUnreadIndicatorForNoticesFeed;                  //@synthesize boxedShowsUnreadIndicatorForNoticesFeed=_boxedShowsUnreadIndicatorForNoticesFeed - In the implementation block
@property (nonatomic,retain) NSNumber * boxedShowsContactPhoto;                                   //@synthesize boxedShowsContactPhoto=_boxedShowsContactPhoto - In the implementation block
@property (nonatomic,retain) NSNumber * boxedPlaysSoundForModify;                                 //@synthesize boxedPlaysSoundForModify=_boxedPlaysSoundForModify - In the implementation block
@property (nonatomic,retain) NSNumber * boxedAllowsAutomaticRemovalFromLockScreen;                //@synthesize boxedAllowsAutomaticRemovalFromLockScreen=_boxedAllowsAutomaticRemovalFromLockScreen - In the implementation block
@property (nonatomic,retain) NSNumber * boxedAllowsAddingToLockScreenWhenUnlocked;                //@synthesize boxedAllowsAddingToLockScreenWhenUnlocked=_boxedAllowsAddingToLockScreenWhenUnlocked - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BBColor *)tintColor;
-(void)setTintColor:(BBColor *)arg1 ;
-(void)setUnlockActionLabel:(NSString *)arg1 ;
-(unsigned long long)realertCount;
-(void)setRealertCount:(unsigned long long)arg1 ;
-(id)initWithFallbackParameters:(id)arg1 ;
-(void)setCanBeSilencedByMenuButtonPress:(BOOL)arg1 ;
-(void)setAllowsAutomaticRemovalFromLockScreen:(BOOL)arg1 ;
-(void)setFallbackParameters:(BBSectionSubtypeParameters *)arg1 ;
-(NSString *)missedBannerDescriptionFormat;
-(NSString *)fullUnlockActionLabel;
-(NSString *)unlockActionLabel;
-(NSString *)fullAlternateActionLabel;
-(NSString *)alternateActionLabel;
-(BBSectionIcon *)sectionIconOverride;
-(NSString *)bannerAccessoryRemoteViewControllerClassName;
-(NSString *)bannerAccessoryRemoteServiceBundleIdentifier;
-(NSString *)secondaryContentRemoteViewControllerClassName;
-(NSString *)secondaryContentRemoteServiceBundleIdentifier;
-(BOOL)suppressesAlertsWhenAppIsActive;
-(BOOL)coalescesWhenLocked;
-(BOOL)inertWhenLocked;
-(BOOL)preservesUnlockActionCase;
-(BOOL)visuallyIndicatesWhenDateIsInFuture;
-(BOOL)canBeSilencedByMenuButtonPress;
-(BOOL)preventLock;
-(BOOL)ignoresQuietMode;
-(BOOL)suppressesTitle;
-(BOOL)showsUnreadIndicatorForNoticesFeed;
-(BOOL)showsContactPhoto;
-(BOOL)playsSoundForModify;
-(unsigned long long)subtypePriority;
-(long long)iPodOutAlertType;
-(BOOL)allowsAutomaticRemovalFromLockScreen;
-(BOOL)allowsAddingToLockScreenWhenUnlocked;
-(void)setSuppressesAlertsWhenAppIsActive:(BOOL)arg1 ;
-(void)setBoxedSuppressesAlertsWhenAppIsActive:(NSNumber *)arg1 ;
-(void)setBoxedCoalescesWhenLocked:(NSNumber *)arg1 ;
-(void)setBoxedRealertCount:(NSNumber *)arg1 ;
-(void)setBoxedInertWhenLocked:(NSNumber *)arg1 ;
-(void)setBoxedPreservesUnlockActionCase:(NSNumber *)arg1 ;
-(void)setBoxedVisuallyIndicatesWhenDateIsInFuture:(NSNumber *)arg1 ;
-(void)setBoxedCanBeSilencedByMenuButtonPress:(NSNumber *)arg1 ;
-(void)setBoxedPreventLock:(NSNumber *)arg1 ;
-(void)setBoxedIgnoresQuietMode:(NSNumber *)arg1 ;
-(void)setBoxedSuppressesTitle:(NSNumber *)arg1 ;
-(void)setBoxedShowsUnreadIndicatorForNoticesFeed:(NSNumber *)arg1 ;
-(void)setBoxedShowsContactPhoto:(NSNumber *)arg1 ;
-(void)setBoxedPlaysSoundForModify:(NSNumber *)arg1 ;
-(void)setBoxedSubtypePriority:(NSNumber *)arg1 ;
-(void)setBoxedIPodOutAlertType:(NSNumber *)arg1 ;
-(void)setBoxedAllowsAutomaticRemovalFromLockScreen:(NSNumber *)arg1 ;
-(void)setBoxedAllowsAddingToLockScreenWhenUnlocked:(NSNumber *)arg1 ;
-(void)setMissedBannerDescriptionFormat:(NSString *)arg1 ;
-(void)setFullUnlockActionLabel:(NSString *)arg1 ;
-(void)setFullAlternateActionLabel:(NSString *)arg1 ;
-(void)setAlternateActionLabel:(NSString *)arg1 ;
-(void)setSectionIconOverride:(BBSectionIcon *)arg1 ;
-(void)setBannerAccessoryRemoteViewControllerClassName:(NSString *)arg1 ;
-(void)setBannerAccessoryRemoteServiceBundleIdentifier:(NSString *)arg1 ;
-(void)setSecondaryContentRemoteViewControllerClassName:(NSString *)arg1 ;
-(void)setSecondaryContentRemoteServiceBundleIdentifier:(NSString *)arg1 ;
-(NSNumber *)boxedSuppressesAlertsWhenAppIsActive;
-(NSNumber *)boxedCoalescesWhenLocked;
-(NSNumber *)boxedRealertCount;
-(NSNumber *)boxedInertWhenLocked;
-(NSNumber *)boxedPreservesUnlockActionCase;
-(NSNumber *)boxedVisuallyIndicatesWhenDateIsInFuture;
-(NSNumber *)boxedCanBeSilencedByMenuButtonPress;
-(NSNumber *)boxedPreventLock;
-(NSNumber *)boxedIgnoresQuietMode;
-(NSNumber *)boxedSuppressesTitle;
-(NSNumber *)boxedShowsUnreadIndicatorForNoticesFeed;
-(NSNumber *)boxedShowsContactPhoto;
-(NSNumber *)boxedPlaysSoundForModify;
-(NSNumber *)boxedSubtypePriority;
-(NSNumber *)boxedIPodOutAlertType;
-(NSNumber *)boxedAllowsAutomaticRemovalFromLockScreen;
-(NSNumber *)boxedAllowsAddingToLockScreenWhenUnlocked;
-(NSSet *)alertSuppressionAppIDs;
-(void)setAlertSuppressionAppIDs:(NSSet *)arg1 ;
-(void)setCoalescesWhenLocked:(BOOL)arg1 ;
-(void)setInertWhenLocked:(BOOL)arg1 ;
-(void)setPreservesUnlockActionCase:(BOOL)arg1 ;
-(void)setVisuallyIndicatesWhenDateIsInFuture:(BOOL)arg1 ;
-(void)setPreventLock:(BOOL)arg1 ;
-(void)setIgnoresQuietMode:(BOOL)arg1 ;
-(void)setSuppressesTitle:(BOOL)arg1 ;
-(void)setShowsUnreadIndicatorForNoticesFeed:(BOOL)arg1 ;
-(void)setShowsContactPhoto:(BOOL)arg1 ;
-(void)setPlaysSoundForModify:(BOOL)arg1 ;
-(void)setSubtypePriority:(unsigned long long)arg1 ;
-(void)setIPodOutAlertType:(long long)arg1 ;
-(void)setAllowsAddingToLockScreenWhenUnlocked:(BOOL)arg1 ;
-(BBSectionSubtypeParameters *)fallbackParameters;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
@end

