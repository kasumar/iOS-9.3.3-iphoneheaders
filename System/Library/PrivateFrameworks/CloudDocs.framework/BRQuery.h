/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/BRNotificationReceiverDelegate.h>

@class NSMutableArray, NSMutableDictionary, BRNotificationReceiver, NSMetadataQuery, NSPredicate, NSString, NSArray, NSOperationQueue;

@interface BRQuery : NSObject <BRNotificationReceiverDelegate> {

	NSMutableArray* _results;
	NSMutableDictionary* _resultsByRowID;
	BRNotificationReceiver* _receiver;
	NSMetadataQuery* _query;
	NSPredicate* _predicate;
	NSString* _bundleIdentifier;
	NSMutableDictionary* _toBeRemovedByFileObjectID;
	NSMutableDictionary* _toBeReplacedByFileObjectID;
	NSMutableDictionary* _toBeInsertedByFileObjectID;
	int _queryState;
	BOOL _ubiquitousGatherComplete;
	BOOL _needsCrashMarking;
	BOOL _needsCrashEvicting;
	BOOL _sendHasUpdateNotification;
	NSArray* _values;
	NSArray* _sortingAttributes;
	SCD_Struct_BR8 _batchingParameters;
	/*function pointer*/void* _create_result_fn;
	void* _create_result_context;
	/*function pointer*/void* _create_result_callbacks_equal;
	/*function pointer*/void* _create_result_callbacks_release;
	/*function pointer*/void* _create_value_fn;
	void* _create_value_context;
	/*function pointer*/void* _create_value_callbacks_equal;
	/*function pointer*/void* _create_value_callbacks_release;
	NSArray* _searchScopes;
	unsigned _scopeOptions;
	/*function pointer*/void* _sort_fn;
	void* _sort_context;
	CFRunLoopRef _runLoop;
	NSOperationQueue* _queryQueue;
	int _disableCount;

}

@property (assign) BRNotificationReceiver * receiver; 
@property (assign) NSMetadataQuery * query;                         //@synthesize query=_query - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2 ;
+(void)didEndPossibleFileOperation:(id)arg1 ;
+(id)willBeginPossibleCreationOfItemAtURL:(id)arg1 ;
+(id)willBeginPossibleDeletionOfItemAtURL:(id)arg1 ;
+(void)initialize;
-(const void*)resultAtIndex:(long long)arg1 ;
-(long long)indexOfResult:(const void*)arg1 ;
-(void)setBatchingParameters:(SCD_Struct_BR8)arg1 ;
-(id)initWithQuery:(id)arg1 values:(id)arg2 sortingAttributes:(id)arg3 items:(id)arg4 ;
-(void)setCreateResultFunction:(/*function pointer*/void*)arg1 withContext:(void*)arg2 callbacks:(const SCD_Struct_BR10*)arg3 ;
-(void)setCreateValueFunction:(/*function pointer*/void*)arg1 withContext:(void*)arg2 callbacks:(const SCD_Struct_BR10*)arg3 ;
-(void)setSortComparator:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(void)setSearchScope:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)setExternalDocumentsBundleIdentifier:(id)arg1 ;
-(unsigned char)executeWithOptions:(unsigned long long)arg1 ;
-(void)setSendHasUpdateNotification:(BOOL)arg1 ;
-(void)processUpdates;
-(id)valuesOfAttribute:(id)arg1 ;
-(unsigned long long)countOfResultsForAttributeName:(id)arg1 value:(id)arg2 ;
-(id)attributeValueForName:(id)arg1 forResultAtIndex:(long long)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSMetadataQuery *)query;
-(void)stop;
-(void)setQuery:(NSMetadataQuery *)arg1 ;
-(unsigned long long)resultCount;
-(void)disableUpdates;
-(void)enableUpdates;
-(id)queryQueue;
-(void)setQueryQueue:(id)arg1 ;
-(void)setReceiver:(BRNotificationReceiver *)arg1 ;
-(BRNotificationReceiver *)receiver;
-(void)notificationsReceiverDidReceiveNotificationsBatch:(id)arg1 ;
-(void)notificationsReceiverDidFinishGathering:(id)arg1 ;
-(void)notificationsReceiverDidInvalidate:(id)arg1 ;
-(void)notificationReceiverDidReceiveNotifications:(id)arg1 ;
-(void)_performBlockAsync:(/*^block*/id)arg1 ;
-(void)_setQueryState:(int)arg1 ;
-(void)_startReceiver;
-(void)_runQuery;
-(id)_replacementObjectForQueryItem:(id)arg1 ;
-(void)_postNote:(CFStringRef)arg1 ;
-(id)_replacementObjectsForArrayOfQueryItem:(id)arg1 ;
-(void)_postNote:(CFStringRef)arg1 userInfo:(id)arg2 ;
-(BOOL)_collectUpdates:(id)arg1 ;
-(void)_processUpdates;
-(void)_sendHasUpdateNotificationIfNeeded;
-(void)_processChanges:(id)arg1 ;
-(void)finalize;
@end

