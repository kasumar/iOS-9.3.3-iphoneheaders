/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@interface SKUIBarRatingView : UIView {

	long long _barRatingStyle;
	long long _numberOfBars;
	float _ratingValue;

}

@property (assign,nonatomic) long long barRatingStyle;              //@synthesize barRatingStyle=_barRatingStyle - In the implementation block
@property (assign,nonatomic) long long numberOfBars;                //@synthesize numberOfBars=_numberOfBars - In the implementation block
@property (assign,nonatomic) float ratingValue;                     //@synthesize ratingValue=_ratingValue - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(float)ratingValue;
-(void)setBarRatingStyle:(long long)arg1 ;
-(void)setNumberOfBars:(long long)arg1 ;
-(void)setRatingValue:(float)arg1 ;
-(long long)barRatingStyle;
-(long long)numberOfBars;
@end

