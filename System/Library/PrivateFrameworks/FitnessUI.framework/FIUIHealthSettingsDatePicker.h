/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIDatePicker.h>

@interface FIUIHealthSettingsDatePicker : UIDatePicker {

	/*^block*/id _dateUpdateHandler;

}

@property (nonatomic,copy) id dateUpdateHandler;              //@synthesize dateUpdateHandler=_dateUpdateHandler - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)forceUpdate;
-(void)_dateDidChange:(id)arg1 ;
-(id)dateUpdateHandler;
-(void)setDateUpdateHandler:(id)arg1 ;
@end

