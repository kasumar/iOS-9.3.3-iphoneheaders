/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface ZWSlugTriangleView : UIView {

	CAShapeLayer* _triangleLayer;
	unsigned long long _triangle;

}

@property (nonatomic,retain) CAShapeLayer * triangleLayer;              //@synthesize triangleLayer=_triangleLayer - In the implementation block
@property (assign,nonatomic) unsigned long long triangle;               //@synthesize triangle=_triangle - In the implementation block
-(CAShapeLayer *)triangleLayer;
-(unsigned long long)triangle;
-(void)setTriangleLayer:(CAShapeLayer *)arg1 ;
-(void)setTriangle:(unsigned long long)arg1 ;
-(id)initWithTriangle:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
@end
