/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIImageView, UILabel;

@interface LocationIndicatorExplanationView : UIView <PSHeaderFooterView> {

	UIImageView* _activeIcon;
	UILabel* _activeLabel;
	UIImageView* _recentIcon;
	UILabel* _recentLabel;
	UIImageView* _geofenceIcon;
	UILabel* _geofenceLabel;

}
-(void)layoutSubviews;
-(void)layoutForWidth:(double)arg1 inTableView:(id)arg2 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
@end

