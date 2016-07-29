/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString, NSDictionary, NSArray;

@interface KNAnimationInfo : NSObject {

	Class mAnimationClass;
	NSSet* mValidAnimationTypes;

}

@property (nonatomic,readonly) NSString * effectIdentifier; 
@property (nonatomic,readonly) BOOL isDrift; 
@property (nonatomic,readonly) NSDictionary * defaultAttributes; 
@property (nonatomic,readonly) NSString * animationFilter; 
@property (nonatomic,readonly) Class animationClass; 
@property (nonatomic,readonly) NSSet * validAnimationTypes; 
@property (nonatomic,readonly) int category; 
@property (nonatomic,readonly) unsigned long long directionType; 
@property (nonatomic,readonly) NSArray * customAttributes; 
@property (nonatomic,readonly) NSDictionary * customAttributeDefaults; 
@property (nonatomic,readonly) NSString * localizedBuildInName; 
@property (nonatomic,readonly) NSString * localizedBuildOutName; 
@property (nonatomic,readonly) NSString * localizedActionBuildName; 
@property (nonatomic,readonly) NSString * localizedTransitionName; 
+(id)effectIdentifiersForAnimationInfos:(id)arg1 ;
+(id)localizedEffectNamesForAnimationInfos:(id)arg1 animationType:(int)arg2 ;
-(NSString *)animationFilter;
-(unsigned long long)directionType;
-(id)thumbnailImageNameForType:(int)arg1 ;
-(id)customEffectTimingCurveDisplayParametersForAttributes:(id)arg1 layoutStyleOnly:(BOOL)arg2 ;
-(NSString *)effectIdentifier;
-(Class)animationClass;
-(id)customAttributesForAttributeKey:(id)arg1 ;
-(id)initWithAnimationClass:(Class)arg1 ;
-(id)localizedNameForType:(int)arg1 ;
-(BOOL)isDrift;
-(BOOL)supportsAnimationType:(int)arg1 ;
-(NSDictionary *)customAttributeDefaults;
-(NSString *)localizedBuildInName;
-(NSString *)localizedBuildOutName;
-(NSString *)localizedActionBuildName;
-(NSString *)localizedTransitionName;
-(NSSet *)validAnimationTypes;
-(NSArray *)customAttributes;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)category;
-(NSDictionary *)defaultAttributes;
@end

