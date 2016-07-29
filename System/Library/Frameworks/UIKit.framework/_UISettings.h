/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UISettingsGroupObserver.h>
#import <UIKit/_UISettingsKeyPathObserver.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSHashTable, NSSet, NSDictionary, NSString;

@interface _UISettings : NSObject <_UISettingsGroupObserver, _UISettingsKeyPathObserver, NSCopying> {

	NSHashTable* _internal_keyObservers;
	NSHashTable* _internal_keyPathObservers;
	NSSet* _internal_childKeys;
	NSSet* _internal_leafKeys;
	NSDictionary* _internal_keyClasses;
	NSDictionary* _internal_keyStructs;
	BOOL _internal_isObservingPropertiesAndChildren;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsControllerModule;
+(id)settingsFromArchiveDictionary:(id)arg1 ;
+(id)settingsFromArchiveFile:(id)arg1 error:(id*)arg2 ;
-(id)settingsHUDConfiguration;
-(void)settingsResetByHUD;
-(id)archiveFilename;
-(id)settingsHUDInfoLabelString;
-(BOOL)isSimilarToSettings:(id)arg1 ;
-(id)initWithDefaultValues;
-(void)dealloc;
-(id)init;
-(void)setDefaultValues;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValuesFromModel:(id)arg1 ;
-(id)_startInit;
-(void)_continueInitBySettingDefaultValues;
-(void)_completeInitByApplyingArchiveDictionary:(id)arg1 ;
-(void)_introspectKeys;
-(void)_setAssociatedName:(id)arg1 ;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)_initWithArchiveDictionary:(id)arg1 ;
-(void)_stopObservingPropertiesAndChildren;
-(id)_allKeys;
-(id)archiveValueForKey:(id)arg1 ;
-(void)_addInternalEntriesToArchiveDictionary:(id)arg1 ;
-(id)archiveDictionary;
-(void)_startOrStopObservingPropertiesAndChildren;
-(id)_colorForKey:(id)arg1 fromDictionary:(id)arg2 ;
-(id)_fontForKey:(id)arg1 fromDictionary:(id)arg2 ;
-(id)_structValueForKey:(id)arg1 ofType:(id)arg2 fromDictionary:(id)arg3 ;
-(id)_dictionaryForColorKey:(id)arg1 ;
-(id)_dictionaryForFontKey:(id)arg1 ;
-(id)_dictionaryForStructKey:(id)arg1 ofType:(id)arg2 ;
-(void)_startObservingChild:(id)arg1 ;
-(void)_stopObservingChild:(id)arg1 ;
-(BOOL)_hasObservers;
-(void)_startObservingPropertiesAndChildren;
-(id)_associatedNameOrNilIfDefault;
-(id)_associatedName;
-(void)addKeyPathObserver:(id)arg1 ;
-(void)removeKeyPathObserver:(id)arg1 ;
-(void)_sendKeyChanged:(id)arg1 ;
-(void)_sendKeyPathChanged:(id)arg1 ;
-(id)_keyForChild:(id)arg1 ;
-(void)_handleChildGroupChange:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(BOOL)archiveToFile:(id)arg1 error:(id*)arg2 ;
-(void)restoreDefaultValues;
-(void)restoreFromArchiveDictionary:(id)arg1 ;
-(BOOL)restoreFromArchiveFile:(id)arg1 error:(id*)arg2 ;
-(void)addKeyObserver:(id)arg1 ;
-(void)removeKeyObserver:(id)arg1 ;
-(BOOL)_isObservingPropertiesAndChildren;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

