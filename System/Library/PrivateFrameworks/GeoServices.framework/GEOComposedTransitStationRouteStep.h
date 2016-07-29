/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOPBTransitStop, GEOTransitTransfer, GEOTransitSchedule, GEOTransitEnterExitInfo, GEOPBTransitAccessPoint, NSString;

@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep {

	GEOPBTransitStop* _originStop;
	GEOPBTransitStop* _destinationStop;
	unsigned _expectedTime;
	BOOL _isArrivalUncertain;
	GEOTransitTransfer* _transitTransfer;
	GEOTransitSchedule* _transitSchedule;
	GEOTransitEnterExitInfo* _enterExitInfo;
	GEOPBTransitAccessPoint* _accessPoint;

}

@property (nonatomic,readonly) GEOPBTransitAccessPoint * accessPoint;              //@synthesize accessPoint=_accessPoint - In the implementation block
@property (nonatomic,readonly) unsigned expectedTime;                              //@synthesize expectedTime=_expectedTime - In the implementation block
@property (nonatomic,readonly) GEOTransitTransfer * transitTransfer;               //@synthesize transitTransfer=_transitTransfer - In the implementation block
@property (nonatomic,readonly) GEOTransitSchedule * transitSchedule;               //@synthesize transitSchedule=_transitSchedule - In the implementation block
@property (nonatomic,readonly) BOOL isArrivalUncertain;                            //@synthesize isArrivalUncertain=_isArrivalUncertain - In the implementation block
@property (nonatomic,readonly) NSString * exitSign; 
@property (nonatomic,readonly) BOOL displayStop; 
@property (nonatomic,readonly) BOOL hasDisplayStop; 
-(void)dealloc;
-(unsigned)expectedTime;
-(id)destinationStop;
-(SCD_Struct_GE16)endGeoCoordinate;
-(id)originStop;
-(SCD_Struct_GE16)startGeoCoordinate;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned)arg5 pointRange:(NSRange)arg6 ;
-(GEOTransitTransfer *)transitTransfer;
-(BOOL)hasDisplayStop;
-(NSString *)exitSign;
-(BOOL)displayStop;
-(GEOTransitSchedule *)transitSchedule;
-(GEOPBTransitAccessPoint *)accessPoint;
-(BOOL)isArrivalUncertain;
@end

