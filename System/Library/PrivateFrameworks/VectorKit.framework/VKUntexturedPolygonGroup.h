/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKPolygonGroup.h>

@class NSMutableOrderedSet, NSOrderedSet;

@interface VKUntexturedPolygonGroup : VKPolygonGroup {

	NSMutableOrderedSet* _attributeSets;
	vector<std::__1::shared_ptr<gss::StyleQuery>, std::__1::allocator<std::__1::shared_ptr<gss::StyleQuery> > >* _styleQueries;
	vector<std::__1::shared_ptr<gss::StyleQuery>, std::__1::allocator<std::__1::shared_ptr<gss::StyleQuery> > >* _flatRoofStyleQueries;
	vector<std::__1::shared_ptr<gss::BuildingDrawStyle>, std::__1::allocator<std::__1::shared_ptr<gss::BuildingDrawStyle> > >* _buildingDrawStyles;
	vector<std::__1::shared_ptr<gss::BuildingDrawStyle>, std::__1::allocator<std::__1::shared_ptr<gss::BuildingDrawStyle> > >* _flatRoofBuildingDrawStyles;

}

@property (nonatomic,readonly) NSOrderedSet * attributeSets; 
-(void)dealloc;
-(vector<std::__1::shared_ptr<gss::BuildingDrawStyle>, std::__1::allocator<std::__1::shared_ptr<gss::BuildingDrawStyle> > >*)buildingDrawStylesForPointyRoofs:(BOOL)arg1 ;
-(void)updateWithStyleResolutionSession:(StyleResolutionSession<geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >*)arg1 ;
-(unsigned char)indexForGeoFeatureAttributes:(id)arg1 ;
-(NSOrderedSet *)attributeSets;
-(id)initWithStyleQuery:(shared_ptr<gss::StyleQuery>*)arg1 tile:(id)arg2 fixedAroundCentroid:(const Matrix<float, 2, 1>*)arg3 contentScale:(float)arg4 ;
-(BOOL)canAcceptPolygon:(SCD_Struct_VK472*)arg1 ;
@end

