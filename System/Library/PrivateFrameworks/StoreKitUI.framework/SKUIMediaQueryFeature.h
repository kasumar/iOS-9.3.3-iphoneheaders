/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface SKUIMediaQueryFeature : NSObject {

	NSString* _featureName;

}

@property (nonatomic,readonly) NSString * featureName;                   //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,readonly) NSArray * notificationNames; 
@property (nonatomic,readonly) NSArray * requiredKeys; 
+(BOOL)supportsFeatureName:(id)arg1 ;
-(id)initWithFeatureName:(id)arg1 value:(id)arg2 ;
-(NSString *)featureName;
-(BOOL)evaluateWithValues:(id)arg1 ;
-(NSArray *)requiredKeys;
-(NSArray *)notificationNames;
@end
