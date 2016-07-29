/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, SVGridProgressView, NSLayoutConstraint;

@interface SVFilesCollectionViewCell : UICollectionViewCell {

	BOOL _enabled;
	UIImageView* _imageView;
	UILabel* _nameLabel;
	UILabel* _detailLabel;
	SVGridProgressView* _downloadProgressView;
	long long _itemType;
	NSLayoutConstraint* _imageViewWidthConstraint;
	UIImageView* _badgeImageView;
	NSLayoutConstraint* _badgeImageViewWidthConstraint;
	NSLayoutConstraint* _badgeViewTrailingConstraint;
	NSLayoutConstraint* _badgeViewBottomConstraint;

}

@property (assign,nonatomic,__weak) UIImageView * imageView;                                         //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * nameLabel;                                             //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * detailLabel;                                           //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) SVGridProgressView * downloadProgressView;                              //@synthesize downloadProgressView=_downloadProgressView - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                           //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long itemType;                                                     //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * imageViewWidthConstraint;                   //@synthesize imageViewWidthConstraint=_imageViewWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * badgeImageView;                                    //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * badgeImageViewWidthConstraint;              //@synthesize badgeImageViewWidthConstraint=_badgeImageViewWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * badgeViewTrailingConstraint;                //@synthesize badgeViewTrailingConstraint=_badgeViewTrailingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * badgeViewBottomConstraint;                  //@synthesize badgeViewBottomConstraint=_badgeViewBottomConstraint - In the implementation block
-(SVGridProgressView *)downloadProgressView;
-(void)setDownloadProgressViewHidden:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setBadgeImage:(id)arg1 animated:(BOOL)arg2 ;
-(NSLayoutConstraint *)imageViewWidthConstraint;
-(void)setImageViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateBadgeViewConstraints;
-(NSLayoutConstraint *)badgeViewBottomConstraint;
-(NSLayoutConstraint *)badgeViewTrailingConstraint;
-(void)setDownloadProgressView:(SVGridProgressView *)arg1 ;
-(void)setBadgeViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBadgeViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)badgeImageViewWidthConstraint;
-(void)setBadgeImageViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)enabled;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg1 ;
-(void)awakeFromNib;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(long long)itemType;
-(void)setItemType:(long long)arg1 ;
-(UIImageView *)badgeImageView;
-(void)setBadgeImageView:(UIImageView *)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)updateFonts;
@end

