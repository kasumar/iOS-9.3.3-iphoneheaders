/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertButton.h>

@class UILabel;

@interface UIAlertLabeledButton : UIAlertButton {

	UILabel* _typeLabel;
	double _titleOffset;

}

@property (nonatomic,readonly) UILabel * typeLabel; 
@property (assign,nonatomic) double titleOffset;                 //@synthesize titleOffset=_titleOffset - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(double)titleOffset;
-(void)setTitleOffset:(double)arg1 ;
-(UILabel *)typeLabel;
@end

