/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIImageView.h>

@class UITapGestureRecognizer;

@interface SKUIImageView : UIImageView {

	CGSize _imageSize;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (assign,nonatomic) CGSize imageSize;                                      //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapRecognizer; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)imageSize;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)drawDecorationsWithImageRect:(CGRect)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
@end

