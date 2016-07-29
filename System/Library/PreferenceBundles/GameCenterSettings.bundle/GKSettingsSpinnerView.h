/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/GameCenterSettings.bundle/GameCenterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class PSSpecifier, UIActivityIndicatorView;

@interface GKSettingsSpinnerView : UIView <PSHeaderFooterView> {

	PSSpecifier* _specifier;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,readonly) PSSpecifier * specifier; 
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(PSSpecifier *)specifier;
-(UIActivityIndicatorView *)spinnerView;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
@end
