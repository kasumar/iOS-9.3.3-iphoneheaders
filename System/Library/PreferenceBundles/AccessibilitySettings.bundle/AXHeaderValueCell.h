/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface AXHeaderValueCell : UIView {

	UILabel* _headerLabel;
	UILabel* _contentLabel;

}
-(id)initWithFrame:(CGRect)arg1 header:(id)arg2 content:(id)arg3 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityScrollToVisible;
@end

