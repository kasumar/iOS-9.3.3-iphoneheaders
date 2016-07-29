/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPrintFormatter.h>

@class UIWebDocumentView, UIWebPaginationInfo, NSString;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {

	UIWebDocumentView* _webDocumentView;
	UIWebPaginationInfo* _paginationInfo;
	NSString* _markupText;

}

@property (nonatomic,copy) NSString * markupText;              //@synthesize markupText=_markupText - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_recalcPageCount;
-(void)removeFromPrintPageRenderer;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(void)setMarkupText:(NSString *)arg1 ;
-(id)initWithMarkupText:(id)arg1 ;
-(NSString *)markupText;
@end

