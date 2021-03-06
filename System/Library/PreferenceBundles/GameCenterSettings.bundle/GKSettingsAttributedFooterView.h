/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/GameCenterSettings.bundle/GameCenterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class PSSpecifier, NSString, GKTextStyle, GKLabel;

@interface GKSettingsAttributedFooterView : UIView <PSHeaderFooterView> {

	PSSpecifier* _specifier;
	NSString* _text;
	GKTextStyle* _textStyle;
	GKLabel* _label;

}

@property (nonatomic,retain) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) GKTextStyle * textStyle;                       //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) GKTextStyle * defaultTextStyle; 
@property (nonatomic,retain) GKLabel * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) PSSpecifier * specifier; 
-(id)attributedStringForString:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(GKLabel *)label;
-(void)setLabel:(GKLabel *)arg1 ;
-(GKTextStyle *)textStyle;
-(void)setTextStyle:(GKTextStyle *)arg1 ;
-(PSSpecifier *)specifier;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(GKTextStyle *)defaultTextStyle;
@end

