/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel;

@interface SULinkControl : UIControl {

	UILabel* _label;
	BOOL _shouldDrawUnderline;
	unsigned _sizeIsDirty : 1;
	long long _style;

}

@property (assign,nonatomic) BOOL shouldDrawUnderline;              //@synthesize shouldDrawUnderline=_shouldDrawUnderline - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setStyle:(long long)arg1 ;
-(void)setText:(id)arg1 ;
-(void)sizeToFit;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateLabel;
-(void)setShouldDrawUnderline:(BOOL)arg1 ;
-(BOOL)shouldDrawUnderline;
-(id)_label;
@end

