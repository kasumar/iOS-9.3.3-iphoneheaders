/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UIFont, UIColor, NSArray, NSString;

@interface MCDAndOthersLabel : UIView {

	UIFont* _font;
	UIColor* _textColor;
	NSArray* _items;
	NSString* _separator;
	NSString* _andOthers;
	NSString* _truncatedItemsString;

}

@property (nonatomic,retain) UIFont * font;                       //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSArray * items;                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * separator;                //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) NSString * andOthers;                //@synthesize andOthers=_andOthers - In the implementation block
@property (nonatomic,readonly) double actualHeight; 
@property (nonatomic,readonly) double desiredHeight; 
-(void)drawRect:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(id)_textAttributes;
-(void)setSeparator:(NSString *)arg1 ;
-(double)desiredHeight;
-(void)_truncateItemsToFit;
-(long long)_stringDrawingOptions;
-(double)actualHeight;
-(NSString *)andOthers;
-(void)setAndOthers:(NSString *)arg1 ;
-(NSString *)separator;
@end

