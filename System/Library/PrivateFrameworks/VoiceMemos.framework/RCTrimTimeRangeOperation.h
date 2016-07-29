/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <Foundation/NSOperation.h>

@class NSError;

@interface RCTrimTimeRangeOperation : NSOperation {

	BOOL _canSimulateTrimmingProgress;
	float _simulatedProgress;
	BOOL _trimMode;
	/*^block*/id _progressUpdateBlock;
	SCD_Struct_RC4 _timeRange;

}

@property (nonatomic,readonly) SCD_Struct_RC4 timeRange;                         //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) BOOL trimMode;                                    //@synthesize trimMode=_trimMode - In the implementation block
@property (nonatomic,copy) id progressUpdateBlock;                               //@synthesize progressUpdateBlock=_progressUpdateBlock - In the implementation block
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) double exportedDuration; 
@property (nonatomic,readonly) BOOL progressShouldContinueUpdating; 
@property (nonatomic,readonly) double progress; 
-(void)start;
-(float)_progress;
-(double)progress;
-(void)main;
-(SCD_Struct_RC4)timeRange;
-(id)initWithTimeRange:(SCD_Struct_RC4)arg1 trimMode:(long long)arg2 ;
-(BOOL)trimMode;
-(id)progressUpdateBlock;
-(void)simulateTrimmingProgress;
-(void)setProgressUpdateBlock:(id)arg1 ;
-(void)setCanSimulateTrimmingProgress:(BOOL)arg1 ;
-(void)updateExportSessionProgressWithInterval:(double)arg1 ;
-(void)_postFinalProgressUpdateNotification;
-(BOOL)progressShouldContinueUpdating;
@end

