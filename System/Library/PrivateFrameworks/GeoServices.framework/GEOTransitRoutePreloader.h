/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEORoutePreloader.h>

@class GEOTransitDecoderData, GEOTransitSuggestedRoute, _GEOTransitRoutePreloaderData, GEOMapServiceTraits, NSTimer;

@interface GEOTransitRoutePreloader : GEORoutePreloader {

	GEOTransitDecoderData* _decoderData;
	GEOTransitSuggestedRoute* _suggestedRoute;
	_GEOTransitRoutePreloaderData* _reserved;
	GEOMapServiceTraits* _traits;
	double _endRoutePosition;
	long long _indexOfLastStepWithPreparedBatch;
	NSTimer* _geodCrashTimer;
	double _radialDistanceToImplicateTilesMeters;

}
-(void)dealloc;
-(void)stopLoading;
-(id)route;
-(void)_cancelPreloadTasks;
-(void)updateWithRouteMatch:(id)arg1 ;
-(int)preloadStateForTile:(const GEOTileKey*)arg1 ;
-(void)getPreloadSetCoordinates:(SCD_Struct_GE16*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3 ;
-(BOOL)loggingEnabled;
-(void)beginLoading;
-(void)_retryFailuresWithErrorsReset:(BOOL)arg1 ;
-(void)preloaderLog:(id)arg1 ;
-(BOOL)isSufficientlyLoaded;
-(BOOL)minimalDebuggingEnabled;
-(void)setTraits:(id)arg1 ;
-(BOOL)fullDebuggingEnabled;
-(PolylineCoordinate)_polylineCoordinateForDouble:(double)arg1 ;
-(void)_performNextRequests;
-(void)_makePreloadBatchForPlaceDataOnSteps:(id)arg1 ;
-(void)_geodCrashed:(id)arg1 ;
-(void)_makeBatchesForSteps:(id)arg1 ;
-(void)_processBatches;
-(void)_resetErrorCounts;
-(void)_loadTilesForBatch:(id)arg1 ;
-(id)initWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(/*^block*/id)arg5 ;
-(void)_makePreloadBatchForSteps:(id)arg1 ;
-(void)_loadPlacecardsForBatch:(id)arg1 ;
-(void)_makePreloadBatchForTilesOnRouteWithSteps:(id)arg1 andPriority:(unsigned)arg2 ;
-(void)_ignoreAlreadyRequestedTilesAndUpdateGlobalListWithNonDuplicatesForTileKeyList:(id)arg1 ;
-(void)_processedFinishedBatch:(id)arg1 withPartialStatus:(unsigned long long)arg2 ;
-(void)_makeBatchForTilesAroundStationsForAllSteps:(id)arg1 ;
-(void)_makePreloadBatchForGraph;
-(void)_cancelAllBatches;
@end

