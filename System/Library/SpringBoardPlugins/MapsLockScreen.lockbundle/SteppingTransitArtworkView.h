/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSArray;

@interface SteppingTransitArtworkView : UIView {

	double _preferredMaxLayoutWidth;
	NSMutableArray* _layoutConstraints;
	double _totalImageWidth;
	double _maxImageHeight;
	NSArray* _images;

}

@property (nonatomic,copy) NSArray * images;                                  //@synthesize images=_images - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth;                  //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (nonatomic,retain) NSMutableArray * layoutConstraints;              //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (assign,nonatomic) double totalImageWidth;                          //@synthesize totalImageWidth=_totalImageWidth - In the implementation block
@property (assign,nonatomic) double maxImageHeight;                           //@synthesize maxImageHeight=_maxImageHeight - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(CGSize)sizeThatFitsWidth:(double)arg1 ;
-(void)setMaxImageHeight:(double)arg1 ;
-(void)resetConstraints;
-(void)setLayoutConstraints:(NSMutableArray *)arg1 ;
-(void)setTotalImageWidth:(double)arg1 ;
-(void)_resetLayoutConstraints;
-(double)_totalImageWidthWithSpacing;
-(double)_imageScaleFactorForAvailableWidth:(double)arg1 ;
-(NSMutableArray *)layoutConstraints;
-(double)maxImageHeight;
-(double)totalImageWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)images;
-(CGSize)intrinsicContentSize;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(double)preferredMaxLayoutWidth;
-(void)setImages:(NSArray *)arg1 ;
-(void)_updateSubviews;
@end

