/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOMapServiceTraits, GEOMapRegion, NSDictionary, NSString;


@protocol GEOMapServiceTicket <NSObject>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion; 
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) NSString * resultSectionHeader; 
@required
-(void)cancel;
-(GEOMapServiceTraits *)traits;
-(BOOL)isChainResultSet;
-(void)applyToCorrectedSearch:(id)arg1;
-(void)applyToPlaceInfo:(id)arg1;
-(GEOMapRegion *)resultBoundingRegion;
-(NSString *)resultSectionHeader;
-(NSDictionary *)responseUserInfo;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3;

@end

