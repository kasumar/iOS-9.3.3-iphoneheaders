/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray;

@interface SKUIGalleryPageComponent : SKUIPageComponent {

	NSArray* _childComponents;
	double _cycleInterval;
	BOOL _hidesPageIndicator;

}

@property (nonatomic,readonly) NSArray * childComponents;              //@synthesize childComponents=_childComponents - In the implementation block
@property (assign,nonatomic) double cycleInterval;                     //@synthesize cycleInterval=_cycleInterval - In the implementation block
@property (assign,nonatomic) BOOL hidesPageIndicator;                  //@synthesize hidesPageIndicator=_hidesPageIndicator - In the implementation block
-(long long)componentType;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)metricsElementName;
-(double)cycleInterval;
-(NSArray *)childComponents;
-(void)setCycleInterval:(double)arg1 ;
-(BOOL)hidesPageIndicator;
-(void)setHidesPageIndicator:(BOOL)arg1 ;
@end

