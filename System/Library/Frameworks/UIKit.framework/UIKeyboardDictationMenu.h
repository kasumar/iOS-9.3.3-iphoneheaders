/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardMenuView.h>

@interface UIKeyboardDictationMenu : UIKeyboardMenuView
+(id)sharedInstance;
+(id)activeInstance;
-(void)hide;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)fade;
-(void)fadeWithDelay:(double)arg1 ;
-(BOOL)usesTable;
-(CGSize)preferredSize;
-(BOOL)usesDimmingView;
-(void)performShowAnimation;
-(BOOL)centerPopUpOverKey;
-(void)cleanupForFadeOrHide;
@end

