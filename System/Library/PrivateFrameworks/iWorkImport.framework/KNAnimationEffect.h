/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationPlugin.h>

@class KNAnimationContext, NSString;

@interface KNAnimationEffect : NSObject <KNAnimationPlugin> {

	KNAnimationContext* mAnimationContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(id)updateDirectionAttributeValue:(long long)arg1 andCustomTextDirectionValue:(unsigned long long)arg2 turnOffBounce:(BOOL)arg3 turnOffMotionBlur:(BOOL)arg4 forAttributes:(id)arg5 ;
+(id)animationName;
+(id)defaultAttributes;
-(id)initWithAnimationContext:(id)arg1 ;
@end

