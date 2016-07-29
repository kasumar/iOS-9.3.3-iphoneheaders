/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKMultiPoint.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSString;

@interface MKPolyline : MKMultiPoint <MKOverlay>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_MK7 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK10 boundingMapRect; 
+(id)polylineWithPoints:(SCD_Struct_MK7*)arg1 count:(unsigned long long)arg2 ;
+(id)polylineWithCoordinates:(SCD_Struct_MK7*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)intersectsMapRect:(SCD_Struct_MK10)arg1 ;
-(SCD_Struct_MK10)boundingMapRect;
-(void)_calculateBounds;
-(SCD_Struct_MK7)coordinate;
@end

