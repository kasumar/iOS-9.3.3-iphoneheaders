/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSArray;

@interface UIMovieScrubberEditingView : UIView {

	UIImageView* _leftImageView;
	UIImageView* _middleImageView;
	UIImageView* _rightImageView;
	NSArray* _activeImages;
	NSArray* _activeNoEditImages;
	NSArray* _inactiveImages;
	BOOL _enabled;
	BOOL _editing;
	double _edgeInset;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;              //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) double edgeInset;                           //@synthesize edgeInset=_edgeInset - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)setEdgeInset:(double)arg1 ;
-(void)bounce;
-(int)handleForPoint:(CGPoint)arg1 hitOffset:(double*)arg2 ;
-(double)edgeInset;
-(void)_updateHandleImages;
-(id)_handleImages;
-(CGRect)_leftHandleRect;
-(CGRect)_rightHandleRect;
-(double)_bounceValueForFraction:(double)arg1 ;
-(BOOL)pointInsideLeftHandle:(CGPoint)arg1 ;
-(BOOL)pointInsideRightHandle:(CGPoint)arg1 ;
@end

