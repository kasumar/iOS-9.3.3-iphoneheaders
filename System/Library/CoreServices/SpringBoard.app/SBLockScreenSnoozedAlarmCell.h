/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLockScreenBulletinCell.h>
#import <SpringBoard/SBDateLabelDelegate.h>

@class SBSnoozedAlarmDateLabel;

@interface SBLockScreenSnoozedAlarmCell : SBLockScreenBulletinCell <SBDateLabelDelegate> {

	SBSnoozedAlarmDateLabel* _countdownLabel;

}
+(BOOL)wantsUnlockActionText;
+(double)rowHeight;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setFireDate:(id)arg1 ;
-(void)dateLabelDidChange:(id)arg1 ;
-(void)setContentAlpha:(double)arg1 ;
@end

