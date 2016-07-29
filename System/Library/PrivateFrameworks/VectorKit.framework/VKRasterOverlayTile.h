/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@interface VKRasterOverlayTile : VKTile {

	unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> >* _renderItem;
	Setup* _shaderSetup;
	shared_ptr<md::RasterOverlayData>* _overlayData;

}

@property (nonatomic,readonly) Texture2D* gglTexture; 
@property (nonatomic,readonly) RenderItem* renderItem; 
-(BOOL)isEmpty;
-(Texture2D*)gglTexture;
-(RenderItem*)renderItem;
-(CGContextRef)drawContext;
-(id)initWithKey:(const VKTileKey*)arg1 size:(unsigned long long)arg2 scale:(float)arg3 ;
-(RenderItem*)setupRenderItemWithRenderState:(RenderState*)arg1 mesh:(Mesh*)arg2 ;
@end

