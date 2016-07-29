/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface MFModernAtomIconView : UIView {

	NSArray* _iconImages;
	double _iconPadding;
	CGPoint _drawingOffset;

}

@property (nonatomic,retain) NSArray * iconImages;               //@synthesize iconImages=_iconImages - In the implementation block
@property (assign,nonatomic) double iconPadding;                 //@synthesize iconPadding=_iconPadding - In the implementation block
@property (assign,nonatomic) CGPoint drawingOffset;              //@synthesize drawingOffset=_drawingOffset - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDrawingOffset:(CGPoint)arg1 ;
-(void)setIconImages:(NSArray *)arg1 ;
-(NSArray *)iconImages;
-(CGPoint)drawingOffset;
-(double)preferredWidth;
-(void)setIconPadding:(double)arg1 ;
-(double)iconPadding;
@end

