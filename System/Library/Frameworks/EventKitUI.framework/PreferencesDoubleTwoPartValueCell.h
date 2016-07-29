/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/PreferencesTwoPartValueCell.h>

@class UILabel, TwoPartTextLabel;

@interface PreferencesDoubleTwoPartValueCell : PreferencesTwoPartValueCell {

	UILabel* _textLabel2;
	TwoPartTextLabel* _twoPartLabel2;

}

@property (nonatomic,retain,readonly) UILabel * textLabel2; 
@property (nonatomic,retain,readonly) TwoPartTextLabel * twoPartTextLabel2; 
-(UILabel *)textLabel2;
-(TwoPartTextLabel *)twoPartTextLabel2;
-(void)layoutText:(id)arg1 andValue:(id)arg2 ;
-(void)_layoutSubviewsCore;
-(void)checkValueWidths;
@end

