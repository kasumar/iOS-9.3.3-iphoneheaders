/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOWalkingOptions : PBCodable <NSCopying> {

	SCD_Struct_GE1* _avoidedModes;
	double _preferredSpeed;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasPreferredSpeed; 
@property (assign,nonatomic) double preferredSpeed;                               //@synthesize preferredSpeed=_preferredSpeed - In the implementation block
@property (nonatomic,readonly) unsigned long long avoidedModesCount; 
@property (nonatomic,readonly) int* avoidedModes; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int*)avoidedModes;
-(void)addAvoidedMode:(int)arg1 ;
-(unsigned long long)avoidedModesCount;
-(int)avoidedModeAtIndex:(unsigned long long)arg1 ;
-(void)clearAvoidedModes;
-(void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasPreferredSpeed;
-(double)preferredSpeed;
-(void)setPreferredSpeed:(double)arg1 ;
-(void)setHasPreferredSpeed:(BOOL)arg1 ;
@end

