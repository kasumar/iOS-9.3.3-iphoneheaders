/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeBuilder.h>

@interface GEOMapEdgeTransitBuilder : GEOMapEdgeBuilder {

	deque<geo::TransitEdgePiece, std::__1::allocator<geo::TransitEdgePiece> >* _pieces;

}
-(BOOL)_shouldFindEdgeAhead;
-(BOOL)_findEdgeAheadInTile:(id)arg1 ;
-(BOOL)_shouldFindEdgeBehind;
-(id)_tileFinderForMap:(id)arg1 center:(SCD_Struct_GE16)arg2 radius:(double)arg3 ;
-(unsigned long long)_maxTileCount;
-(void)_buildCompleteEdge;
-(BOOL)_findEdgeBehindInTile:(id)arg1 ;
-(Matrix<float, 2, 1>)_lastPoint;
-(Matrix<float, 2, 1>)_firstPoint;
-(id)_firstTile;
-(id)initWithMap:(id)arg1 firstPiece:(const TransitEdgePiece*)arg2 ;
-(id)_lastTile;
@end

