/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/OSXServerSettings.bundle/OSXServerSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class NSString, UILabel, UIActivityIndicatorView;

@interface PSSpinnerHeaderView : UIView <PSHeaderFooterView> {

	NSString* _title;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

