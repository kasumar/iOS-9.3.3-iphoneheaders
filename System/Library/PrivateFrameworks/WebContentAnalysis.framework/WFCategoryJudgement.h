/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFCategoryJudgement : NSObject {

	float score;
	long long category;

}
+(id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2 ;
-(id)description;
-(void)setCategory:(long long)arg1 ;
-(long long)category;
-(void)setScore:(float)arg1 ;
-(float)score;
-(long long)compareByCategory:(id)arg1 ;
-(long long)compareByScore:(id)arg1 ;
@end

