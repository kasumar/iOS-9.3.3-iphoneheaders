/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SKUIViewElement;

@interface _SKUIDynamicGridSizeCacheKey : NSObject <NSCopying> {

	long long _position;
	SKUIViewElement* _viewElement;

}

@property (assign,nonatomic) long long position;                         //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) SKUIViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(SKUIViewElement *)viewElement;
-(void)setViewElement:(SKUIViewElement *)arg1 ;
-(BOOL)__isSKUIDynamicGridSizeCacheKey;
@end

