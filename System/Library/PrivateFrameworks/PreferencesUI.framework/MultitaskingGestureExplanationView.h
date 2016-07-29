/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, UnderlineButton, UIColor;

@interface MultitaskingGestureExplanationView : UIView <PSHeaderFooterView> {

	UILabel* _labels[4];
	UnderlineButton* _videoLinkButton;
	double _sized;
	double _width;
	UIColor* _footerTextColor;

}
-(void)layoutSubviews;
-(BOOL)isRTL;
-(id)newRegionSampleLabelUnderlined;
-(id)_accessibilityLabels;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

