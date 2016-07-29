/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSArray;

@interface MCProfileKeyDataCell : UITableViewCell {

	UILabel* _keyLabel;
	UILabel* _valueLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * keyLabel;                 //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;               //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)constraints;
-(void)_setupConstraints;
-(UILabel *)valueLabel;
-(void)_setup;
-(void)setConstraints:(NSArray *)arg1 ;
-(UILabel *)keyLabel;
-(void)setKeyValue:(id)arg1 ;
-(void)setKeyLabel:(UILabel *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
@end

