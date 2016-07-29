/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOVLaneCharacteristic;

@interface GEOVPointCharacteristic : PBCodable <NSCopying> {

	GEOVLaneCharacteristic* _laneCharacteristic;
	int _roadLaneCount;
	int _roadOffset;
	int _sectionIndex;
	int _vertexIndex;
	int _zLevel;
	BOOL _brunnelEntry;
	BOOL _castShadow;
	BOOL _cropped;
	BOOL _shouldDrawLanes;
	SCD_Struct_GE103 _has;

}

@property (assign,nonatomic) BOOL hasSectionIndex; 
@property (assign,nonatomic) int sectionIndex;                                         //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) BOOL hasVertexIndex; 
@property (assign,nonatomic) int vertexIndex;                                          //@synthesize vertexIndex=_vertexIndex - In the implementation block
@property (assign,nonatomic) BOOL hasRoadLaneCount; 
@property (assign,nonatomic) int roadLaneCount;                                        //@synthesize roadLaneCount=_roadLaneCount - In the implementation block
@property (assign,nonatomic) BOOL hasRoadOffset; 
@property (assign,nonatomic) int roadOffset;                                           //@synthesize roadOffset=_roadOffset - In the implementation block
@property (assign,nonatomic) BOOL hasZLevel; 
@property (assign,nonatomic) int zLevel;                                               //@synthesize zLevel=_zLevel - In the implementation block
@property (assign,nonatomic) BOOL hasCropped; 
@property (assign,nonatomic) BOOL cropped;                                             //@synthesize cropped=_cropped - In the implementation block
@property (nonatomic,readonly) BOOL hasLaneCharacteristic; 
@property (nonatomic,retain) GEOVLaneCharacteristic * laneCharacteristic;              //@synthesize laneCharacteristic=_laneCharacteristic - In the implementation block
@property (assign,nonatomic) BOOL hasShouldDrawLanes; 
@property (assign,nonatomic) BOOL shouldDrawLanes;                                     //@synthesize shouldDrawLanes=_shouldDrawLanes - In the implementation block
@property (assign,nonatomic) BOOL hasCastShadow; 
@property (assign,nonatomic) BOOL castShadow;                                          //@synthesize castShadow=_castShadow - In the implementation block
@property (assign,nonatomic) BOOL hasBrunnelEntry; 
@property (assign,nonatomic) BOOL brunnelEntry;                                        //@synthesize brunnelEntry=_brunnelEntry - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasRoadLaneCount:(BOOL)arg1 ;
-(void)setRoadLaneCount:(int)arg1 ;
-(int)roadLaneCount;
-(BOOL)hasRoadLaneCount;
-(BOOL)hasLaneCharacteristic;
-(BOOL)castShadow;
-(BOOL)hasCastShadow;
-(BOOL)hasVertexIndex;
-(int)vertexIndex;
-(void)setBrunnelEntry:(BOOL)arg1 ;
-(BOOL)hasRoadOffset;
-(void)setHasVertexIndex:(BOOL)arg1 ;
-(BOOL)brunnelEntry;
-(BOOL)hasCropped;
-(void)setHasCastShadow:(BOOL)arg1 ;
-(int)roadOffset;
-(void)setHasBrunnelEntry:(BOOL)arg1 ;
-(void)setHasCropped:(BOOL)arg1 ;
-(void)setCastShadow:(BOOL)arg1 ;
-(int)zLevel;
-(void)setHasRoadOffset:(BOOL)arg1 ;
-(BOOL)hasBrunnelEntry;
-(void)setVertexIndex:(int)arg1 ;
-(void)setRoadOffset:(int)arg1 ;
-(BOOL)hasShouldDrawLanes;
-(BOOL)cropped;
-(void)setCropped:(BOOL)arg1 ;
-(GEOVLaneCharacteristic *)laneCharacteristic;
-(BOOL)hasSectionIndex;
-(BOOL)hasZLevel;
-(void)setHasShouldDrawLanes:(BOOL)arg1 ;
-(void)setLaneCharacteristic:(GEOVLaneCharacteristic *)arg1 ;
-(void)setHasSectionIndex:(BOOL)arg1 ;
-(void)setHasZLevel:(BOOL)arg1 ;
-(void)setShouldDrawLanes:(BOOL)arg1 ;
-(BOOL)shouldDrawLanes;
-(void)setZLevel:(int)arg1 ;
-(void)setSectionIndex:(int)arg1 ;
-(int)sectionIndex;
@end

