/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetTextViewProxy.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString;

@interface OKWidgetTextView : OKWidgetTextViewProxy <UITextViewDelegate> {

	UITextView* _textView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(void)layoutSubviews;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingText;
-(void)setSettingText:(id)arg1 ;
-(void)setSettingTextColor:(id)arg1 ;
-(id)settingFontName;
-(void)setSettingFontName:(id)arg1 ;
-(void)setSettingFontSize:(float)arg1 ;
-(float)settingFontSize;
-(id)settingTextColor;
-(id)settingTextBackgroundColor;
-(void)setSettingTextBackgroundColor:(id)arg1 ;
-(long long)settingTextAlignment;
-(void)setSettingTextAlignment:(long long)arg1 ;
-(UIEdgeInsets)settingContentEdgeInsets;
-(void)setSettingContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)settingOverflowEnabled;
-(void)setSettingOverflowEnabled:(BOOL)arg1 ;
-(BOOL)settingScrollEnabled;
-(void)setSettingScrollEnabled:(BOOL)arg1 ;
-(id)settingAttributedText;
-(void)setSettingAttributedText:(id)arg1 ;
@end

