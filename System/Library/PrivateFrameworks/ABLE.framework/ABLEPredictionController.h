/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, ABLECoreDuetController;

@interface ABLEPredictionController : NSObject {

	BOOL _approximateMissingData;
	NSDictionary* _currentData;
	NSArray* _dayOffsets;
	NSArray* _coefficients;
	double _rejectionThresholdForMissingData;
	ABLECoreDuetController* _coreDuetController;

}

@property (retain) NSDictionary * currentData;                                 //@synthesize currentData=_currentData - In the implementation block
@property (assign) BOOL approximateMissingData;                                //@synthesize approximateMissingData=_approximateMissingData - In the implementation block
@property (readonly) NSArray * dayOffsets;                                     //@synthesize dayOffsets=_dayOffsets - In the implementation block
@property (retain) NSArray * coefficients;                                     //@synthesize coefficients=_coefficients - In the implementation block
@property (assign) double rejectionThresholdForMissingData;                    //@synthesize rejectionThresholdForMissingData=_rejectionThresholdForMissingData - In the implementation block
@property (readonly) ABLECoreDuetController * coreDuetController;              //@synthesize coreDuetController=_coreDuetController - In the implementation block
-(id)initWithCoreDuetController:(id)arg1 ;
-(void)setRejectionThresholdForMissingData:(double)arg1 ;
-(void)setApproximateMissingData:(BOOL)arg1 ;
-(id)predictForDay:(id)arg1 usingDayOffsets:(id)arg2 andCoefficients:(id)arg3 ;
-(void)setCurrentData:(NSDictionary *)arg1 ;
-(NSArray *)dayOffsets;
-(ABLECoreDuetController *)coreDuetController;
-(NSDictionary *)currentData;
-(double)rejectionThresholdForMissingData;
-(BOOL)approximateMissingData;
-(NSArray *)coefficients;
-(id)predictForDay:(id)arg1 ;
-(void)setCoefficients:(NSArray *)arg1 ;
@end

