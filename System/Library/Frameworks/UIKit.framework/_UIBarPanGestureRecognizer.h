/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPanGestureRecognizer.h>

@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer {

	long long _barAction;
	double _bias;

}

@property (nonatomic,readonly) long long barAction;              //@synthesize barAction=_barAction - In the implementation block
@property (nonatomic,readonly) double bias;                      //@synthesize bias=_bias - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(long long)barAction;
-(double)bias;
@end
