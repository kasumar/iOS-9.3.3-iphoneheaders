/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDHours : PBCodable <NSCopying> {

	SCD_Struct_GE1* _days;
	SCD_Struct_GE51* _timeRanges;
	unsigned long long _timeRangesCount;
	unsigned long long _timeRangesSpace;

}

@property (nonatomic,readonly) unsigned long long daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,readonly) unsigned long long timeRangesCount; 
@property (nonatomic,readonly) SCD_Struct_GE51* timeRanges; 
+(BOOL)operatingHoursAvailableForPlaceData:(id)arg1 ;
+(BOOL)currentOperatingHoursAvailableForPlaceData:(id)arg1 withTimeZone:(id)arg2 ;
+(id)currentOperatingHoursForPlaceData:(id)arg1 withTimeZone:(id)arg2 ;
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
-(int*)days;
-(SCD_Struct_GE51*)timeRanges;
-(void)addTimeRange:(SCD_Struct_GE51)arg1 ;
-(SCD_Struct_GE51)timeRangeAtIndex:(unsigned long long)arg1 ;
-(int)dayAtIndex:(unsigned long long)arg1 ;
-(void)setTimeRanges:(SCD_Struct_GE51*)arg1 count:(unsigned long long)arg2 ;
-(void)clearTimeRanges;
-(unsigned long long)daysCount;
-(void)addDay:(int)arg1 ;
-(void)setDays:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)timeRangesCount;
-(void)clearDays;
@end

