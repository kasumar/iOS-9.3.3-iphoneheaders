/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPUFoundation/MPUFoundation-Structs.h>
@class NSMutableDictionary, NSIndexSet, NSArray;

@interface MPUChangeDetails : NSObject {

	vector<std::__1::pair<unsigned long, unsigned long>, std::__1::allocator<std::__1::pair<unsigned long, unsigned long> > >* _sectionMoves;
	NSMutableDictionary* _itemMoves;
	NSIndexSet* _insertedSections;
	NSIndexSet* _deletedSections;
	NSArray* _insertedItemIndexPaths;
	NSArray* _deletedItemIndexPaths;

}

@property (nonatomic,copy) NSIndexSet * insertedSections;                 //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,copy) NSIndexSet * deletedSections;                  //@synthesize deletedSections=_deletedSections - In the implementation block
@property (nonatomic,copy) NSArray * insertedItemIndexPaths;              //@synthesize insertedItemIndexPaths=_insertedItemIndexPaths - In the implementation block
@property (nonatomic,copy) NSArray * deletedItemIndexPaths;               //@synthesize deletedItemIndexPaths=_deletedItemIndexPaths - In the implementation block
-(id)description;
-(NSIndexSet *)deletedSections;
-(NSIndexSet *)insertedSections;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)appendSectionMoveFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)enumerateSectionMovesWithBlock:(/*^block*/id)arg1 ;
-(void)appendItemMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)enumerateItemMovesWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)insertedItemIndexPaths;
-(NSArray *)deletedItemIndexPaths;
-(void)setDeletedItemIndexPaths:(NSArray *)arg1 ;
-(void)setInsertedItemIndexPaths:(NSArray *)arg1 ;
-(void)setDeletedSections:(NSIndexSet *)arg1 ;
-(void)setInsertedSections:(NSIndexSet *)arg1 ;
@end

