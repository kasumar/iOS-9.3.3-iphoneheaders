/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIControl.h>

@class NSMutableArray, NSArray;

@interface TPNumberPad : UIControl {

	NSMutableArray* _buttons;
	BOOL _numberButtonsEnabled;

}

@property (assign,nonatomic) BOOL numberButtonsEnabled;                 //@synthesize numberButtonsEnabled=_numberButtonsEnabled - In the implementation block
@property (retain) NSArray * buttons; 
@property (assign,nonatomic) double buttonBackgroundAlpha; 
-(CGSize)intrinsicContentSize;
-(void)buttonTapped:(id)arg1 ;
-(NSArray *)buttons;
-(void)buttonDown:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(void)buttonLongPressed:(id)arg1 ;
-(void)replaceButton:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setNumberButtonsEnabled:(BOOL)arg1 ;
-(id)initWithButtons:(id)arg1 ;
-(BOOL)numberButtonsEnabled;
-(void)_addButton:(id)arg1 ;
-(void)_layoutGrid;
-(double)_backgroundAlphaOfButton:(id)arg1 ;
-(void)_setBackgroundAlphaOnButton:(id)arg1 alpha:(double)arg2 ;
-(void)buttonCancelled:(id)arg1 ;
-(void)buttonLongPressedViaGesture:(id)arg1 ;
-(double)buttonBackgroundAlpha;
-(void)setButtonBackgroundAlpha:(double)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
@end

