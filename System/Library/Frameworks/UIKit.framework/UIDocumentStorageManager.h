/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _UIDocumentStorage, NSMutableSet, NSMetadataQuery, NSDictionary, NSURL;

@interface UIDocumentStorageManager : NSObject {

	NSObject*<OS_dispatch_queue> _ivarQueue;
	_UIDocumentStorage* _storage;
	NSMutableSet* _observers;
	NSMetadataQuery* _query;
	NSDictionary* _identifiersToURLMap;
	NSURL* _defaultURL;

}

@property (readonly) BOOL usesUbiquitousStorage; 
@property (readonly) NSURL * documentStorageURL; 
@property (readonly) NSURL * dataStorageURL; 
+(void)requestSharedManager:(/*^block*/id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(NSURL *)documentStorageURL;
-(id)_initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_ubiquityIdentityTokenChanged;
-(void)runSetupProcessWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)dataStorageURL;
-(id)_userICloudChoiceForIdentityToken:(id)arg1 ;
-(void)_finishSetupWithDecision:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_loadUserICloudChoiceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setStorage:(id)arg1 ;
-(void)_resetQuery;
-(id)_userICloudChoiceArray;
-(void)_initialGatherFinished;
-(void)_updateObservers;
-(void)_queryUpdated;
-(id)_queryResults;
-(id)_observeContentsOfDirectories:(id)arg1 sortedWithDescriptors:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(BOOL)usesUbiquitousStorage;
-(id)_identifierToURLMap;
-(void)_appActivated:(id)arg1 ;
-(void)_storeUserICloudChoice:(BOOL)arg1 forIdentityToken:(id)arg2 ;
-(void)willAddURL:(id)arg1 ;
-(void)willRemoveURL:(id)arg1 ;
-(void)willMoveURL:(id)arg1 toURL:(id)arg2 ;
-(id)observeContentsOfDirectory:(id)arg1 sortedWithDescriptors:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(id)observeContentsOfUbiquitousContainersWithIdentifiers:(id)arg1 sortedWithDescriptors:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(void)updateObserver:(id)arg1 withSortDescriptors:(id)arg2 ;
@end

