/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKRasterTile.h>

@interface VKRasterizedMapTile : VKRasterTile
-(void)gglBuildTexture;
-(void)buildTexture;
-(id)initWithKey:(const VKTileKey*)arg1 gglTexture:(const shared_ptr<ggl::Texture2D>*)arg2 styleManager:(shared_ptr<gss::StyleManager>*)arg3 ;
@end

