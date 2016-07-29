/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@interface SUFrameAdjustmentImageModifier : SUImageModifier {

	BOOL _shouldSizeDownToFit;
	unsigned long long _sizingMask;

}

@property (assign,nonatomic) BOOL shouldSizeDownToFit;                   //@synthesize shouldSizeDownToFit=_shouldSizeDownToFit - In the implementation block
@property (assign,nonatomic) unsigned long long sizingMask;              //@synthesize sizingMask=_sizingMask - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)scalesImage;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(unsigned long long)sizingMask;
-(void)setSizingMask:(unsigned long long)arg1 ;
-(BOOL)shouldSizeDownToFit;
-(void)setShouldSizeDownToFit:(BOOL)arg1 ;
@end

