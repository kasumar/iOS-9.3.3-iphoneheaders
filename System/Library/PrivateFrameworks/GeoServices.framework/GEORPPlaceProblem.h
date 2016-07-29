/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPPlaceProblem : PBCodable <NSCopying> {

	unsigned _componentIndex;
	unsigned _componentValueIndex;
	unsigned _problematicDepartureSequenceIndex;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasComponentIndex; 
@property (assign,nonatomic) unsigned componentIndex;                                 //@synthesize componentIndex=_componentIndex - In the implementation block
@property (assign,nonatomic) BOOL hasComponentValueIndex; 
@property (assign,nonatomic) unsigned componentValueIndex;                            //@synthesize componentValueIndex=_componentValueIndex - In the implementation block
@property (assign,nonatomic) BOOL hasProblematicDepartureSequenceIndex; 
@property (assign,nonatomic) unsigned problematicDepartureSequenceIndex;              //@synthesize problematicDepartureSequenceIndex=_problematicDepartureSequenceIndex - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasProblematicDepartureSequenceIndex;
-(BOOL)hasComponentValueIndex;
-(unsigned)problematicDepartureSequenceIndex;
-(void)setHasComponentIndex:(BOOL)arg1 ;
-(unsigned)componentIndex;
-(BOOL)hasComponentIndex;
-(void)setHasProblematicDepartureSequenceIndex:(BOOL)arg1 ;
-(void)setHasComponentValueIndex:(BOOL)arg1 ;
-(void)setComponentValueIndex:(unsigned)arg1 ;
-(void)setProblematicDepartureSequenceIndex:(unsigned)arg1 ;
-(void)setComponentIndex:(unsigned)arg1 ;
-(unsigned)componentValueIndex;
@end

