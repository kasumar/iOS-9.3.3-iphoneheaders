/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIView.h>

@protocol _SFJavaScriptDialogViewDelegate;
@class UIView, _SFJavaScriptDialogContentView;

@interface _SFJavaScriptDialogView : UIView {

	UIView* _dimmingView;
	_SFJavaScriptDialogContentView* _contentView;
	UIView* _keyboardAlignmentView;
	UIView* _keyboardAlignmentAvailableSpaceView;
	id<_SFJavaScriptDialogViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFJavaScriptDialogViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_SFJavaScriptDialogViewDelegate>)arg1 ;
-(id<_SFJavaScriptDialogViewDelegate>)delegate;
-(void)setMessageText:(id)arg1 ;
-(void)setPromptText:(id)arg1 ;
-(void)setActionTitles:(id)arg1 ;
@end

