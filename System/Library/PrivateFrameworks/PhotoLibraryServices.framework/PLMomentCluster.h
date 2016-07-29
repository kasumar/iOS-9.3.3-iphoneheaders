/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class NSString, NSObject, NSDate, CLLocation, NSMutableArray, NSMutableSet, NSCountedSet, NSArray;

@interface PLMomentCluster : NSObject {

	short _generationType;
	NSString* __title;
	NSObject*<NSCopying> __objectID;
	NSDate* __startingDate;
	NSDate* __endingDate;
	CLLocation* __approximateLocation;
	NSMutableArray* __mutableNodes;
	NSMutableSet* __nodesWithLocation;
	NSCountedSet* __splitTags;
	NSCountedSet* __mergeTags;

}

@property (nonatomic,retain) NSString * title;                                             //@synthesize _title=__title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * nodes; 
@property (nonatomic,readonly) NSObject*<NSCopying> objectID;                              //@synthesize _objectID=__objectID - In the implementation block
@property (nonatomic,readonly) CLLocation * approximateLocation;                           //@synthesize _approximateLocation=__approximateLocation - In the implementation block
@property (nonatomic,retain) NSDate * startingDate;                                        //@synthesize _startingDate=__startingDate - In the implementation block
@property (nonatomic,retain) NSDate * endingDate;                                          //@synthesize _endingDate=__endingDate - In the implementation block
@property (assign,nonatomic) short generationType;                                         //@synthesize generationType=_generationType - In the implementation block
@property (setter=_setNodes:,nonatomic,copy) NSMutableArray * _mutableNodes;               //@synthesize _mutableNodes=__mutableNodes - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _nodesWithLocation;                          //@synthesize _nodesWithLocation=__nodesWithLocation - In the implementation block
@property (setter=_setSplitTags:,nonatomic,retain) NSCountedSet * _splitTags;              //@synthesize _splitTags=__splitTags - In the implementation block
@property (setter=_setMergeTags:,nonatomic,retain) NSCountedSet * _mergeTags;              //@synthesize _mergeTags=__mergeTags - In the implementation block
+(double)nameOccurrenceCutoff;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(short)generationType;
-(CLLocation *)approximateLocation;
-(void)setGenerationType:(short)arg1 ;
-(id)initWithMoment:(id)arg1 ;
-(void)commonPLMomentClusterInitialization;
-(id)initWithObjectID:(id)arg1 ;
-(NSDate *)startingDate;
-(NSDate *)endingDate;
-(NSArray *)nodes;
-(NSMutableArray *)_mutableNodes;
-(BOOL)hasSplits;
-(BOOL)hasMerges;
-(void)_setStartingDate:(id)arg1 ;
-(void)_setEndingDate:(id)arg1 ;
-(NSMutableSet *)_nodesWithLocation;
-(BOOL)isTagged;
-(void)addNode:(id)arg1 ;
-(void)removeNode:(id)arg1 nilCluster:(BOOL)arg2 ;
-(void)_correctStartAndEndDates;
-(id)splitTags;
-(id)mergeTagAboveCutoff:(double)arg1 ;
-(id)mergeTags;
-(void)addNodesFromCluster:(id)arg1 ;
-(void)addNodes:(id)arg1 ;
-(void)removeNodes:(id)arg1 ;
-(void)removeNodesFromCluster:(id)arg1 ;
-(unsigned long long)expandFromNode:(id)arg1 withNeighbors:(id)arg2 inClustering:(id)arg3 minimumNumberOfPoints:(unsigned long long)arg4 ;
-(void)_setNodes:(id)arg1 ;
-(NSCountedSet *)_splitTags;
-(void)_setSplitTags:(id)arg1 ;
-(NSCountedSet *)_mergeTags;
-(void)_setMergeTags:(id)arg1 ;
-(NSObject*<NSCopying>)objectID;
@end

