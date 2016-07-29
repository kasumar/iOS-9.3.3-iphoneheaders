/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary;

@interface SBApplicationShortcutStoreManager : NSObject {

	NSLock* _stateLock;
	NSMutableDictionary* _storesKeyedByBundleIdentifier;

}
+(id)sharedManager;
-(void)saveSynchronously;
-(id)shortcutItemsForBundleIdentifier:(id)arg1 ;
-(void)setShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_installedAppsDidChange:(id)arg1 ;
-(id)_stateLock_storeForBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

