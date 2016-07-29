/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

@interface SKUIStarRatingViewElement : SKUIViewElement {

	float _ratingValue;
	SKUIViewElementText* _text;
	long long _starType;
	BOOL _enabled;

}

@property (nonatomic,readonly) long long starType;                      //@synthesize starType=_starType - In the implementation block
@property (nonatomic,readonly) float ratingValue;                       //@synthesize ratingValue=_ratingValue - In the implementation block
@property (nonatomic,readonly) SKUIViewElementText * text;              //@synthesize text=_text - In the implementation block
-(BOOL)isEnabled;
-(SKUIViewElementText *)text;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(float)ratingValue;
-(long long)starType;
@end

