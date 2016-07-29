/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DScene, TSCH3DChartGetProjectedBoundsPipeline, TSCH3DChartBoundsLayoutSceneDelegate;

@interface TSCH3DChartBoundsLayout : NSObject {

	TSCH3DScene* mScene;
	TSCH3DScene* mBounds;
	Class mGetBoundsClass;
	TSCH3DChartGetProjectedBoundsPipeline* mGetBounds;
	TSCH3DChartBoundsLayoutSceneDelegate* mSceneDelegate;
	box<glm::detail::tvec2<float> > mLayoutInPage;
	box<glm::detail::tvec2<float> > mBodyLayoutInPage;
	tvec2<int> mOriginalContainingViewport;
	int mMode;
	SCD_Struct_TS432 mLayoutSettings;

}

@property (nonatomic,readonly) TSCH3DScene * scene; 
@property (assign,nonatomic) box<glm::detail::tvec2<float> > layoutInPage; 
@property (assign,nonatomic) box<glm::detail::tvec2<float> > bodyLayoutInPage; 
@property (assign,nonatomic) tvec2<int> containingViewport; 
@property (assign,nonatomic) tvec2<int> originalContainingViewport; 
@property (assign,nonatomic) int mode; 
@property (nonatomic,retain) Class getBoundsClass; 
@property (nonatomic,readonly) SCD_Struct_TS432 layoutSettings; 
-(box<glm::detail::tvec2<float> >)layoutInPage;
-(void)setLayoutInPage:(box<glm::detail::tvec2<float> >)arg1 ;
-(box<glm::detail::tvec2<float> >)bodyLayoutInPage;
-(void)setBodyLayoutInPage:(box<glm::detail::tvec2<float> >)arg1 ;
-(tvec2<int>)containingViewport;
-(void)setContainingViewport:(tvec2<int>)arg1 ;
-(SCD_Struct_TS432)layoutSettings;
-(const ChartProjectedBoundsSpaces*)projectedBounds;
-(void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(long long)arg2 ;
-(void)resetSceneDelegate;
-(void)setOriginalContainingViewport:(tvec2<int>)arg1 ;
-(id)cacheableGetBoundsPipeline;
-(const ChartProjectedBoundsSpaces*)p_projectedBoundsWithLabelsMode:(int)arg1 ;
-(BOOL)isInward;
-(void)p_updateLabelWrapBoundsPass;
-(BOOL)isSage;
-(id)initWithScene:(id)arg1 containingViewport:(const tvec2<int>*)arg2 originalContainingViewport:(const tvec2<int>*)arg3 layoutSettings:(const SCD_Struct_TS432*)arg4 ;
-(ResizingSize)resizingSize;
-(void)resetContainingViewport;
-(void)cacheLabels;
-(id)debugBounds;
-(tvec2<int>)originalContainingViewport;
-(Class)getBoundsClass;
-(void)setGetBoundsClass:(Class)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)invalidateBounds;
-(TSCH3DScene *)scene;
@end

