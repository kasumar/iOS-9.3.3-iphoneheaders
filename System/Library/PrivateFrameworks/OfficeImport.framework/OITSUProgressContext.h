/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OITSUProgressStage, NSDate;

@interface OITSUProgressContext : NSObject {

	OITSUProgressStage* m_currentStage;
	NSDate* m_lastReportTime;
	double m_lastProgressReport;
	double m_lastOverallProgress;

}
-(void)dealloc;
-(id)init;
-(id)currentStage;
-(void)reportProgress:(double)arg1 overallProgress:(double)arg2 ;
-(void)reset;
-(void)setProgress:(double)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
-(void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 ;
-(void)advanceProgress:(double)arg1 ;
-(double)currentPosition;
-(id)addProgressObserverBlock:(/*^block*/id)arg1 ;
-(void)createStageWithSteps:(double)arg1 ;
-(void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1 ;
-(void)endStage;
-(void)setPercentageProgressFromTCProgressContext:(double)arg1 ;
-(double)overallProgress;
-(void)addProgressObserver:(id)arg1 selector:(SEL)arg2 ;
@end

