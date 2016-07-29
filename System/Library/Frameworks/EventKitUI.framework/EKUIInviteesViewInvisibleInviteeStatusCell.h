/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSArray, NSLayoutConstraint;

@interface EKUIInviteesViewInvisibleInviteeStatusCell : UITableViewCell {

	UILabel* _nameLabel;
	UILabel* _commentLabel;
	NSArray* _persistentConstraints;
	NSArray* _removableConstraints;
	NSLayoutConstraint* _minimumHeightConstraint;
	NSLayoutConstraint* _nameBaselineToTopConstraint;
	double _leftInset;

}

@property (nonatomic,retain) UILabel * nameLabel;                                           //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * commentLabel;                                        //@synthesize commentLabel=_commentLabel - In the implementation block
@property (nonatomic,retain) NSArray * persistentConstraints;                               //@synthesize persistentConstraints=_persistentConstraints - In the implementation block
@property (nonatomic,retain) NSArray * removableConstraints;                                //@synthesize removableConstraints=_removableConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * minimumHeightConstraint;                  //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nameBaselineToTopConstraint;              //@synthesize nameBaselineToTopConstraint=_nameBaselineToTopConstraint - In the implementation block
@property (assign,nonatomic) double leftInset;                                              //@synthesize leftInset=_leftInset - In the implementation block
+(id)_nameLabelFont;
+(id)_commentLabelFont;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setCommentLabel:(UILabel *)arg1 ;
-(NSArray *)persistentConstraints;
-(UILabel *)commentLabel;
-(void)setNameBaselineToTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)nameBaselineToTopConstraint;
-(void)setMinimumHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(NSArray *)removableConstraints;
-(void)setRemovableConstraints:(NSArray *)arg1 ;
-(void)updateWithParticipantForSorting:(id)arg1 ;
-(double)leftInset;
-(void)setLeftInset:(double)arg1 ;
@end

