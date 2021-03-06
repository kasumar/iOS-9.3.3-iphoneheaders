/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView;

@interface _SFNavigationBarReaderButton : UIButton {

	UIImageView* _glyphView;
	UIImageView* _glyphKnockoutView;
	BOOL _drawsLightGlyph;

}

@property (assign,nonatomic) BOOL drawsLightGlyph;              //@synthesize drawsLightGlyph=_drawsLightGlyph - In the implementation block
@property (nonatomic,readonly) CGSize visibleSize; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setDrawsLightGlyph:(BOOL)arg1 ;
-(CGSize)visibleSize;
-(BOOL)drawsLightGlyph;
@end

