/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/UsageBundles/NanoBackupUsage.bundle/NanoBackupUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSUsageBundleCell.h>

@class UILabel, NSLayoutConstraint;

@interface NBUsageTableViewCell : PSUsageBundleCell {

	UILabel* textLabel;
	UILabel* detailTextLabel;
	UILabel* _sizeLabel;
	NSLayoutConstraint* _textBottomConstraint;
	NSLayoutConstraint* _textLeadingConstraint;

}

@property (nonatomic,retain) UILabel * textLabel; 
@property (nonatomic,retain) UILabel * detailTextLabel; 
@property (nonatomic,retain) UILabel * sizeLabel;                                     //@synthesize sizeLabel=_sizeLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textBottomConstraint;               //@synthesize textBottomConstraint=_textBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLeadingConstraint;              //@synthesize textLeadingConstraint=_textLeadingConstraint - In the implementation block
-(void)setTextBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)sizeLabel;
-(NSLayoutConstraint *)textBottomConstraint;
-(NSLayoutConstraint *)textLeadingConstraint;
-(void)setSizeLabel:(UILabel *)arg1 ;
-(void)setTextLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(void)prepareForReuse;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)updateConstraints;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end

