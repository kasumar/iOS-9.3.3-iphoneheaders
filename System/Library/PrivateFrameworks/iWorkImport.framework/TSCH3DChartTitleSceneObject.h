/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartLabelsContainingSceneObject.h>

@interface TSCH3DChartTitleSceneObject : TSCH3DChartLabelsContainingSceneObject
+(void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3 ;
+(BOOL)setLabelWrapBounds:(const box<glm::detail::tvec2<float> >*)arg1 forScene:(id)arg2 ;
+(TSCH3DScenePart)partWithChartInfo:(id)arg1 ;
+(CGSize)p_labelWrapSizeForScene:(id)arg1 returningSizeValue:(id*)arg2 ;
+(CGSize)labelWrapSizeForScene:(id)arg1 ;
-(void)renderLabels:(id)arg1 ;
-(void)renderAnnotatedLabels:(id)arg1 ;
-(id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2 ;
-(BOOL)isAnnotated;
-(void)p_renderLabel:(id)arg1 ;
@end
