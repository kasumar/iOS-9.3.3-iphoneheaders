/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapItemTransitAttribution.h>

@class NSArray, GEOPDTransitAttribution, NSString;

@interface _GEOMapItemTransitAttribution : NSObject <GEOMapItemTransitAttribution> {

	GEOPDTransitAttribution* _transitAttribution;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_providerNames,nonatomic,readonly) NSArray * providerNames; 
-(void)dealloc;
-(id)initWithTransitAttribution:(id)arg1 ;
-(id)_providerNames;
@end

