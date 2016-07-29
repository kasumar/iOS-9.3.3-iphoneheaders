/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _UIKBCompatInputView : UIView

@property (nonatomic,readonly) UIView * touchableView; 
+(BOOL)_retroactivelyRequiresConstraintBasedLayout;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(CGRect)_compatibleBounds;
-(BOOL)_hasAutolayoutHeightConstraint;
-(UIView *)touchableView;
@end

