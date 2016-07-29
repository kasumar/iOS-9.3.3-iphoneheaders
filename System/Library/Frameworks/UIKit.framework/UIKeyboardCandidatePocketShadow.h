/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UIKeyboardCandidatePocketShadow : UIView {

	BOOL _shadowFadesToBottom;
	BOOL _drawsShadow;

}

@property (assign,nonatomic) BOOL shadowFadesToBottom;              //@synthesize shadowFadesToBottom=_shadowFadesToBottom - In the implementation block
@property (assign,nonatomic) BOOL drawsShadow;                      //@synthesize drawsShadow=_drawsShadow - In the implementation block
+(double)widthWithShadow:(BOOL)arg1 ;
+(id)leftShadowImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setShadowFadesToBottom:(BOOL)arg1 ;
-(void)setDrawsShadow:(BOOL)arg1 ;
-(BOOL)shadowFadesToBottom;
-(BOOL)drawsShadow;
@end

