/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CSSearchableIndex, NSArray, NSError;

@interface ICIndexItemsOperation : NSOperation {

	CSSearchableIndex* _searchableIndex;
	NSArray* _dataSources;
	NSError* _error;

}

@property (nonatomic,retain) CSSearchableIndex * searchableIndex;              //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (nonatomic,copy) NSArray * dataSources;                              //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
-(id)init;
-(void)deleteItems;
-(void)main;
-(BOOL)shouldDeleteAllItemsBeforeIndexing;
-(id)searchableItemsToIndexFromDataSource:(id)arg1 ;
-(id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 ;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
-(void)setDataSources:(NSArray *)arg1 ;
-(void)deleteAllItems;
-(void)indexItems;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSArray *)dataSources;
-(CSSearchableIndex *)searchableIndex;
@end

