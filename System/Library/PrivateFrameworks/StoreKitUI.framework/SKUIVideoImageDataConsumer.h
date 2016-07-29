/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor, SKUIColorScheme;

@interface SKUIVideoImageDataConsumer : SKUIImageDataConsumer {

	unsigned long long _allowedOrientations;
	UIColor* _backgroundColor;
	SKUIColorScheme* _colorScheme;
	CGSize _landscapeSize;
	CGSize _portraitSize;

}

@property (assign,nonatomic) unsigned long long allowedOrientations;              //@synthesize allowedOrientations=_allowedOrientations - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                           //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                       //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) CGSize landscapeSize;                                //@synthesize landscapeSize=_landscapeSize - In the implementation block
@property (assign,nonatomic) CGSize portraitSize;                                 //@synthesize portraitSize=_portraitSize - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)imageForColor:(id)arg1 orientation:(unsigned long long)arg2 ;
-(id)imageForImage:(id)arg1 ;
-(unsigned long long)allowedOrientations;
-(void)setAllowedOrientations:(unsigned long long)arg1 ;
-(CGSize)landscapeSize;
-(void)setLandscapeSize:(CGSize)arg1 ;
-(CGSize)portraitSize;
-(void)setPortraitSize:(CGSize)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
@end

