/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIKeyboardEmoji : NSObject {

	NSString* _emojiString;
	unsigned long long _variantMask;

}

@property (nonatomic,retain) NSString * emojiString;              //@synthesize emojiString=_emojiString - In the implementation block
@property (assign) unsigned long long variantMask;                //@synthesize variantMask=_variantMask - In the implementation block
+(id)emojiWithString:(id)arg1 withVariantMask:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)emojiString;
-(unsigned long long)variantMask;
-(id)key;
-(void)setEmojiString:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 withVariantMask:(unsigned long long)arg2 ;
-(void)setVariantMask:(unsigned long long)arg1 ;
@end

