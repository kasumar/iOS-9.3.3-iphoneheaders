/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetExpertCenter/Experts/DeeplinkPrediction.bundle/DeeplinkPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface DeeplinkHistoryLogger : NSObject {

	NSMutableDictionary* _deeplinkHistory;

}
+(id)sharedInstance;
-(id)_dedupingKeyForDKEvent:(id)arg1 ;
-(void)logFrecencyScore:(id)arg1 score:(double)arg2 ;
-(id)_bundleIdForDKEvent:(id)arg1 ;
-(void)logSpotlightHistogram:(id)arg1 baseScore:(double)arg2 subScore:(double)arg3 now:(id)arg4 then:(id)arg5 todOneHour:(id)arg6 ;
-(void)logSpotlightScore:(id)arg1 score:(double)arg2 ;
-(void)asyncFlushFrecencyHistory;
-(void)logFrecencyEvent:(id)arg1 startDate:(id)arg2 subScore:(double)arg3 ;
-(id)_retriveDeeplinkHistoryItem:(id)arg1 ;
-(id)init;
@end

