/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/SIMSettings.bundle/SIMSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SIMSettings/SIMSettings-Structs.h>
@class NSMutableDictionary, NSString, NSArray, PHForwardingSettings, NSObject, NSDictionary;

@interface PhoneSettingsTelephony : NSObject {

	unsigned _watchCount;
	NSMutableDictionary* _pendingSaves;
	NSMutableDictionary* _pendingRequests;
	NSString* _myNumber;
	NSString* _carrierName;
	NSArray* _carrierServices;
	NSString* _carrierURL;
	NSString* _carrierURLTitle;
	NSString* _carrierMMSInfoURL;
	NSString* _carrierMMSInfoTitle;
	PHForwardingSettings* _callForwardingSettingsUnconditional;
	PHForwardingSettings* _callForwardingSettingsMobileBusy;
	PHForwardingSettings* _callForwardingSettingsNoReply;
	PHForwardingSettings* _callForwardingSettingsNotReachable;
	unsigned _callWaitingEnabled;
	unsigned _callerIDIsModifiable;
	unsigned _callerIDMode;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	int _networkSelectionMode;
	unsigned _simLocked;
	NSString* _cachedPassword;
	NSString* _newNumber;
	unsigned _savingPhoneNumber : 1;
	unsigned _phoneBookSelected : 1;
	unsigned _phoneNumberWritten : 1;
	NSDictionary* _simToolkitMenu;
	CTServerConnectionRef _serverConnection;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) CTServerConnectionRef serverConnection;                  //@synthesize serverConnection=_serverConnection - In the implementation block
+(id)telephony;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)_reset;
-(void)startWatching;
-(void)stopWatching;
-(CTServerConnectionRef)serverConnection;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)descriptionDictionary;
-(int)showReplyWithMessage;
-(id)carrierName;
-(void)resetCallForwardingSettings;
-(BOOL)allowTTYChange;
-(int)showCallForwarding;
-(int)showCallWaiting;
-(int)showCallerID;
-(int)showTTY;
-(int)showCarrierServices;
-(int)showCarrierURL;
-(int)showSIMPIN;
-(int)showSIMToolkitMenu;
-(id)carrierURLTitle;
-(id)carrierURL;
-(void)setMyNumber:(id)arg1 ;
-(id)myNumber;
-(void)setCallForwardingNumber:(id)arg1 ;
-(int)showDialAssist;
-(int)showServiceCodes;
-(void)destroyServerConnection;
-(unsigned)callForwardingEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id)_callForwardingSettingsForForwardingReason:(id)arg1 ;
-(void)_requestCallForwardingSettingsForReason:(id)arg1 ;
-(void)setCallForwardingEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_saveCallForwardingEnabled:(BOOL)arg1 number:(id)arg2 forwardingReason:(id)arg3 ;
-(void)_handleCallForwardingSettings:(id)arg1 didAttemptToSet:(BOOL)arg2 forwardingReason:(id)arg3 ;
-(id)callForwardingNumber:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setCallForwardingNumber:(id)arg1 forReason:(id)arg2 ;
-(void)_requestSettings:(id)arg1 ;
-(void)_saveSettings:(id)arg1 ;
-(void)_handleCallWaitingSettings:(id)arg1 ;
-(unsigned)callerIDModifiable:(BOOL)arg1 ;
-(unsigned)callerIDMode:(BOOL)arg1 ;
-(void)_handleCallerIDSettings:(id)arg1 ;
-(void)_handleSIMLockSettings:(id)arg1 ;
-(void)_populateToolkitMenuIfNeeded;
-(BOOL)allowSIMLock;
-(unsigned)simLocked:(BOOL)arg1 ;
-(BOOL)hasSubscriberIdentity;
-(id)carrierServices;
-(BOOL)simIsPresent;
-(id)simToolkitMenuItems;
-(void)postCallForwardingChangedNotificationForForwardingReason:(id)arg1 ;
-(void)_phoneNumberSaveFinishedWithSuccess:(BOOL)arg1 ;
-(id)manuallySelectedNetworkDictionary;
-(int)networkSelectionMode;
-(void)_invalidateSIMLockedSetting;
-(int)currentNetworkSelectionState;
-(id)carrierMMSInfoURL;
-(id)carrierMMSInfoTitle;
-(BOOL)allowNetworkSelection;
-(id)currentNetwork;
-(void)enableAutomaticNetworkSelection;
-(void)selectManualNetwork:(id)arg1 ;
-(unsigned)callForwardingEnabled:(BOOL)arg1 ;
-(void)setCallForwardingEnabled:(BOOL)arg1 ;
-(id)callForwardingNumber:(BOOL)arg1 ;
-(unsigned)callWaitingEnabled:(BOOL)arg1 ;
-(void)setCallWaitingEnabled:(BOOL)arg1 ;
-(BOOL)allowCallerIDChange:(BOOL)arg1 ;
-(void)setCallerIDEnabled:(unsigned)arg1 ;
-(void)requestNetworkList;
-(void)setSIMLocked:(BOOL)arg1 password:(id)arg2 ;
-(id)unlockAttemptsRemainingString;
-(void)selectSIMToolkitMenuItemAtIndex:(int)arg1 ;
-(id)simToolkitMenuTitle;
-(BOOL)allowPINChange;
-(void)setPIN:(id)arg1 password:(id)arg2 ;
-(id)pendingRequestForUniqueSettingType:(id)arg1 ;
-(id)pendingSaveForUniqueSettingType:(id)arg1 ;
-(void)receivedRequestResponseForUniqueSettingType:(id)arg1 ;
-(void)receivedSaveResponseForUniqueSettingType:(id)arg1 ;
-(id)lastUsedForwardingNumberForReason:(id)arg1 ;
-(void)resetLastUsedForwardingNumberForReason:(id)arg1 ;
-(void)_handleNetworkList:(id)arg1 ;
-(void)_handlePINSettings:(id)arg1 ;
-(void)_carrierInfoChanged;
-(void)_simRemoved;
-(void)_simReady;
-(void)_simPUKLocked;
-(void)_networkSettingsDisabled;
-(void)_phoneBookSelected;
-(void)_phoneNumberWritten;
-(void)_phoneNumberChanged;
-(void)_invalidateSIMToolkitMenuItemCache;
@end

