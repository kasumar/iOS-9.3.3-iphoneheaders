/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@interface TSTMergeRegionMap : TSPObject {

	unordered_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, std::__1::hash<TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate> > >* mCellIDToMergeOrigin;
	unordered_map<TSUColumnRowCoordinate, TSUColumnRowSize, std::__1::hash<TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowSize> > >* mMergeOriginToSize;
	TSUColumnRowRect mUnionedMergeRange;

}
+(id)mergeRegionMapWithContext:(id)arg1 andCellRangesSet:(const unordered_set<TSUColumnRowRect, std::__1::hash<TSUColumnRowRect>, std::__1::equal_to<TSUColumnRowRect>, std::__1::allocator<TSUColumnRowRect> >*)arg2 ;
+(id)mergeRegionMapWithContext:(id)arg1 andCellRanges:(const vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >*)arg2 ;
+(id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(TSUColumnRowRect)arg2 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(TSUColumnRowRect)mergedRangeForCellID:(SCD_Struct_TS315)arg1 ;
-(id)iterator;
-(id)initRegionMapFromMap:(id)arg1 intersectingRange:(TSUColumnRowRect)arg2 ;
-(const unordered_map<TSUColumnRowCoordinate, TSUColumnRowSize, std::__1::hash<TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowSize> > >*)mergeOriginToSize;
-(id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2 ;
-(BOOL)hasRangeSpanningRows;
-(const unordered_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, std::__1::hash<TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate> > >*)cellIDToMergeOrigin;
-(BOOL)find:(TSUColumnRowRect)arg1 ;
-(unsigned long long)count;
-(id)description;
-(id)initWithContext:(id)arg1 ;
-(void)enumerateRangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)remove:(TSUColumnRowRect)arg1 ;
-(BOOL)insert:(TSUColumnRowRect)arg1 ;
@end
