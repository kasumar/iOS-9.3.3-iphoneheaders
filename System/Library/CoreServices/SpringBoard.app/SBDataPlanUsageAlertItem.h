/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@class NSNumber;

@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem {

	NSNumber* _remainingPortion;

}

@property (nonatomic,retain) NSNumber * remainingPortion;              //@synthesize remainingPortion=_remainingPortion - In the implementation block
-(id)initWithAccountURL:(id)arg1 usage:(id)arg2 ;
-(void)setRemainingPortion:(NSNumber *)arg1 ;
-(NSNumber *)remainingPortion;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
@end

