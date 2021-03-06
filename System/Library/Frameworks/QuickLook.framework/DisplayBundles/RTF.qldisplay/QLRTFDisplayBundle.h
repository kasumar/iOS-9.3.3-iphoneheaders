/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/RTF.qldisplay/RTF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RTF/RTF-Structs.h>
#import <QuickLook/QLDisplayBundle.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSAttributedString, UITextView, NSString;

@interface QLRTFDisplayBundle : QLDisplayBundle <UITextViewDelegate, UIGestureRecognizerDelegate> {

	NSAttributedString* _content;

}

@property (nonatomic,retain) UITextView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)scrollView;
-(void)loadView;
-(void)loadWithHints:(id)arg1 ;
-(BOOL)needsContentInset;
-(int)airPlayMode;
-(id)printPageHelper;
-(long long)preferredWhitePointAdaptivityStyle;
-(void)_loadContent;
@end

