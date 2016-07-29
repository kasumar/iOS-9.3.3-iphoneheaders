/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface SUUserRatingView : UIView {

	float _value;
	UIImageView* _foregroundImageView;
	UIImageView* _backgroundImageView;

}
+(id)copyImageForRating:(float)arg1 backgroundColor:(id)arg2 style:(long long)arg3 ;
+(double)reflectionHeight;
-(id)init;
-(void)layoutSubviews;
-(void)setValue:(float)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(CGRect)_foregroundImageClipBounds;
-(id)initWithForeground:(id)arg1 background:(id)arg2 ;
-(float)heightWithoutReflection;
@end

