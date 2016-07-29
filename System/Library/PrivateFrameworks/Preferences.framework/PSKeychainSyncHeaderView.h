/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel;

@interface PSKeychainSyncHeaderView : UIView <PSHeaderFooterView> {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	BOOL _usesCompactLayout;

}

@property (assign,nonatomic) BOOL usesCompactLayout;              //@synthesize usesCompactLayout=_usesCompactLayout - In the implementation block
-(void)layoutSubviews;
-(void)setTitleText:(id)arg1 ;
-(void)setUsesCompactLayout:(BOOL)arg1 ;
-(BOOL)usesCompactLayout;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)setDetailText:(id)arg1 ;
@end

