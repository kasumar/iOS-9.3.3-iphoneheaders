/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>

@class UIImage, UIColor;

@interface _UIDiscardableTintedDisclosureImageCacheItem : NSObject <NSDiscardableContent> {

	UIImage* _tintedImage;
	UIColor* _tintColor;
	struct {
		unsigned isDiscarded : 1;
		unsigned isPressed : 1;
		unsigned useCount;
	}  _flags;

}

@property (nonatomic,readonly) UIImage * tintedImage;              //@synthesize tintedImage=_tintedImage - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                //@synthesize tintColor=_tintColor - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UIColor *)tintColor;
-(id)_tintedDisclosureImage:(BOOL)arg1 ;
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(id)initWithPressed:(BOOL)arg1 tintColor:(id)arg2 ;
-(UIImage *)tintedImage;
@end

