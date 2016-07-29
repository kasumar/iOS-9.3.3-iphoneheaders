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

@class GEOPDDeparturePredicate;

@interface GEOPDTransitScheduleFilter : PBCodable <NSCopying> {

	SCD_Struct_GE50 _operatingHoursRange;
	GEOPDDeparturePredicate* _departurePredicateCountdown;
	GEOPDDeparturePredicate* _departurePredicateStamp;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) BOOL hasDeparturePredicateCountdown; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateCountdown;              //@synthesize departurePredicateCountdown=_departurePredicateCountdown - In the implementation block
@property (nonatomic,readonly) BOOL hasDeparturePredicateStamp; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateStamp;                  //@synthesize departurePredicateStamp=_departurePredicateStamp - In the implementation block
@property (assign,nonatomic) BOOL hasOperatingHoursRange; 
@property (assign,nonatomic) SCD_Struct_GE51 operatingHoursRange;                                //@synthesize operatingHoursRange=_operatingHoursRange - In the implementation block
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
-(SCD_Struct_GE51)operatingHoursRange;
-(void)setHasOperatingHoursRange:(BOOL)arg1 ;
-(BOOL)hasOperatingHoursRange;
-(void)setDeparturePredicateCountdown:(GEOPDDeparturePredicate *)arg1 ;
-(BOOL)hasDeparturePredicateStamp;
-(BOOL)hasDeparturePredicateCountdown;
-(GEOPDDeparturePredicate *)departurePredicateCountdown;
-(void)setOperatingHoursRange:(SCD_Struct_GE51)arg1 ;
-(GEOPDDeparturePredicate *)departurePredicateStamp;
-(void)setDeparturePredicateStamp:(GEOPDDeparturePredicate *)arg1 ;
@end

