/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, SKUIStoreIdentifier;

@interface SKUIBuyButtonDescriptor : NSObject <NSCopying, NSMutableCopying> {

	NSString* _buttonText;
	long long _buttonType;
	NSString* _confirmationText;
	unsigned long long _elementType;
	long long _itemIdentifier;
	SKUIStoreIdentifier* _storeIdentifier;
	NSString* _variantIdentifier;

}

@property (nonatomic,readonly) long long buttonType;                               //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonText;                         //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy,readonly) NSString * confirmationText;                   //@synthesize confirmationText=_confirmationText - In the implementation block
@property (nonatomic,readonly) unsigned long long elementType;                     //@synthesize elementType=_elementType - In the implementation block
@property (nonatomic,readonly) SKUIStoreIdentifier * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier;                           //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * variantIdentifier;                       //@synthesize variantIdentifier=_variantIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)buttonType;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)elementType;
-(long long)itemIdentifier;
-(NSString *)buttonText;
-(SKUIStoreIdentifier *)storeIdentifier;
-(NSString *)variantIdentifier;
-(NSString *)confirmationText;
-(BOOL)canPerformLocalActionWithItemState:(id)arg1 ;
-(BOOL)canPersonalizeUsingItemState:(id)arg1 ;
@end

