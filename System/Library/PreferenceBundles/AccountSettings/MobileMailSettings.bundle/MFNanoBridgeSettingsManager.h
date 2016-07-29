/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager, NPSDomainAccessor, NSArray, MFNanoBridgeSettingsMailbox, NSString;

@interface MFNanoBridgeSettingsManager : NSObject {

	NPSManager* _syncManager;
	NPSDomainAccessor* _domainAccessor;
	NSArray* _activeAccounts;

}

@property (nonatomic,readonly) BOOL mirrorSettingsFromCompanion; 
@property (nonatomic,retain) MFNanoBridgeSettingsMailbox * includeMailMailbox; 
@property (assign,nonatomic) unsigned long long linesOfPreview; 
@property (assign,nonatomic) unsigned long long flagStyle; 
@property (assign,nonatomic) BOOL askBeforeDeleting; 
@property (assign,nonatomic) BOOL organizeByThread; 
@property (nonatomic,retain) NSString * signature; 
@property (nonatomic,readonly) NSArray * activeAccounts;                                    //@synthesize activeAccounts=_activeAccounts - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSArray *)activeAccounts;
-(id)_getValueForKey:(id)arg1 ;
-(void)notifyMobileMailFlagStyleChanged;
-(void)notifyMobileMailAskBeforeDeletingChanged;
-(void)notifyMobileMailOrganizeByThreadChanged;
-(unsigned long long)flagStyle;
-(id)_loadAccounts;
-(BOOL)_mirrorSettingsFromCompanion;
-(id)_includeMailMailbox;
-(void)_setIncludeMailMailbox:(id)arg1 ;
-(unsigned long long)_linesOfPreview;
-(void)_setLinesOfPreview:(unsigned long long)arg1 ;
-(unsigned long long)_flagStyle;
-(BOOL)mirrorSettingsFromCompanion;
-(void)_setFlagStyle:(unsigned long long)arg1 ;
-(BOOL)_askBeforeDeleting;
-(void)_setAskBeforeDeleting:(BOOL)arg1 ;
-(BOOL)_organizeByThread;
-(void)_setOrganizeByThread:(BOOL)arg1 ;
-(id)_signature;
-(void)_setSignature:(id)arg1 ;
-(unsigned long long)_mobileMailFlagStyle;
-(BOOL)_mobileMailAskBeforeDeleting;
-(BOOL)_mobileMailOrganizeByThread;
-(MFNanoBridgeSettingsMailbox *)includeMailMailbox;
-(void)_setValue:(id)arg1 forKey:(id)arg2 syncWithClient:(BOOL)arg3 ;
-(void)setIncludeMailMailbox:(MFNanoBridgeSettingsMailbox *)arg1 ;
-(unsigned long long)linesOfPreview;
-(void)setLinesOfPreview:(unsigned long long)arg1 ;
-(void)setFlagStyle:(unsigned long long)arg1 ;
-(BOOL)askBeforeDeleting;
-(void)setAskBeforeDeleting:(BOOL)arg1 ;
-(void)notifyMirrorSettingsFromCompanionChanged;
-(void)notifyMobileMailAccountsChanged;
-(void)reloadCachedAccounts;
-(void)setSignature:(NSString *)arg1 ;
-(NSString *)signature;
-(void)setOrganizeByThread:(BOOL)arg1 ;
-(BOOL)organizeByThread;
-(void)_handleDidUnpair;
-(id)domainAccessor;
@end

