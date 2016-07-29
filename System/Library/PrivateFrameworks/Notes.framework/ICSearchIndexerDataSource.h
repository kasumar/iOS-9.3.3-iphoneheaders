/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSearchIndexerDataSource <NSObject>
@required
-(id)persistentStoreCoordinator;
-(id)dataSourceIdentifier;
-(BOOL)isObservingChanges;
-(void)startObservingChanges;
-(BOOL)needsReindexing;
-(id)searchableItemsWithIdentifiers:(id)arg1;
-(id)searchableItemsNeedingIndexing;
-(id)searchableItemIdentifiersToBeDeleted;
-(id)allSearchableItems;
-(id)objectForSearchableItem:(id)arg1 context:(id)arg2;
-(id)objectForSearchableItemIdentifier:(id)arg1 context:(id)arg2;
-(void)searchIndexerWillIndexSearchableItems:(id)arg1;
-(void)searchIndexerDidFinishIndexingItems:(id)arg1 error:(id)arg2;
-(void)searchIndexerWillDeleteSearchableItemsWithIdentifiers:(id)arg1;
-(void)searchIndexerDidFinishDeletingSearchableItemsWithIdentifiers:(id)arg1 error:(id)arg2;
-(void)searchIndexerWillBeginReindexing;
-(void)searchIndexerDidFinishReindexingWithError:(id)arg1;
-(void)stopObservingChanges;

@end

