/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKAnchorContext : NSObject {

	shared_ptr<vk::AnchorContext>* _anchorContext;
	shared_ptr<vk::AnchorFactory>* _anchorFactory;

}
-(id)init;
-(void)setMercatorTerrainHeightCache:(id)arg1 ;
-(shared_ptr<vk::AnchorContext>*)anchorContext;
-(id)initMercator;
-(id)newAnchorAtCoordinate:(CGSize)arg1 followsTerrain:(BOOL)arg2 ;
-(BOOL)isMercator;
-(shared_ptr<vk::AnchorFactory>*)anchorFactory;
-(id)initWithAnchorContext:(AnchorContext*)arg1 ;
-(id)initGeocentricWithCache:(id)arg1 ;
@end

