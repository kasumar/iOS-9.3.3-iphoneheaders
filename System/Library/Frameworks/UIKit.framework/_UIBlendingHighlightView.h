/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIAlertControllerBackgroundView.h>

@class UIView, NSString;

@interface _UIBlendingHighlightView : UIView <UIAlertControllerBackgroundView> {

	UIView* _colorBurnView;
	UIView* _plusDView;

}

@property (assign) double cornerRadius; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_blendingSeparatorView;
+(id)_blendingPressedView;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 colorBurnColor:(id)arg2 plusDColor:(id)arg3 ;
@end

