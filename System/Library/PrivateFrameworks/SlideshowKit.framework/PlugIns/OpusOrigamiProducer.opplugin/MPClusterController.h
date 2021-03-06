/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, MPCluster, MPDocument, NSDate;

@interface MPClusterController : NSObject {

	NSMutableDictionary* mSlides;
	NSMutableDictionary* mSlideClusters;
	MPCluster* mAllSlidesCluster;
	double mMinimumRequiredClusterRating;
	MPDocument* mAuthoredDocument;
	NSDate* mOldestSlideTimestamp;
	NSDate* mNewestSlideTimestamp;

}
+(void)releaseSharedController;
+(id)sharedController;
-(void)_removeAllSingleSlideClustersForClusterCategory:(id)arg1 ;
-(id)slideForPath:(id)arg1 ;
-(void)updateRatingsForMonthOfYearClusters;
-(id)roundedFifteenMinuteOfYearClusters;
-(void)updateRatingsForDayOfYearClusters;
-(id)monthClusters;
-(void)removeAllSingleSlideClusters;
-(void)updateRatingsForKeywordClusters;
-(void)updateRatingsForMonthClusters;
-(id)roundedFiveMinuteOfYearClusters;
-(void)updateRatingsForYearClusters;
-(id)minuteOfYearClusters;
-(id)hourOfYearClusters;
-(id)keywordClusters;
-(id)userProvidedClusters;
-(void)updateRatingsForHourOfYearClusters;
-(void)updateRatingsForMinuteOfYearClusters;
-(void)updateRatingsForRoundedFiveMinuteOfYearClusters;
-(void)updateRatingsForRoundedFifteenMinuteOfYearClusters;
-(void)updateRatingsForLocationClusters;
-(id)locationClusters;
-(id)yearClusters;
-(id)monthOfYearClusters;
-(id)dayOfYearClusters;
-(void)updateClusterRatings;
-(id)orderedAndPrioritizedSlideClusters;
-(id)findBestCluster:(id)arg1 withMaxEffectSize:(long long)arg2 idealEffectSize:(long long)arg3 ;
-(long long)addSlideForPath:(id)arg1 withIndex:(long long)arg2 ;
-(id)clusterSlidesSortedByUserDefinedSortOrder:(id)arg1 userDefinedSlideOrder:(id)arg2 ;
-(void)addPaths:(id)arg1 toUserDefinedCluster:(id)arg2 ;
-(id)findBestChronologicalCluster:(id)arg1 startingWithSlide:(id)arg2 ;
-(void)dumpSlidesStatistics;
-(id)dayOfYearClusterForAssetAtPath:(id)arg1 ;
-(void)dumpClustersStatistics;
-(void)addKeywords:(id)arg1 forSlide:(id)arg2 ;
-(id)allSlidesSortedChronologically;
-(id)monthClusterForAssetAtPath:(id)arg1 ;
-(void)resetAllUsageCounters;
-(id)findBestCluster:(id)arg1 ;
-(id)clusterSlidesSortedChronologically:(id)arg1 ;
-(void)flushClusters;
-(id)allSlidesSortedByUsage;
-(id)findBestClusterBasedOnUserDefinedSlideOrder:(id)arg1 startingWithSlide:(id)arg2 ;
-(id)allSlides;
-(id)nextLeastUsedSlides:(long long)arg1 forLayer:(id)arg2 markAsUsed:(BOOL)arg3 ;
-(void)updateYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateMonthClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateMonthOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateDayOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateHourOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateMinuteOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateRoundedFiveMinuteOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateRoundedFifteenMinuteOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateAllSlidesClusterWithSlide:(id)arg1 ;
-(id)monthOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)hourOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)minuteOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)roundedFiveMinuteOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)roundedFifteenMinuteOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)prioritizedSlideClustersDictionary;
-(void)sortClusterSlidesChronologically:(id*)arg1 ;
-(void)setAuthoredDocument:(id)arg1 ;
-(id)allSlidesSortedByPaths:(id)arg1 ;
-(id)clustersBasedOnOrderedPaths:(id)arg1 ;
-(id)yearClusterForAssetAtPath:(id)arg1 ;
-(void)createLocationClustersForPaths:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flush;
@end

