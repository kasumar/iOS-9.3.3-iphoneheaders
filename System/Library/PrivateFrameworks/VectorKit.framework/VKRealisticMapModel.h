/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorMapModel.h>
#import <libobjc.A.dylib/VKMapLayer.h>

@protocol GEORoutePreloadSession;
@class VKSkyModel, NSString;

@interface VKRealisticMapModel : VKVectorMapModel <VKMapLayer> {

	double _fade;
	float _sceneAlpha;
	id<GEORoutePreloadSession> _routePreloadSession;
	BOOL _disableRealisticRoads;
	BOOL _disableRealisticLand;
	VKSkyModel* _skyModel;
	unique_ptr<ggl::ClearItem, std::__1::default_delete<ggl::ClearItem> >* _clearItem;
	shared_ptr<ggl::ConstantDataTyped<ggl::AnimatableTexture::Variant> >* _variantData;
	unique_ptr<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup> > >* _roadStencilShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::RealisticTexture::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticTexture::Shader::Setup> > >* _texturedShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::RealisticAnimatableTexture::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticAnimatableTexture::Shader::Setup> > >* _animatableTexturedShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::RealisticRoad::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticRoad::Shader::Setup> > >* _roadShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::RealisticAnimatableRoad::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticAnimatableRoad::Shader::Setup> > >* _animatableRoadShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::RealisticCasingShadow::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingShadow::Shader::Setup> > >* _casingShadowShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::RealisticCasingFacade::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingFacade::Shader::Setup> > >* _casingFacadeShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup> > >* _casingSidewalkShadowShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup> > >* _casingTopShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::RealisticRoadShadow::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticRoadShadow::Shader::Setup> > >* _roadShadowShaderSetupPool;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _roadStencilRenderState;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _landRenderStateWithoutBlending;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _landRenderStateWithBlending;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _coastlineRenderState;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _waterRenderStateWithoutBlending;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _waterRenderStateWithBlending;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _roadRenderStateWithoutBlending;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _roadRenderStateWithBlending;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _casingShadowRenderState;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _casingFacadeRenderStateWithoutBlending;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _casingFacadeRenderStateWithBlending;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _casingSidewalkShadowRenderState;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _casingTopRenderStateWithoutBlending;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _casingTopRenderStateWithBlending;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _roadShadowRenderState;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _roadStencilRenderItemPool;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _texturedRenderItemPool;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _roadRenderItemPool;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _casingShadowRenderItemPool;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _casingFacadeRenderItemPool;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _casingTopRenderItemPool;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _sidewalkShadowRenderItemPool;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _roadShadowRenderItemPool;
	unique_ptr<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup> > >* _debugShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _debugRenderItemPool;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _debugRenderState;
	BOOL _needDebugReset;
	RenderItemBatcher* _batcher;
	shared_ptr<gss::StyleManager>* _styleManager;

}

@property (nonatomic,retain) id<GEORoutePreloadSession> routePreloadSession; 
@property (assign,nonatomic) BOOL disableRealisticRoads;                                  //@synthesize disableRealisticRoads=_disableRealisticRoads - In the implementation block
@property (assign,nonatomic) BOOL disableRealisticLand;                                   //@synthesize disableRealisticLand=_disableRealisticLand - In the implementation block
@property (assign,nonatomic) float sceneAlpha;                                            //@synthesize sceneAlpha=_sceneAlpha - In the implementation block
@property (nonatomic,retain) VKSkyModel * skyModel;                                       //@synthesize skyModel=_skyModel - In the implementation block
@property (assign,nonatomic) shared_ptr<gss::StyleManager>* styleManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)didReceiveMemoryWarning:(BOOL)arg1 ;
-(void)setDisableRealisticRoads:(BOOL)arg1 ;
-(BOOL)disableRealisticLand;
-(id<GEORoutePreloadSession>)routePreloadSession;
-(void)setDisableRealisticLand:(BOOL)arg1 ;
-(BOOL)disableRealisticRoads;
-(void)setStyleManager:(shared_ptr<gss::StyleManager>*)arg1 ;
-(void)setRoutePreloadSession:(id<GEORoutePreloadSession>)arg1 ;
-(shared_ptr<gss::StyleManager>*)styleManager;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)stylesheetTransitionDidProgress;
-(void)stylesheetWillTransition:(DisplayStyle)arg1 ;
-(void)stylesheetDoneChanging;
-(void)gatherRenderingPreloadItems:(vector<ggl::ShaderLoadItem, std::__1::allocator<ggl::ShaderLoadItem> >*)arg1 ;
-(BOOL)minimumZoomLevelBoundsCamera;
-(void)stylesheetDidChange;
-(float)sceneAlpha;
-(unsigned long long)mapLayerPosition;
-(void)setSceneAlpha:(float)arg1 ;
-(void)setSkyModel:(VKSkyModel *)arg1 ;
-(BOOL)wantsCategorizedSourceTiles;
-(void)willStartDrawingTiles:(id)arg1 ;
-(void)flushPools;
-(void)resetPools;
-(double)_calculateZoomLevelWithContext:(id)arg1 ;
-(void)setupRealisticUniformBuffer:(ConstantDataTyped<ggl::RealisticTexture::Realistic>*)arg1 forTile:(id)arg2 ;
-(void)appendLandCommandsToBuffer:(CommandBuffer*)arg1 inContext:(id)arg2 skyParameters:(const SkyParameters*)arg3 ;
-(void)appendDebugPreloadMissesToBuffer:(CommandBuffer*)arg1 inContext:(id)arg2 forScene:(id)arg3 ;
-(void)appendDebugPreloadStatusToBuffer:(CommandBuffer*)arg1 inContext:(id)arg2 forScene:(id)arg3 ;
-(void)appendStencilCommandsToBuffer:(CommandBuffer*)arg1 inContext:(id)arg2 ;
-(void)resetDebugPools:(id)arg1 ;
-(void)appendRoadCommandsToBuffer:(CommandBuffer*)arg1 inContext:(id)arg2 skyParameters:(const SkyParameters*)arg3 ;
-(void)appendWaterCommandsToBuffer:(CommandBuffer*)arg1 inContext:(id)arg2 skyParameters:(const SkyParameters*)arg3 ;
-(VKSkyModel *)skyModel;
@end

