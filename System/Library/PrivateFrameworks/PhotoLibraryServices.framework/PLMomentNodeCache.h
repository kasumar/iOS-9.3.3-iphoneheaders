/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface PLMomentNodeCache : NSObject {

	NSMutableDictionary* __nodesByObjectID;
	NSMutableDictionary* __nodesByUserTag;
	NSMutableArray* __nodesByRowID;
	sqlite3Ref __momentsDatabase;
	sqlite3_stmtRef __spatialInsertStatement;
	sqlite3_stmtRef __temporalInsertStatement;
	sqlite3_stmtRef __spatialSelectStatement;
	sqlite3_stmtRef __temporalSelectStatement;

}

@property (nonatomic,readonly) NSMutableDictionary * _nodesByObjectID;                //@synthesize _nodesByObjectID=__nodesByObjectID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _nodesByUserTag;                 //@synthesize _nodesByUserTag=__nodesByUserTag - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _nodesByRowID;                        //@synthesize _nodesByRowID=__nodesByRowID - In the implementation block
@property (nonatomic,readonly) sqlite3Ref _momentsDatabase;                           //@synthesize _momentsDatabase=__momentsDatabase - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef _spatialInsertStatement;               //@synthesize _spatialInsertStatement=__spatialInsertStatement - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef _temporalInsertStatement;              //@synthesize _temporalInsertStatement=__temporalInsertStatement - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef _spatialSelectStatement;               //@synthesize _spatialSelectStatement=__spatialSelectStatement - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef _temporalSelectStatement;              //@synthesize _temporalSelectStatement=__temporalSelectStatement - In the implementation block
-(void)dealloc;
-(id)init;
-(void)insertNode:(id)arg1 ;
-(id)nodeForAsset:(id)arg1 ;
-(void)performBatch:(/*^block*/id)arg1 ;
-(id)nodeWithPartialAssetDictionary:(id)arg1 ;
-(id)temporalNeighborsOfNode:(id)arg1 forTheta:(double)arg2 ;
-(unsigned long long)countOfTemporalNeighborsOfNode:(id)arg1 forTheta:(double)arg2 ;
-(id)spatialNeighborsOfNodes:(id)arg1 forSigma:(double)arg2 ;
-(id)taggedNeighborsOfNode:(id)arg1 ;
-(id)nodesWithinMinDate:(double)arg1 maxDate:(double)arg2 ;
-(id)tieBreakerForNode:(id)arg1 ;
-(void)openMomentsDatabase;
-(void)closeMomentsDatabase;
-(void)setupMomentsDatabase;
-(void)prepareAndExecuteStatement:(const char*)arg1 ;
-(sqlite3_stmtRef)prepareStatement:(const char*)arg1 ;
-(sqlite3_stmtRef)_spatialInsertStatement;
-(sqlite3_stmtRef)_temporalInsertStatement;
-(sqlite3_stmtRef)_spatialSelectStatement;
-(sqlite3_stmtRef)_temporalSelectStatement;
-(NSMutableArray *)_nodesByRowID;
-(void)executePreparedStatement:(sqlite3_stmtRef)arg1 withStatementBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)_nodesByUserTag;
-(NSMutableDictionary *)_nodesByObjectID;
-(void)addNodeByUserTag:(id)arg1 ;
-(id)nodesWithTag:(id)arg1 ;
-(sqlite3Ref)_momentsDatabase;
@end

