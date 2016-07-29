/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDSyncObjectCollection.h>
#import <libobjc.A.dylib/HDNanoSyncDescription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncRestore : PBCodable <HDSyncObjectCollection, HDNanoSyncDescription, NSCopying> {

	NSMutableArray* _objectDatas;
	int _objectType;
	SCD_Struct_HD16 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) int objectType;                            //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,retain) NSMutableArray * objectDatas;              //@synthesize objectDatas=_objectDatas - In the implementation block
+(id)restoreWithNanoSyncEntityClass:(Class)arg1 protocolVersion:(int)arg2 ;
-(id)nanoSyncDescription;
-(void)setObjects:(id)arg1 ;
-(id)decodedObjects;
-(Class)syncEntityClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setObjectType:(int)arg1 ;
-(void)setHasObjectType:(BOOL)arg1 ;
-(BOOL)hasObjectType;
-(int)objectType;
-(void)addObjectData:(id)arg1 ;
-(unsigned long long)objectDatasCount;
-(void)clearObjectDatas;
-(id)objectDataAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)objectDatas;
-(void)setObjectDatas:(NSMutableArray *)arg1 ;
@end

