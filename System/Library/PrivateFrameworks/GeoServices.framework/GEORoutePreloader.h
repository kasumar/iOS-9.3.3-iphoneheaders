/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEORoutePreloadSession.h>

@protocol GEORoutePreloadSessionDelegate;
@class GEOComposedRoute, NSString;

@interface GEORoutePreloader : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadSession> {

	GEOComposedRoute* _route;
	BOOL _loggingEnabled;
	BOOL _minimalDebuggingEnabled;
	BOOL _fullDebuggingEnabled;
	BOOL _enabled;
	BOOL _paused;
	BOOL _allStationTilesBatchMade;
	double _currentRoutePosition;
	int _downloadState;
	/*^block*/id _batteryHandler;
	unsigned long long _networkQuality;
	id<GEORoutePreloadSessionDelegate> _delegate;
	double _stepSizeInMeters;

}

@property (nonatomic,readonly) GEOComposedRoute * route;                     //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) unsigned long long networkQuality;              //@synthesize networkQuality=_networkQuality - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<GEORoutePreloadSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<GEORoutePreloadSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<GEORoutePreloadSessionDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)stopLoading;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(GEOComposedRoute *)route;
-(void)tilesChanged;
-(void)_cancelPreloadTasks;
-(void)setNetworkQuality:(unsigned long long)arg1 ;
-(void)updateWithRouteMatch:(id)arg1 ;
-(id)initSuperWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(/*^block*/id)arg5 ;
-(int)preloadStateForTile:(const GEOTileKey*)arg1 ;
-(void)reachabilityChanged:(id)arg1 ;
-(void)getPreloadSetCoordinates:(SCD_Struct_GE16*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3 ;
-(unsigned long long)networkQuality;
-(BOOL)loggingEnabled;
-(void)beginLoading;
-(void)_retryFailuresWithErrorsReset:(BOOL)arg1 ;
-(void)preloaderLog:(id)arg1 ;
-(BOOL)isSufficientlyLoaded;
-(BOOL)minimalDebuggingEnabled;
-(void)setTraits:(id)arg1 ;
-(BOOL)fullDebuggingEnabled;
@end

