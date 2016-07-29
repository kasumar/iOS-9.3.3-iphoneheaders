/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DProjector : NSObject {

	tmat4x4<float> mProjection;
	tmat4x4<float> mTransform;
	tmat4x4<float> mCombined;

}

@property (nonatomic,readonly) const tmat4x4<float>* projection; 
@property (nonatomic,readonly) const tmat4x4<float>* transform; 
@property (nonatomic,readonly) const tmat4x4<float>* combined; 
+(id)projectorWithProjection:(const tmat4x4<float>*)arg1 transform:(const tmat4x4<float>*)arg2 ;
-(const tmat4x4<float>*)combined;
-(line<glm::detail::tvec3<float> >)objectSpaceLineFromPoint:(const tvec2<float>*)arg1 ;
-(id)initWithProjection:(const tmat4x4<float>*)arg1 transform:(const tmat4x4<float>*)arg2 ;
-(const tmat4x4<float>*)projection;
-(const tmat4x4<float>*)transform;
@end

