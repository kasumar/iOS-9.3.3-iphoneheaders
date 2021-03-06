/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView;

@interface SUFooterContainerView : UIView {

	UIView* _contentView;
	UIView* _footerView;
	BOOL _footerVisible;

}

@property (nonatomic,retain) UIView * contentView;                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                    //@synthesize footerView=_footerView - In the implementation block
@property (assign,getter=isFooterVisible,nonatomic) BOOL footerVisible;              //@synthesize footerVisible=_footerVisible - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setFooterVisible:(BOOL)arg1 ;
-(BOOL)isFooterVisible;
@end

