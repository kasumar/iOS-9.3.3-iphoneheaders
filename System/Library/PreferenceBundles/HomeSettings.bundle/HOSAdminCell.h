/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSettings/HOSUserCell.h>

@class UILabel;

@interface HOSAdminCell : HOSUserCell {

	UILabel* _emailLabel;

}

@property (nonatomic,copy,readonly) UILabel * userLabel; 
@property (nonatomic,copy,readonly) UILabel * homeLabel; 
@property (retain) UILabel * emailLabel;                              //@synthesize emailLabel=_emailLabel - In the implementation block
-(void)setEmailLabel:(UILabel *)arg1 ;
-(UILabel *)homeLabel;
-(UILabel *)emailLabel;
-(UILabel *)userLabel;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end

