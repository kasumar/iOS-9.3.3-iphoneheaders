/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPCluster : NSObject <CPDisposable> {

	const SCD_Struct_CP24* profile;
	unsigned xCount;
	double* x;
	double* dx;
	unsigned* dxOrderIndex;
	unsigned interClusterMinIndex;
	double* ddx;
	unsigned* ddxOrderIndex;
	unsigned interLevelMinIndex;
	unsigned minClusterSize;
	double maxClusterSpread;
	double minInterClusterDiff;
	double minInterLevel2ndDiff;
	unsigned clusterCount;
	SCD_Struct_CP25* xStats;
	unsigned levels;
	SCD_Struct_CP25* dxStats;
	BOOL ownData;
	BOOL ownDifferences;

}
+(void)clusterTextLine:(id)arg1 ;
+(void)clusterTextLine:(id)arg1 withCluster:(id)arg2 atLevel:(unsigned)arg3 withMaximumWordGap:(double*)arg4 andMaximumLetterGap:(double*)arg5 ;
+(void)reclusterTextLine:(id)arg1 fromWordIndex:(unsigned)arg2 count:(unsigned*)arg3 ;
+(unsigned*)createOrderIndexFor:(double*)arg1 ofSize:(unsigned)arg2 ;
-(void)findClustersFromCharacterSequence:(id)arg1 withSpaceHint:(BOOL)arg2 ;
-(void)makeWords:(SCD_Struct_CP18*)arg1 count:(unsigned)arg2 fromCharacterSequence:(id)arg3 charOffset:(unsigned)arg4 ;
-(void)tryLevel0SplitBetween:(double)arg1 and:(double)arg2 usingHints:(SCD_Struct_CP25*)arg3 ;
-(void)dealloc;
-(id)init;
-(unsigned)levels;
-(BOOL)joinLevelsFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(void)resetAnalysis;
-(void)splitSecondDifferences;
-(void)assembleDifferenceStats;
-(BOOL)coalesceFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(void)computeDataFromDifferences;
-(void)assembleDensityDifferenceStats;
-(void)computeDifferencesFromData;
-(void)analyzeDifferences;
-(void)analyzeDensities;
-(BOOL)splitLevelAtIndex:(unsigned)arg1 betweenValue:(double)arg2 andValue:(double)arg3 ;
-(BOOL)joinClosestLevelPairFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(void)assembleDataStats;
-(void)setMinimumClusterSize:(unsigned)arg1 ;
-(void)setMaximumClusterSpread:(double)arg1 ;
-(void)setMinimumRecognizedInterClusterDifference:(double)arg1 ;
-(void)setMinimumRecognizedInterLevel2ndDifference:(double)arg1 ;
-(void)findClusters:(double*)arg1 count:(unsigned)arg2 ;
-(void)findClustersFromDifferences:(double*)arg1 count:(unsigned)arg2 ;
-(void)findDensityClusters:(double*)arg1 count:(unsigned)arg2 ;
-(BOOL)applyDifferenceHints:(SCD_Struct_CP25*)arg1 count:(unsigned)arg2 ;
-(unsigned)clusterCount;
-(SCD_Struct_CP25)clusterStatisticsAtIndex:(unsigned)arg1 ;
-(SCD_Struct_CP25)differenceClusterStatisticsAtIndex:(unsigned)arg1 ;
-(SCD_Struct_CP25)largestClusterStatistics;
-(void)dispose;
-(id)initWithProfile:(const SCD_Struct_CP24*)arg1 ;
-(void)finalize;
@end
