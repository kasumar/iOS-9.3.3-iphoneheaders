/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, GEORouteMatch, CLLocationMatchInfo, NSDate, CLFloor;

@interface CLLocation : NSObject <CKRecordValue, NSCopying, NSSecureCoding> {

	id _internal;

}

@property (getter=_mapkit_locationDescription,nonatomic,readonly) NSString * locationDescription; 
@property (getter=_mapkit_isStale,nonatomic,readonly) BOOL isStale; 
@property (getter=_mapkit_hasValidCourse,nonatomic,readonly) BOOL hasValidCourse; 
@property (getter=_mapkit_routeMatch,nonatomic,readonly) GEORouteMatch * routeMatch; 
@property (getter=_mapkit_courseAccuracy,nonatomic,readonly) double courseAccuracy; 
@property (getter=_mapkit_speedAccuracy,nonatomic,readonly) double speedAccuracy; 
@property (getter=_mapkit_hasMatch,nonatomic,readonly) BOOL hasMatch; 
@property (getter=_mapkit_legacyHasMatch,nonatomic,readonly) BOOL legacyHasMatch; 
@property (nonatomic,readonly) int _mapkit_source; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationMatchInfo * matchInfo; 
@property (nonatomic,readonly) SCD_Struct_CL1 coordinate; 
@property (nonatomic,readonly) double altitude; 
@property (nonatomic,readonly) double horizontalAccuracy; 
@property (nonatomic,readonly) double verticalAccuracy; 
@property (nonatomic,readonly) double course; 
@property (nonatomic,readonly) double speed; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) CLFloor * floor; 
@property (nonatomic,copy,readonly) NSString * description; 
@property (nonatomic,readonly) SCD_Struct_CL11 clientLocation; 
@property (nonatomic,readonly) NSString * iso6709Notation; 
@property (nonatomic,readonly) int type; 
@property (assign,nonatomic) int referenceFrame; 
@property (nonatomic,readonly) SCD_Struct_CL1 rawCoordinate; 
@property (nonatomic,readonly) double rawCourse; 
@property (nonatomic,readonly) unsigned integrity; 
@property (nonatomic,readonly) double trustedTimestamp; 
+(double)_mapkit_timeToExpire;
+(id)_mapkit_stringWithType:(int)arg1 ;
+(BOOL)supportsSecureCoding;
-(int)pl_locationHash;
-(id)pl_newSurroundingLocationsHashes;
-(BOOL)_mapkit_isEqualToLocationCoordinate:(SCD_Struct_CL1)arg1 ;
-(double)_mapkit_courseAccuracy;
-(id)_mapkit_locationDescription;
-(BOOL)_mapkit_legacyHasMatch;
-(id)_mapkit_routeMatch;
-(BOOL)_mapkit_hasValidCourse;
-(BOOL)_mapkit_hasMatch;
-(double)_mapkit_speedAccuracy;
-(BOOL)_mapkit_isStale;
-(id)initWithCoordinate:(SCD_Struct_CL1)arg1 rawCoordinate:(SCD_Struct_CL1)arg2 course:(double)arg3 rawCourse:(double)arg4 courseAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 altitude:(double)arg8 timestamp:(double)arg9 horizontalAccuracy:(double)arg10 verticalAccuracy:(double)arg11 type:(int)arg12 matchInfo:(id)arg13 ;
-(int)_mapkit_source;
-(id)cam_videoMetadataRepresentation;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(BOOL)cplSpecialIsEqual:(id)arg1 ;
-(unsigned long long)cplSpecialHash;
-(id)initWithClientLocation:(SCD_Struct_CL11)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 ;
-(CLLocationMatchInfo *)matchInfo;
-(id)initWithClientLocation:(SCD_Struct_CL11)arg1 matchInfo:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSDate *)timestamp;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)speed;
-(id)shortDescription;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(double)altitude;
-(double)course;
-(void)setReferenceFrame:(int)arg1 ;
-(int)referenceFrame;
-(double)trustedTimestamp;
-(id)_initWithCoordinate:(SCD_Struct_CL1)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 floor:(int)arg8 ;
-(SCD_Struct_CL1)rawCoordinate;
-(unsigned)integrity;
-(double)getDistanceFrom:(id)arg1 ;
-(id)initWithCoordinate:(SCD_Struct_CL1)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 ;
-(id)initWithCoordinate:(SCD_Struct_CL1)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5 ;
-(NSString *)iso6709Notation;
-(id)propagateLocationToTime:(double)arg1 ;
-(SCD_Struct_CL11)clientLocation;
-(id)initWithClientLocation:(SCD_Struct_CL11)arg1 ;
-(id)snapToResolution:(double)arg1 ;
-(CLFloor *)floor;
-(double)rawCourse;
-(SCD_Struct_CL1)coordinate;
-(double)distanceFromLocation:(id)arg1 ;
-(double)verticalAccuracy;
-(double)horizontalAccuracy;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
@end

