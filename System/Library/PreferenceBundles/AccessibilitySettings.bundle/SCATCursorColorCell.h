/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class SCATColorCircle;

@interface SCATCursorColorCell : PSTableCell {

	SCATColorCircle* _circle;

}

@property (nonatomic,retain) SCATColorCircle * circle;              //@synthesize circle=_circle - In the implementation block
-(void)setCircle:(SCATColorCircle *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(SCATColorCircle *)circle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

