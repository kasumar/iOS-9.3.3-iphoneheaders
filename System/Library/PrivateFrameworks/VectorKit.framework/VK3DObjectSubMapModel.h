/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKBuildingFootprintMapModel;

@interface VK3DObjectSubMapModel : NSObject {

	unique_ptr<ggl::FragmentedPool<ggl::Building::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Building::Shader::Setup> > >* _objectShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::FoggedBuilding::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedBuilding::Shader::Setup> > >* _foggedObjectShaderSetupPool;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _object2DRenderState;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _object3DRenderState;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _object2DRenderStateWithBlending;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _object3DRenderStateWithBlending;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _objectRenderItemPool;
	VKBuildingFootprintMapModel* _buildingMapModel;
	long long _vectorType;

}

@property (assign,nonatomic) VKBuildingFootprintMapModel * buildingMapModel;              //@synthesize buildingMapModel=_buildingMapModel - In the implementation block
@property (assign,nonatomic) long long vectorType;                                        //@synthesize vectorType=_vectorType - In the implementation block
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)setVectorType:(long long)arg1 ;
-(long long)vectorType;
-(void)flushPools;
-(void)resetPools;
-(id)initWithBuildingMapModel:(id)arg1 ;
-(void)setBuildingMapModel:(VKBuildingFootprintMapModel *)arg1 ;
-(VKBuildingFootprintMapModel *)buildingMapModel;
@end

