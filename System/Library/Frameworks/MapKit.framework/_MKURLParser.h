/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class _GEOMapURLParser, NSString, GEOUserSessionEntity;

@interface _MKURLParser : NSObject {

	_GEOMapURLParser* parser;

}

@property (readonly) unsigned long long mapType; 
@property (readonly) unsigned long long transportType; 
@property (readonly) long long trackingMode; 
@property (readonly) BOOL exactPositionSpecified; 
@property (readonly) SCD_Struct_MK0 centerCoordinate; 
@property (readonly) SCD_Struct_MK0 span; 
@property (readonly) float zoomLevel; 
@property (readonly) NSString * addressString; 
@property (readonly) NSString * directionsSourceAddressString; 
@property (readonly) NSString * directionsDestinationAddressString; 
@property (readonly) NSString * searchQuery; 
@property (readonly) SCD_Struct_MK0 searchCoordinate; 
@property (readonly) SCD_Struct_MK1 searchRegion; 
@property (readonly) int searchProviderID; 
@property (readonly) unsigned long long searchUID; 
@property (readonly) NSString * contentProvider; 
@property (readonly) NSString * contentProviderID; 
@property (readonly) NSString * abRecordID; 
@property (readonly) NSString * abAddressID; 
@property (readonly) GEOUserSessionEntity * userSessionEntity; 
@property (readonly) double altitude; 
@property (readonly) double rotation; 
@property (readonly) double tilt; 
@property (readonly) double roll; 
+(BOOL)isValidMapURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(double)rotation;
-(double)altitude;
-(unsigned long long)transportType;
-(SCD_Struct_MK1)searchRegion;
-(BOOL)exactPositionSpecified;
-(double)tilt;
-(SCD_Struct_MK0)searchCoordinate;
-(long long)trackingMode;
-(unsigned long long)mapType;
-(NSString *)directionsDestinationAddressString;
-(NSString *)searchQuery;
-(NSString *)directionsSourceAddressString;
-(GEOUserSessionEntity *)userSessionEntity;
-(NSString *)abAddressID;
-(NSString *)abRecordID;
-(NSString *)addressString;
-(BOOL)parseIncludingCustomParameters:(BOOL)arg1 ;
-(NSString *)contentProvider;
-(NSString *)contentProviderID;
-(unsigned long long)searchUID;
-(SCD_Struct_MK0)span;
-(int)searchProviderID;
-(double)roll;
-(SCD_Struct_MK0)centerCoordinate;
-(float)zoomLevel;
@end

