/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLOptionElement : DOMHTMLElement

@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * label; 
@property (assign) BOOL defaultSelected; 
@property (assign) BOOL selected; 
@property (copy) NSString * value; 
@property (copy,readonly) NSString * text; 
@property (readonly) int index; 
-(id)itemTitle;
-(id)createSelectedItem;
-(id)createPickerCell;
-(void)populateCell:(id)arg1 ;
-(BOOL)defaultSelected;
-(void)setDefaultSelected:(BOOL)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)text;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(int)index;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(DOMHTMLFormElement *)form;
-(BOOL)selected;
@end

