/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSNumber, SSAppPurchaseHistoryDatabase, JaliscoAppsUpdateOperation, NSObject, JaliscoAppLibrary, HSConnectionConfiguration;

@interface JaliscoAppsRequestHandler : NSObject {

	NSMutableArray* _completionHandlers;
	NSNumber* _familyStoreID;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;
	JaliscoAppsUpdateOperation* _updateOperation;
	NSObject*<OS_dispatch_queue> _serialQueue;
	JaliscoAppLibrary* _library;
	HSConnectionConfiguration* _configuration;

}

@property (nonatomic,copy) HSConnectionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)daapQueryFilterPercentEscaped:(BOOL)arg1 ;
+(long long)localDatabaseRevisionForAccountUniqueIdentifier:(id)arg1 ;
+(BOOL)setLocalDatabaseRevision:(long long)arg1 forAccountUniqueIdentifier:(id)arg2 ;
+(id)currentAccountUniqueIdentifier;
+(BOOL)setCurrentAccountUniqueIdentifier:(id)arg1 ;
+(id)handler;
-(void)updateWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)purchaseHistoryDatabase;
-(void)searchLibraryMatchingTerm:(id)arg1 location:(id)arg2 searchColumns:(id)arg3 includeHidden:(BOOL)arg4 includeUnsupported:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)imageDataForStoreID:(id)arg1 error:(id*)arg2 ;
-(id)purchaseForStoreID:(id)arg1 error:(id*)arg2 ;
-(BOOL)setHidden:(BOOL)arg1 forStoreID:(id)arg2 error:(id*)arg3 ;
-(BOOL)unhideAll:(id*)arg1 ;
-(void)updateForFamilyStoreID:(id)arg1 withReason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_libraryWithReason:(long long)arg1 ;
-(void)accountDidChange;
-(void)_resetLibrary;
-(void)_addUpdateOperationWithReason:(long long)arg1 forFamilyMemberStoreID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_escapedSearchTermFromSearchTerm:(id)arg1 locationString:(id)arg2 ;
-(id)_validatedSearchColumnsFromSearchColumns:(id)arg1 ;
-(id)_searchMatching:(id)arg1 inColumns:(id)arg2 includingUnsupported:(BOOL)arg3 includingHidden:(BOOL)arg4 ;
-(id)selectProperties:(id)arg1 forStoreID:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isBundleIdentifierInstalled:(id)arg1 ;
-(void)_appUpdateOperationDidComplete:(id)arg1 withLibrary:(id)arg2 ;
-(int)_deviceClass;
-(id)init;
-(void)setConfiguration:(HSConnectionConfiguration *)arg1 ;
-(HSConnectionConfiguration *)configuration;
-(float)updateProgress;
@end

