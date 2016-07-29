/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTableViewCell.h>

@class UILabel, NSMutableArray, NSArray;

@interface _MKPlaceActionCell : MKTableViewCell {

	UILabel* _titleLabel;
	NSMutableArray* _scaledConstraints;
	NSArray* _marginConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * scaledConstraints;              //@synthesize scaledConstraints=_scaledConstraints - In the implementation block
@property (nonatomic,retain) NSArray * marginConstraints;                     //@synthesize marginConstraints=_marginConstraints - In the implementation block
+(double)intrinsicContentHeight;
+(id)fontForLabel;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutMarginsDidChange;
-(void)tintColorDidChange;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSArray *)marginConstraints;
-(NSMutableArray *)scaledConstraints;
-(void)contentSizeDidChange;
-(void)setScaledConstraints:(NSMutableArray *)arg1 ;
-(void)refreshMarginConstraints;
-(void)setMarginConstraints:(NSArray *)arg1 ;
@end

