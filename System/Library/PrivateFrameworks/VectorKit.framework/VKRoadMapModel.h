/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorMapModel.h>
#import <libobjc.A.dylib/VKStyleManagerObserver.h>

@class NSString;

@interface VKRoadMapModel : VKVectorMapModel <VKStyleManagerObserver> {

	unique_ptr<vk::RoadManager, std::__1::default_delete<vk::RoadManager> >* _roadManager;
	unique_ptr<vk::PatternedManager, std::__1::default_delete<vk::PatternedManager> >* _patternedRibbonManager;
	int _sourceTileZtoStencilOffset;
	int _extraStencil;
	ClearItem* _clearItem;
	double _layoutTimestamp;
	unsigned long long _mapLayerPosition;

}

@property (assign,nonatomic) unsigned long long mapLayerPosition;                        //@synthesize mapLayerPosition=_mapLayerPosition - In the implementation block
@property (nonatomic,readonly) double layoutTimestamp;                                   //@synthesize layoutTimestamp=_layoutTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<gss::StyleManager>* styleManager; 
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning:(BOOL)arg1 ;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)reserveStencilRangeForScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)stylesheetDidChange;
-(unsigned long long)mapLayerPosition;
-(void)setMapLayerPosition:(unsigned long long)arg1 ;
-(id)featureMarkerInTile:(id)arg1 atPoint:(VKPoint*)arg2 ;
-(double)layoutTimestamp;
-(unsigned char)commandBufferId;
@end

