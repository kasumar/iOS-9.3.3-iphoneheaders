/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DChartScene : NSObject {

	ChartSceneInfo mSceneInfo;

}
+(BOOL)supportsValueAxisLabelAlignmentCaching;
+(void)addObjectsToSceneWithSceneInfo:(const ChartSceneInfo*)arg1 ;
-(id)chartInfo;
-(id)seriesType;
-(const SCD_Struct_TS432*)layoutSettings;
-(id)initWithSceneInfo:(const ChartSceneInfo*)arg1 ;
-(void)addAllObjectsToScene;
-(void)addLabelsToScene;
-(void)addChartTitlesToScene;
-(void)adjustSceneSettings;
-(void)addObjectsToScene;
-(void)addAllLabelsToScene;
-(void)addSeriesObjectsToScene;
-(id)scene;
-(id)chartType;
@end
