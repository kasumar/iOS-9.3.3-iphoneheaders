/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface BLTPBBulletinSummary : PBCodable <NSCopying> {

	unsigned _destinations;
	NSMutableArray* _keys;
	NSString* _publisherBulletinID;
	NSString* _recordID;
	NSString* _sectionID;

}

@property (nonatomic,readonly) BOOL hasPublisherBulletinID; 
@property (nonatomic,retain) NSString * publisherBulletinID;              //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordID; 
@property (nonatomic,retain) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                        //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,nonatomic) unsigned destinations;                       //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,retain) NSMutableArray * keys;                       //@synthesize keys=_keys - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)keys;
-(unsigned)destinations;
-(void)setKeys:(NSMutableArray *)arg1 ;
-(void)addKey:(id)arg1 ;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)keysCount;
-(void)clearKeys;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)recordID;
-(NSString *)publisherBulletinID;
-(void)setDestinations:(unsigned)arg1 ;
-(NSString *)sectionID;
-(BOOL)hasPublisherBulletinID;
-(BOOL)hasRecordID;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
@end

