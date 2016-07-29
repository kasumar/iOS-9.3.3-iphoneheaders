/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFont, UIColor, NSString;


@protocol CalendarLabelTextMetrics
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) NSString * text; 
@required
-(void)setNumberOfLines:(long long)arg1;
-(void)setTextAlignment:(long long)arg1;
-(void)setTextColor:(id)arg1;
-(void)setFont:(id)arg1;
-(NSString *)text;
-(void)setText:(id)arg1;
-(void)setLineBreakMode:(long long)arg1;
-(UIFont *)font;
-(UIColor *)textColor;
-(long long)textAlignment;
-(long long)lineBreakMode;
-(CGRect*)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
-(long long)numberOfLines;

@end

