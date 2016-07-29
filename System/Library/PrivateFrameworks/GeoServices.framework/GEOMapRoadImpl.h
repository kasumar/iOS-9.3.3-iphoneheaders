/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapRoad.h>

@class GEOMapAccess, NSString;

@interface GEOMapRoadImpl : NSObject <GEOMapRoad> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapEdgeRoad>* _edge;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> >* _coords;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) SCD_Struct_GE16* coordinates; 
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) int roadClass; 
@property (nonatomic,readonly) int formOfWay; 
-(void)dealloc;
-(NSString *)description;
-(double)length;
-(SCD_Struct_GE16*)coordinates;
-(SCD_Struct_GE97*)feature;
-(int)formOfWay;
-(int)roadClass;
-(id)initWithMap:(id)arg1 edge:(shared_ptr<geo::MapEdgeRoad>*)arg2 ;
-(id)findRoadsFrom:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)coordinateCount;
@end

