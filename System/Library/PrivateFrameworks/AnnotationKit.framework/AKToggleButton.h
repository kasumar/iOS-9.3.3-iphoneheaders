/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface AKToggleButton : UIButton {

	BOOL _showsBackgroundColor;
	BOOL _shouldTintNormalImage;
	UIColor* _selectedColor;
	UIImage* _templateImage;

}

@property (assign,nonatomic) BOOL showsBackgroundColor;               //@synthesize showsBackgroundColor=_showsBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL shouldTintNormalImage;              //@synthesize shouldTintNormalImage=_shouldTintNormalImage - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor;                 //@synthesize selectedColor=_selectedColor - In the implementation block
@property (nonatomic,retain) UIImage * templateImage;                 //@synthesize templateImage=_templateImage - In the implementation block
+(id)colorImage:(id)arg1 withColor:(id)arg2 ;
-(void)tintColorDidChange;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_touchCommitted:(id)arg1 ;
-(BOOL)showsBackgroundColor;
-(void)_updateSelectionColorsAnimated:(BOOL)arg1 ;
-(BOOL)shouldTintNormalImage;
-(void)_setSelectedStateColorImage;
-(UIColor *)selectedColor;
-(void)_setDeselectedStateColorImage;
-(id)initWithFrame:(CGRect)arg1 templateImage:(id)arg2 ;
-(void)setShowsBackgroundColor:(BOOL)arg1 ;
-(void)setShouldTintNormalImage:(BOOL)arg1 ;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)setTemplateImage:(UIImage *)arg1 ;
-(UIImage *)templateImage;
@end

