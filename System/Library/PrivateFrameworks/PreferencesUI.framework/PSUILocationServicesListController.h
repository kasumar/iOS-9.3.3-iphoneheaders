/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/FMFSessionDelegate.h>

@class NSDictionary, NSMutableArray, NSArray, NSMutableDictionary, NSDate, ACAccountStore, ACAccount, NSOperationQueue, FMFSession, FMFDevice, NSNumber, NSString;

@interface PSUILocationServicesListController : PSListController <FMFSessionDelegate> {

	NSDictionary* _locationEntitiesDetails;
	NSMutableArray* _coalescedSystemServices;
	NSArray* _ignoredLocationEntities;
	BOOL _deferredRefreshDueToConfirm;
	BOOL _locationNotificationsEnabled;
	NSMutableDictionary* _coalesceAppKeys;
	NSDate* _twentyFourHoursAgo;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAccount;
	NSOperationQueue* _locationSharingOperationQueue;
	FMFSession* _locationSharingSession;
	FMFDevice* _locationSharingDevice;
	NSNumber* _locationSharingEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isLocationRestricted;
+(BOOL)isCoreRoutineAuthorized;
+(void)setCoreRoutineAuthorized:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willBecomeActive;
-(id)accountStore;
-(void)connectionError:(id)arg1 ;
-(void)didUpdateHidingStatus:(BOOL)arg1 ;
-(void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(id)primaryAccount;
-(void)profileNotification:(id)arg1 ;
-(void)updateSpecifiersForImposedSettings;
-(void)updateRecentlyUsedDate;
-(void)updateForApplicationDidBecomeActive:(id)arg1 ;
-(void)refreshLinkStatusInParent;
-(void)stopLocationStatusUpdates;
-(int)locationUsageForEntity:(id)arg1 ;
-(void)setUsage:(int)arg1 forCell:(id)arg2 ;
-(void)setAuthLevel:(unsigned long long)arg1 forCell:(id)arg2 ;
-(int)locationUsageBasedOnDetails:(id)arg1 ;
-(void)_cancelConfirmDisableForSpecifier:(id)arg1 ;
-(void)_setLocationServicesEnabled:(BOOL)arg1 ;
-(id)locationDetailSpecifiers;
-(void)updateLocationSharingSpecifiersWithReload:(BOOL)arg1 ;
-(void)updateFindMyFriendsStateBasedOnRestriction;
-(BOOL)_isFindMyDeviceSpecifier:(id)arg1 ;
-(void)disableAfterLoginConfirmation:(id)arg1 ;
-(void)_setEntityAuthorized:(BOOL)arg1 specifier:(id)arg2 ;
-(void)updateSpecifiersForImposedSettingsWithReload:(BOOL)arg1 ;
-(void)updateMutableStateBasedOnRestriction;
-(void)updateMutableStateForLocationSharing;
-(id)isLocationServicesEnabled:(id)arg1 ;
-(BOOL)_isBundleBlacklisted:(id)arg1 ;
-(id)hiddenBundleIdentifiers;
-(id)localizedDisplayNameForBundleID:(id)arg1 ;
-(void)startLocationStatusUpdates;
-(BOOL)_shouldEnableLocationSharingSpecifier;
-(void)_locationSharingSpecifierWasTapped:(id)arg1 ;
-(BOOL)isLocationSharingEnabled;
-(id)locationSharingDevice;
-(id)locationSharingSpecifiers;
-(BOOL)isLocationSharingModificationAllowed;
-(void)setLocationServicesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)locationSharingOperationQueue;
-(id)locationSharingSession;
-(unsigned long long)locationSharingTimeout;
-(void)mainThreadDidChangeActiveLocationSharingDevice:(id)arg1 ;
-(void)mainThreadConnectionError:(id)arg1 ;
-(void)mainThreadDidUpdateHidingStatus:(BOOL)arg1 ;
-(void)updateLocationUsage;
-(id)isEntityAuthorized:(id)arg1 ;
-(void)setEntityAuthorized:(id)arg1 specifier:(id)arg2 ;
-(void)showLocationPrivacyPage;
-(id)specifiers;
@end

