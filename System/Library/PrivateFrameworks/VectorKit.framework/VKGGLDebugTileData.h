/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKGGLDebugTileData : NSObject {

	unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> >* _namedLineMesh;
	unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> >* _unnamedLineMesh;
	unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> >* _polygonLineMesh;
	unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> >* _coastLineMesh;
	unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> >* _poiPointsMesh;
	unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> >* _verticesPointsMesh;
	unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> >* _junctionsPointsMesh;
	unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> >* _overpassPointsMesh;
	unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> >* _realTransitNodesMesh;
	unsigned long long _namedLineCount;
	unsigned long long _namedLineVertCount;
	unsigned long long _unnamedLineCount;
	unsigned long long _unnamedLineVertCount;
	unsigned long long _polygonCount;
	unsigned long long _polygonVertCount;
	unsigned long long _poiCount;
	unsigned long long _vertexCount;
	unsigned long long _junctionCount;
	unsigned long long _overpassCount;
	unsigned long long _coastLineCount;
	unsigned long long _coastLineVertCount;

}

@property (nonatomic,readonly) BaseMesh* namedLineMesh; 
@property (nonatomic,readonly) BaseMesh* unnamedLineMesh; 
@property (nonatomic,readonly) BaseMesh* polygonLineMesh; 
@property (nonatomic,readonly) BaseMesh* coastLineMesh; 
@property (nonatomic,readonly) BaseMesh* poiPointsMesh; 
@property (nonatomic,readonly) BaseMesh* verticesPointsMesh; 
@property (nonatomic,readonly) BaseMesh* junctionsPointsMesh; 
@property (nonatomic,readonly) BaseMesh* overpassPointsMesh; 
@property (nonatomic,readonly) BaseMesh* realTransitNodesMesh; 
@property (nonatomic,readonly) unsigned long long namedLineCount;                    //@synthesize namedLineCount=_namedLineCount - In the implementation block
@property (nonatomic,readonly) unsigned long long namedLineVertCount;                //@synthesize namedLineVertCount=_namedLineVertCount - In the implementation block
@property (nonatomic,readonly) unsigned long long unnamedLineCount;                  //@synthesize unnamedLineCount=_unnamedLineCount - In the implementation block
@property (nonatomic,readonly) unsigned long long unnamedLineVertCount;              //@synthesize unnamedLineVertCount=_unnamedLineVertCount - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonCount;                      //@synthesize polygonCount=_polygonCount - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonVertCount;                  //@synthesize polygonVertCount=_polygonVertCount - In the implementation block
@property (nonatomic,readonly) unsigned long long poiCount;                          //@synthesize poiCount=_poiCount - In the implementation block
@property (nonatomic,readonly) unsigned long long vertexCount;                       //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) unsigned long long junctionCount;                     //@synthesize junctionCount=_junctionCount - In the implementation block
@property (nonatomic,readonly) unsigned long long overpassCount;                     //@synthesize overpassCount=_overpassCount - In the implementation block
@property (nonatomic,readonly) unsigned long long coastLineCount;                    //@synthesize coastLineCount=_coastLineCount - In the implementation block
@property (nonatomic,readonly) unsigned long long coastLineVertCount;                //@synthesize coastLineVertCount=_coastLineVertCount - In the implementation block
-(unsigned long long)vertexCount;
-(id)initWithTile:(id)arg1 ;
-(BaseMesh*)overpassPointsMesh;
-(BaseMesh*)verticesPointsMesh;
-(BaseMesh*)namedLineMesh;
-(BaseMesh*)coastLineMesh;
-(BaseMesh*)poiPointsMesh;
-(BaseMesh*)unnamedLineMesh;
-(BaseMesh*)polygonLineMesh;
-(BaseMesh*)junctionsPointsMesh;
-(BaseMesh*)realTransitNodesMesh;
-(void)_fillInDebugData:(id)arg1 ;
-(unsigned long long)namedLineCount;
-(unsigned long long)polygonVertCount;
-(unsigned long long)poiCount;
-(unsigned long long)polygonCount;
-(unsigned long long)coastLineCount;
-(unsigned long long)junctionCount;
-(unsigned long long)unnamedLineVertCount;
-(unsigned long long)namedLineVertCount;
-(unsigned long long)coastLineVertCount;
-(unsigned long long)overpassCount;
-(unsigned long long)unnamedLineCount;
@end

