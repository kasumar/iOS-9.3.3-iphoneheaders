/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentOptionGroupItemCell.h>

@class UITextField;

@interface PKPaymentOptionGroupItemInputCell : PKPaymentOptionGroupItemCell {

	UITextField* _textField;

}

@property (nonatomic,retain) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
-(void)_updateCellContent;
@end

