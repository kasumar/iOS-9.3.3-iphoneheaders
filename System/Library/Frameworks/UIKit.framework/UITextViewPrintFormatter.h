/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewPrintFormatter.h>

@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter {

	struct {
		unsigned initializedUsedRects : 1;
	}  _textViewPrintFormatterFlags;
	NSArray* _pageData;

}
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)attributedText;
-(id)font;
-(long long)textAlignment;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)_textView;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(id)_pageData;
@end

