/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquitySwitchboard : NSObject {

	NSMutableDictionary* _storeNameToLocalPeerIDToEntry;
	NSMutableDictionary* _rootLocationToLocalPeerIDToFilePresenters;
	NSMutableDictionary* _rootLocationToLocalPeerIDToPreviousEntries;
	NSRecursiveLock* _registrationLock;

}
+(id)sharedSwitchboard;
+(id)ubiquitousExternalReferenceLocationForUUID:(id)arg1 inStore:(id)arg2 ;
+(void)initialize;
-(id)retainedEntryForStoreName:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)unregisterCoordinator:(id)arg1 ;
-(void)unregisterPersistentStore:(id)arg1 ;
-(id)createSetOfCoordinatorsForPersistentStoreName:(id)arg1 andLocalPeerID:(id)arg2 atUbiquityRootLocation:(id)arg3 ;
-(id)filePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)_removeFilePresenter:(id)arg1 ;
-(void)coordinatorWillRemoveStore:(id)arg1 ;
-(void)addEntryToPreviousEntries:(id)arg1 ;
-(id)entryForStore:(id)arg1 ;
-(BOOL)cacheFilePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)removeFilePresenterCachedForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)_addFilePresenter:(id)arg1 ;
-(BOOL)registerUbiquitizedPersistentStore:(id)arg1 withURL:(id)arg2 forLocalPeerID:(id)arg3 withLocalRootLocation:(id)arg4 andUbiquityRootLocation:(id)arg5 error:(id*)arg6 ;
-(void)_quietlyMoveEntryToPreviousEntries:(id)arg1 ;
-(void)removeEntryFromPreviousEntries:(id)arg1 ;
-(void)releaseAllEntriesForStoreName:(id)arg1 andPeerID:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

