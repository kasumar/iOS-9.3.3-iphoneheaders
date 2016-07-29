/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@protocol PSTimeRangeCellDelegate;
@class UILabel;

@interface PSTimeRangeCell : PSTableCell {

	UILabel* _fromTitle;
	UILabel* _toTitle;
	UILabel* _fromTime;
	UILabel* _toTime;
	id<PSTimeRangeCellDelegate> _delegate;

}
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

