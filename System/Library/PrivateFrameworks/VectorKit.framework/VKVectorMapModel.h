/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMapTileModel.h>

@interface VKVectorMapModel : VKMapTileModel {

	BOOL _needsTileStencil;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _stencilState;
	vector<std::__1::pair<std::__1::unique_ptr<ggl::PolygonSolidFill::Shader::Setup, std::__1::default_delete<ggl::PolygonSolidFill::Shader::Setup> >, std::__1::unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > >, std::__1::allocator<std::__1::pair<std::__1::unique_ptr<ggl::PolygonSolidFill::Shader::Setup, std::__1::default_delete<ggl::PolygonSolidFill::Shader::Setup> >, std::__1::unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > > > >* _defaultStencilItems;
	unsigned _stencilItemIndex;

}

@property (assign,nonatomic) BOOL needsTileStencil;              //@synthesize needsTileStencil=_needsTileStencil - In the implementation block
+(BOOL)reloadOnActiveTileGroupChange;
+(BOOL)reloadOnStylesheetChange;
-(id)init;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(id)featureMarkerAtPoint:(VKPoint)arg1 ;
-(unsigned long long)mapLayerPosition;
-(BOOL)wantsCategorizedSourceTiles;
-(void)_layoutScene:(id)arg1 withContext:(id)arg2 ;
-(void)setNeedsTileStencil:(BOOL)arg1 ;
-(int)pushStencilItems:(CommandBuffer*)arg1 tiles:(id)arg2 minZ:(int)arg3 maxZ:(int)arg4 fullyLoaded:(BOOL)arg5 items:(vector<std::__1::pair<std::__1::unique_ptr<ggl::PolygonSolidFill::Shader::Setup, std::__1::default_delete<ggl::PolygonSolidFill::Shader::Setup> >, std::__1::unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > >, std::__1::allocator<std::__1::pair<std::__1::unique_ptr<ggl::PolygonSolidFill::Shader::Setup, std::__1::default_delete<ggl::PolygonSolidFill::Shader::Setup> >, std::__1::unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > > > >*)arg6 layoutContext:(id)arg7 sourceTileOffset:(const int*)arg8 ;
-(BOOL)needsTileStencil;
-(id)featureMarkerInTile:(id)arg1 atPoint:(VKPoint*)arg2 ;
-(void)resetStencilState;
-(void)_updateTilesInScene:(id)arg1 context:(id)arg2 ;
-(int)pushStencilItems:(CommandBuffer*)arg1 tiles:(id)arg2 minZ:(int)arg3 maxZ:(int)arg4 fullyLoaded:(BOOL)arg5 layoutContext:(id)arg6 sourceTileOffset:(const int*)arg7 ;
-(int)pushStencilItems:(CommandBuffer*)arg1 fullyLoaded:(BOOL)arg2 layoutContext:(id)arg3 ;
@end

