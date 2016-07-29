/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBApplicationPlaceholderLifecycleObserver.h>
#import <SpringBoard/SBApplicationPlaceholderDelegate.h>

@class SBApplicationController, SBApplicationLibraryObserver, NSMutableDictionary, NSMutableSet, NSString;

@interface SBApplicationPlaceholderController : NSObject <SBIconObserver, SBApplicationPlaceholderLifecycleObserver, SBApplicationPlaceholderDelegate> {

	SBApplicationController* _appController;
	SBApplicationLibraryObserver* _lsWorkspaceObserver;
	NSMutableDictionary* _placeholdersByBundleID;
	NSMutableSet* _pendingAdded;
	NSMutableSet* _pendingInstalled;
	NSMutableSet* _pendingCancelled;
	NSMutableSet* _removingPlaceholderProxies;
	BOOL _hasDownloadedFromStore;
	BOOL _usingNetwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)placeholderForDisplayID:(id)arg1 ;
-(id)placeholdersByDisplayID;
-(BOOL)hasDownloadedStoreApplication;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(void)applicationPlaceholdersAdded:(id)arg1 ;
-(void)applicationPlaceholdersCancelled:(id)arg1 ;
-(void)applicationPlaceholdersInstalled:(id)arg1 ;
-(void)applicationPlaceholdersNetworkUsageChanged:(BOOL)arg1 ;
-(BOOL)placeholderShouldAllowPausing:(id)arg1 ;
-(void)_processPendingProxies;
-(void)_addPlaceholders:(id)arg1 ;
-(void)_removePlaceholders:(id)arg1 forInstall:(BOOL)arg2 ;
-(void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3 ;
-(void)_swapDownloadingIcon:(id)arg1 forApplicationIcon:(id)arg2 placeholderProxy:(id)arg3 ;
-(void)_finishPlaceholder:(id)arg1 ;
-(void)_removeDownloadingIcons:(id)arg1 saveState:(BOOL)arg2 ;
-(void)_downloadsEnded;
-(void)_dropGrabbedIconIfNecessary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)isUsingNetwork;
@end

