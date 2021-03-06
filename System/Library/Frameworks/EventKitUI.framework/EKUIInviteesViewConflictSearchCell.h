/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSArray, UIActivityIndicatorView, UIColor;

@interface EKUIInviteesViewConflictSearchCell : UITableViewCell {

	UILabel* _label;
	NSArray* _persistentConstraints;
	double _leftInset;
	UIActivityIndicatorView* _spinner;
	UIColor* _originalLabelFontColor;

}

@property (nonatomic,retain) UILabel * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * persistentConstraints;                //@synthesize persistentConstraints=_persistentConstraints - In the implementation block
@property (assign,nonatomic) double leftInset;                               //@synthesize leftInset=_leftInset - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UIColor * originalLabelFontColor;               //@synthesize originalLabelFontColor=_originalLabelFontColor - In the implementation block
+(id)_labelFont;
+(id)_grayTextColor;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(NSArray *)persistentConstraints;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(void)setOriginalLabelFontColor:(UIColor *)arg1 ;
-(UIColor *)originalLabelFontColor;
-(void)_setText:(id)arg1 textColor:(id)arg2 spinnerEnabled:(BOOL)arg3 ;
-(void)setInitialSearchInProgressState;
-(void)setNoAvailableTimesStateWithNumberOfExistingTimes:(unsigned long long)arg1 ;
-(void)setShowMoreState;
-(void)setAvailabilityRequestInProgressState;
-(double)leftInset;
-(void)setLeftInset:(double)arg1 ;
@end

