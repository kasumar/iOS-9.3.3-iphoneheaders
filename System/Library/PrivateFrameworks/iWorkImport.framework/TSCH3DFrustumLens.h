/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRectangleLens.h>

@interface TSCH3DFrustumLens : TSCH3DRectangleLens
-(void)calculateCullingPlanes:(vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > >*)arg1 ;
-(FrustumRect)frustumRectAtDistance:(float)arg1 ;
-(tmat4x4<float>)matrix;
@end

