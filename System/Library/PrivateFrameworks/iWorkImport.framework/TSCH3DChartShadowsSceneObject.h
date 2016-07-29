/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneObject.h>

@interface TSCH3DChartShadowsSceneObject : TSCH3DSceneObject
+(void)invalidateShadowsForScene:(id)arg1 ;
+(void)setShadowPlanePadding:(box<glm::detail::tvec3<float> >)arg1 forScene:(id)arg2 ;
-(void)renderShadowScene:(id)arg1 ;
-(tvec3<float>)calculateShadowCameraPosition:(float)arg1 center:(tvec3<float>)arg2 shadowQuality:(float)arg3 depthLimitAdjustment:(float)arg4 ;
-(void)getBounds:(id)arg1 ;
-(id)propertiesForScene:(id)arg1 ;
-(void)prerender:(id)arg1 ;
-(box<glm::detail::tvec3<float> >)p_shadowPlanePaddingForScene:(id)arg1 ;
-(id)TSDShadowFromScene:(id)arg1 ;
-(void)prerenderShadows:(id)arg1 blurslack:(float)arg2 angle:(float)arg3 quality:(float)arg4 targetFBO:(id)arg5 ;
-(float)p_chartOpacityForScene:(id)arg1 ;
-(void)renderShadows:(id)arg1 ;
-(void)render:(id)arg1 ;
-(id)effects;
@end

