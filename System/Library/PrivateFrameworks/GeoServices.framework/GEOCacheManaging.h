/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOCacheManaging <NSObject>
@required
-(long long)invalidationStateForComponent:(id)arg1;
-(void)snapshotWithFilePathArray:(id)arg1 handler:(/*^block*/id)arg2;
-(long long)invalidationStateForPlace:(id)arg1;
-(void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(/*^block*/id)arg4;
-(void)versionsForDomains:(id)arg1 handler:(/*^block*/id)arg2;
-(void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(/*^block*/id)arg4;
-(void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(/*^block*/id)arg2;

@end

