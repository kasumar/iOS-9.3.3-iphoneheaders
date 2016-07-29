/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSMutableArray, UILabel, NSString;

@interface SLSheetTitleView : UIView {

	UIImageView* _serviceIconView;
	NSMutableArray* _constraints;
	UILabel* _titleLabel;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)sizeToFit;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(void)setServiceIconImage:(id)arg1 ;
-(void)_setupTitleLabel;
@end

