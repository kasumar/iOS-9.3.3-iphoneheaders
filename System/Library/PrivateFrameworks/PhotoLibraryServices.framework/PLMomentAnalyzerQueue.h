/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface PLMomentAnalyzerQueue : NSObject {

	double _firstPingSinceReset;
	double _lastPingSinceReset;
	NSMutableSet* _momentListIdsToProcess;
	double _minimumInterval;
	double _maximumInterval;

}

@property (assign,nonatomic) double minimumInterval;                //@synthesize minimumInterval=_minimumInterval - In the implementation block
@property (assign,nonatomic) double maximumInterval;                //@synthesize maximumInterval=_maximumInterval - In the implementation block
@property (nonatomic,readonly) BOOL hasWork; 
@property (nonatomic,readonly) BOOL shouldProcessWork; 
-(void)dealloc;
-(id)init;
-(void)enqueueMomentListIds:(id)arg1 ;
-(BOOL)hasWork;
-(BOOL)shouldProcessWork;
-(id)dequeueMomentListIdsForProcessing;
-(void)setMinimumInterval:(double)arg1 ;
-(void)setMaximumInterval:(double)arg1 ;
-(double)minimumInterval;
-(double)maximumInterval;
@end

