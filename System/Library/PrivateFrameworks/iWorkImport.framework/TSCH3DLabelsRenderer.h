/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DResource, TSCH3DLabelResource, TSCH3DLabelResources, TSCH3DSceneRenderPipeline, TSCH3DCamera, TSCH3DDataBufferResource, TSCH3DLabelsMeshRenderer, TSCH3DLabelsRendererTransforms;

@interface TSCH3DLabelsRenderer : NSObject {

	TSCH3DResource* mLabelQuad;
	BOOL mUseLabelBounds;
	TSCH3DLabelResource* mLabel;
	TSCH3DLabelResources* mResources;
	TSCH3DSceneRenderPipeline* mPipeline;
	TSCH3DCamera* mLabelCamera;
	LabelRenderInfo mInfo;
	TSCH3DDataBufferResource* mMesh;
	TSCH3DLabelsMeshRenderer* mMeshRenderer;
	TSCH3DLabelsRendererTransforms* mTransforms;

}

@property (assign,nonatomic) BOOL useLabelBounds; 
@property (nonatomic,readonly) LabelRenderInfo renderInfo; 
@property (nonatomic,retain) TSCH3DLabelResource * label; 
@property (nonatomic,retain) TSCH3DLabelResources * resources; 
@property (nonatomic,retain) TSCH3DSceneRenderPipeline * pipeline; 
@property (nonatomic,retain) TSCH3DLabelsMeshRenderer * meshRenderer; 
@property (nonatomic,retain) TSCH3DDataBufferResource * mesh; 
@property (nonatomic,readonly) TSCH3DCamera * labelCamera; 
+(id)renderCacheKey;
+(id)renderer;
-(void)prepareCachedIndex:(const tvec2<int>*)arg1 string:(id)arg2 alignmentPadding:(const tvec2<float>*)arg3 width:(double)arg4 bitmapContextInfo:(id)arg5 ;
-(void)delegateDidSubmitLabel;
-(void)renderAtPosition:(const tvec3<float>*)arg1 offset:(const tvec3<float>*)arg2 alignment:(unsigned)arg3 offset2D:(const tvec2<float>*)arg4 rotation:(float)arg5 externalAttribute:(const ExternalLabelAttribute*)arg6 ;
-(void)postrender:(id)arg1 ;
-(LabelRenderInfo)renderInfo;
-(void)prerender:(id)arg1 ;
-(void)setMesh:(TSCH3DDataBufferResource *)arg1 ;
-(const tmat4x4<float>*)unitToWorld;
-(const tmat4x4<float>*)worldToStage;
-(TSCH3DSceneRenderPipeline *)pipeline;
-(id)p_renderCacheKey;
-(TSCH3DCamera *)labelCamera;
-(id)p_renderCacheID;
-(id)p_renderCacheFromScene:(id)arg1 created:(BOOL*)arg2 createIfAbsent:(BOOL)arg3 ;
-(BOOL)cacheEnabled;
-(BOOL)hasCachedLabels;
-(void)setPipeline:(TSCH3DSceneRenderPipeline *)arg1 ;
-(void)setMeshRenderer:(TSCH3DLabelsMeshRenderer *)arg1 ;
-(TSCH3DLabelsMeshRenderer *)meshRenderer;
-(BOOL)isCacheValid;
-(id)labelQuad;
-(BOOL)beginResources:(id)arg1 expectedSize:(tvec2<int>*)arg2 ;
-(void)endResources;
-(BOOL)useLabelBounds;
-(void)setUseLabelBounds:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(TSCH3DLabelResource *)label;
-(void)setLabel:(TSCH3DLabelResource *)arg1 ;
-(TSCH3DLabelResources *)resources;
-(void)setResources:(TSCH3DLabelResources *)arg1 ;
-(TSCH3DDataBufferResource *)mesh;
-(id)effects;
@end

