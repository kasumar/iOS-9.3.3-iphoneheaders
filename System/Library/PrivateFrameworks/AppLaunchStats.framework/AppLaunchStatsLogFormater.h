/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface AppLaunchStatsLogFormater : NSObject {

	NSMutableString* fetchCandidatesStr;
	NSMutableString* fetchForeground;
	NSMutableString* fetchBlackList;
	NSMutableString* fetchRecentLaunch;
	NSMutableString* filteredCandidates;
	NSMutableString* trendingCandidates;
	NSMutableString* prewarmCandidate;
	NSMutableString* foregroundCandidate;
	NSMutableString* blacklistCandidate;
	NSMutableString* resourceRestrictCandidates;
	NSMutableString* filteredCandidatesTrend;

}
-(id)init;
-(void)resetStringIdentifierWhatToLaunch;
-(void)resetStringIdentifierTrending;
-(void)concat:(id)arg1 withSlot:(int)arg2 ;
-(void)dumpTrending;
-(void)dumpWhatToLaunch;
@end

