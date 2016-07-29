/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKImageCanvas.h>
#import <libobjc.A.dylib/VKMapModelDelegate.h>
#import <libobjc.A.dylib/MDSnapshotMap.h>

@class VKMapModel, NSString;

@interface VKMapImageCanvas : VKImageCanvas <VKMapModelDelegate, MDSnapshotMap> {

	VKMapModel* _mapModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL localizeLabels; 
@property (assign,nonatomic) unsigned char labelScaleFactor; 
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) BOOL showsBuildings; 
-(void)dealloc;
-(void)update;
-(void)setMapType:(long long)arg1 ;
-(void)clearScene;
-(void)cancelTileRequests;
-(unsigned char)labelScaleFactor;
-(void)mapModel:(id)arg1 needsPanByOffset:(CGPoint)arg2 relativeToScreenPoint:(CGPoint)arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)mapModelInNav:(id)arg1 ;
-(double)mapModelZoomScale:(id)arg1 ;
-(void)mapModelDidFinishLoadingTiles:(id)arg1 ;
-(void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2 ;
-(void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4 ;
-(void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)mapModelDidBecomePartiallyDrawn:(id)arg1 ;
-(void)mapModelLabelsDidLayout:(id)arg1 ;
-(BOOL)mapModelInNavAtDefaultZoom:(id)arg1 ;
-(void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1 ;
-(void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2 ;
-(id)mapModel:(id)arg1 painterForOverlay:(id)arg2 ;
-(void)mapModelWillBecomeFullyDrawn:(id)arg1 ;
-(void)mapModelDidStartLoadingTiles:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 useMultisampling:(BOOL)arg3 device:(const shared_ptr<ggl::Device>Ref)arg4 homeQueue:(id)arg5 manifestConfiguration:(id)arg6 locale:(id)arg7 mapPurpose:(unsigned long long)arg8 ;
-(id)mapModel:(id)arg1 markerForAnnotation:(id)arg2 ;
-(void)mapModel:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(long long)arg3 fromOldState:(long long)arg4 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 useMultisampling:(BOOL)arg3 device:(const shared_ptr<ggl::Device>Ref)arg4 homeQueue:(id)arg5 manifestConfiguration:(id)arg6 locale:(id)arg7 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 useMultisampling:(BOOL)arg3 device:(const shared_ptr<ggl::Device>Ref)arg4 homeQueue:(id)arg5 manifestConfiguration:(id)arg6 locale:(id)arg7 localizeLabels:(BOOL)arg8 mapType:(long long)arg9 ;
-(BOOL)showsPointsOfInterest;
-(BOOL)showsBuildings;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(BOOL)isShowingNoDataPlaceholders;
-(BOOL)localizeLabels;
-(void)setLocalizeLabels:(BOOL)arg1 ;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(void)setLabelScaleFactor:(unsigned char)arg1 ;
@end

