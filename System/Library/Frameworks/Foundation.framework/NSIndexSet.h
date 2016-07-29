/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	struct {
		unsigned _isEmpty : 1;
		unsigned _hasSingleRange : 1;
		unsigned _cacheValid : 1;
		unsigned _reservedArrayBinderController : 29;
	}  _indexSetFlags;
	SCD_Union_NS33* _internal;

}

@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long firstIndex; 
@property (readonly) unsigned long long lastIndex; 
+(id)indexSetFromUnionOf:(id)arg1 ;
+(id)_gkIndexSetWithArray:(id)arg1 ;
+(id)indexSetWithIndexes:(unsigned long long)arg1 ;
+(id)indexSetWithIndexes:(const unsigned long long*)arg1 count:(unsigned long long)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)indexSet;
+(id)indexSetWithIndex:(unsigned long long)arg1 ;
+(id)indexSetWithIndexesInRange:(NSRange)arg1 ;
-(id)intersect:(id)arg1 ;
-(id)_gkIndexSetByRemovingIndex:(long long)arg1 ;
-(id)_gkIndexSetByAddingIndex:(long long)arg1 ;
-(id)__ck_indexPathRowsInSection:(long long)arg1 ;
-(id)__ck_indexPathItemsInSection:(long long)arg1 ;
-(void)__ck_enumerateIndexesByProximityToIndex:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)__ck_indexSetShiftedForInsertedIndexes:(id)arg1 removedIndexes:(id)arg2 ;
-(unsigned long long)pu_indexAtIndex:(unsigned long long)arg1 ;
-(id)mf_commaSeparatedString;
-(id)pl_shortDescription;
-(id)_pl_indexSetByUpdatingWithChangedIndexes:(id)arg1 asInserts:(BOOL)arg2 ;
-(NSRange)pl_rangeCoveringIndexSet;
-(id)pl_indexSetAdjustedForDeletions:(id)arg1 ;
-(id)pl_indexSetAdjustedForInsertions:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(BOOL)_cn_any:(/*^block*/id)arg1 ;
-(BOOL)_cn_all:(/*^block*/id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(unsigned long long)_indexAtIndex:(unsigned long long)arg1 ;
-(void)_setContentToContentFromIndexSet:(id)arg1 ;
-(unsigned long long)_indexOfRangeAfterOrContainingIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexOfRangeBeforeOrContainingIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexClosestToIndex:(unsigned long long)arg1 equalAllowed:(BOOL)arg2 following:(BOOL)arg3 ;
-(unsigned long long)_indexOfRangeContainingIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)indexesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)__getContainmentVector:(out BOOL*)arg1 inRange:(NSRange)arg2 ;
-(BOOL)containsIndexes:(id)arg1 ;
-(id)_numberEnumerator;
-(void)enumerateIndexesInRange:(NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)indexInRange:(NSRange)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesPassingTest:(/*^block*/id)arg1 ;
-(id)indexesInRange:(NSRange)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(BOOL)containsIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstIndex;
-(unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1 ;
-(unsigned long long)lastIndex;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToIndexSet:(id)arg1 ;
-(void)enumerateRangesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)indexLessThanIndex:(unsigned long long)arg1 ;
-(void)enumerateIndexesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)countOfIndexesInRange:(NSRange)arg1 ;
-(unsigned long long)rangeCount;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(id)initWithIndexesInRange:(NSRange)arg1 ;
-(unsigned long long)indexPassingTest:(/*^block*/id)arg1 ;
-(id)initWithIndexSet:(id)arg1 ;
-(unsigned long long)indexGreaterThanOrEqualToIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexLessThanOrEqualToIndex:(unsigned long long)arg1 ;
-(void)enumerateIndexesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithIndexes:(const unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)enumerateRangesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)getIndexes:(unsigned long long*)arg1 maxCount:(unsigned long long)arg2 inIndexRange:(NSRange*)arg3 ;
-(BOOL)intersectsIndexesInRange:(NSRange)arg1 ;
-(BOOL)containsIndexesInRange:(NSRange)arg1 ;
-(void)enumerateRangesInRange:(NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithIndex:(unsigned long long)arg1 ;
@end

