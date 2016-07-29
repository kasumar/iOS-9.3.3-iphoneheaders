/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBBulletin;

@interface BLTPBAddBulletinRequest : PBRequest <NSCopying> {

	double _date;
	BLTPBBulletin* _bulletin;
	unsigned _updateType;
	BOOL _shouldPlayLightsAndSirens;
	BOOL _trafficRestricted;
	SCD_Struct_BL4 _has;

}

@property (nonatomic,readonly) BOOL hasBulletin; 
@property (nonatomic,retain) BLTPBBulletin * bulletin;                       //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) BOOL hasShouldPlayLightsAndSirens; 
@property (assign,nonatomic) BOOL shouldPlayLightsAndSirens;                 //@synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                    //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateType; 
@property (assign,nonatomic) unsigned updateType;                            //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficRestricted; 
@property (assign,nonatomic) BOOL trafficRestricted;                         //@synthesize trafficRestricted=_trafficRestricted - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(double)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)shouldPlayLightsAndSirens;
-(unsigned)updateType;
-(BLTPBBulletin *)bulletin;
-(void)setBulletin:(BLTPBBulletin *)arg1 ;
-(void)setShouldPlayLightsAndSirens:(BOOL)arg1 ;
-(void)setTrafficRestricted:(BOOL)arg1 ;
-(BOOL)hasBulletin;
-(void)setHasShouldPlayLightsAndSirens:(BOOL)arg1 ;
-(BOOL)hasShouldPlayLightsAndSirens;
-(void)setHasUpdateType:(BOOL)arg1 ;
-(BOOL)hasUpdateType;
-(void)setHasTrafficRestricted:(BOOL)arg1 ;
-(BOOL)hasTrafficRestricted;
-(BOOL)trafficRestricted;
-(void)setUpdateType:(unsigned)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
-(BOOL)hasDate;
@end

