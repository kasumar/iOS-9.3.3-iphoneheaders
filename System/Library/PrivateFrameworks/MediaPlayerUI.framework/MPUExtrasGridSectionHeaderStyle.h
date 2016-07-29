/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
@class NSString, NSDictionary, UIColor;

@interface MPUExtrasGridSectionHeaderStyle : NSObject {

	NSString* _textStyle;
	NSDictionary* _defaultFontAttributes;
	UIColor* _textColor;
	double _textBaselineHeight;
	double _textBaselineDescender;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) NSString * textStyle;                              //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultFontAttributes;              //@synthesize defaultFontAttributes=_defaultFontAttributes - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                               //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                               //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) double textBaselineHeight;                         //@synthesize textBaselineHeight=_textBaselineHeight - In the implementation block
@property (assign,nonatomic) double textBaselineDescender;                      //@synthesize textBaselineDescender=_textBaselineDescender - In the implementation block
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(NSString *)textStyle;
-(void)setTextStyle:(NSString *)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setDefaultFontAttributes:(NSDictionary *)arg1 ;
-(void)setTextBaselineDescender:(double)arg1 ;
-(void)setTextBaselineHeight:(double)arg1 ;
-(NSDictionary *)defaultFontAttributes;
-(double)textBaselineDescender;
-(double)textBaselineHeight;
@end

