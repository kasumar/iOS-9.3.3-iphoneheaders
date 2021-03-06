/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class NSArray, UILabel, NSString;

@interface ACUITextWithLinkButtonFooterView : UIView <PSHeaderFooterView> {

	NSArray* _linkButtons;
	UILabel* _textLabel;
	NSString* _footerText;

}
-(void)layoutSubviews;
-(id)initWithText:(id)arg1 linkButtons:(id)arg2 ;
-(double)_heightForFooterTextConstrainedToWidth:(double)arg1 ;
-(double)_heightForEmptyLineConstrainedToWidth:(double)arg1 ;
-(double)_heightForLinkButton:(id)arg1 constrainedToWidth:(double)arg2 ;
-(id)initWithText:(id)arg1 linkButton:(id)arg2 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

