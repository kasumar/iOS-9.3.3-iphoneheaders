/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextField.h>

@protocol ABResponderDelegate;
@class UIColor;

@interface ABHighlightingTextField : UITextField {

	BOOL _isHighlighted;
	BOOL _isHighlightingEnabled;
	UIColor* _savedTextColor;
	UIColor* _highlightedTextColor;
	BOOL _showsClearButtonWhenEmpty;
	id<ABResponderDelegate> _responderDelegate;

}

@property (assign,setter=abSetHighlighted:,nonatomic) BOOL abIsHighlighted;                                   //@synthesize isHighlighted=_isHighlighted - In the implementation block
@property (assign,setter=abSetHighlightingEnabled:,nonatomic) BOOL abIsHighlightingEnabled;                   //@synthesize isHighlightingEnabled=_isHighlightingEnabled - In the implementation block
@property (setter=abSetHighlightedTextColor:,nonatomic,retain) UIColor * abHighlightedTextColor;              //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (assign,nonatomic) BOOL showsClearButtonWhenEmpty;                                                  //@synthesize showsClearButtonWhenEmpty=_showsClearButtonWhenEmpty - In the implementation block
@property (assign,nonatomic) id<ABResponderDelegate> responderDelegate;                                       //@synthesize responderDelegate=_responderDelegate - In the implementation block
-(void)dealloc;
-(BOOL)becomeFirstResponder;
-(void)setTextColor:(id)arg1 ;
-(id)_nextKeyResponder;
-(id)_previousKeyResponder;
-(BOOL)_showsClearButtonWhenEmpty;
-(void)abSetHighlighted:(BOOL)arg1 ;
-(void)setShowsClearButtonWhenEmpty:(BOOL)arg1 ;
-(BOOL)abIsHighlighted;
-(BOOL)abIsHighlightingEnabled;
-(void)abSetHighlightingEnabled:(BOOL)arg1 ;
-(UIColor *)abHighlightedTextColor;
-(void)abSetHighlightedTextColor:(id)arg1 ;
-(id<ABResponderDelegate>)responderDelegate;
-(void)setResponderDelegate:(id<ABResponderDelegate>)arg1 ;
-(BOOL)showsClearButtonWhenEmpty;
@end

