/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface PKPaymentSetupFindWithoutNumberFooterView : UIView {

	long long _context;
	UIButton* _noNumberButton;

}

@property (assign,nonatomic) long long context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIButton * noNumberButton;              //@synthesize noNumberButton=_noNumberButton - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(BOOL)isBuddyiPad;
-(void)setNoNumberButton:(UIButton *)arg1 ;
-(UIButton *)noNumberButton;
@end

