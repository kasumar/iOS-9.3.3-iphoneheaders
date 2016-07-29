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

@class GEOPDPlaceRefinementParameters;

@interface GEOMapItemHandle : PBCodable <NSCopying> {

	int _handleType;
	GEOPDPlaceRefinementParameters* _placeRefinementParameters;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasHandleType; 
@property (assign,nonatomic) int handleType;                                                          //@synthesize handleType=_handleType - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceRefinementParameters; 
@property (nonatomic,retain) GEOPDPlaceRefinementParameters * placeRefinementParameters;              //@synthesize placeRefinementParameters=_placeRefinementParameters - In the implementation block
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
-(GEOPDPlaceRefinementParameters *)placeRefinementParameters;
-(void)setPlaceRefinementParameters:(GEOPDPlaceRefinementParameters *)arg1 ;
-(BOOL)hasPlaceRefinementParameters;
-(int)handleType;
-(void)setHasHandleType:(BOOL)arg1 ;
-(BOOL)hasHandleType;
-(void)setHandleType:(int)arg1 ;
@end

