/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HKObjectType : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	long long _code;
	Class _dataObjectClass;

}

@property (readonly) NSString * identifier; 
@property (nonatomic,readonly) long long code; 
@property (nonatomic,readonly) Class dataObjectClass; 
+(BOOL)_allowAuthorizationForSharing:(BOOL)arg1 types:(id)arg2 entitlements:(id)arg3 disallowedTypes:(id)arg4 ;
+(BOOL)_allowAuthorizationForSharingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3 ;
+(BOOL)_allowAuthorizationForReadingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(void)_insertCode:(long long)arg1 forIdentifier:(id)arg2 ;
+(id)activitySummaryType;
+(id)_allTypesWithIdentifierTable:(id)arg1 ;
+(id)_allDataTypeIdentifiers;
+(id)_allTypesOfClass:(Class)arg1 ;
+(id)_allCategoryTypes;
+(id)_allQuantityTypes;
+(id)dataTypeWithCode:(long long)arg1 ;
+(id)watchActivationType;
+(id)characteristicTypeForIdentifier:(id)arg1 ;
+(id)calorieGoal;
+(id)quantityTypeForIdentifier:(id)arg1 ;
+(id)briskMinuteDataType;
+(id)activityCacheType;
+(id)categoryTypeForIdentifier:(id)arg1 ;
+(id)workoutType;
+(id)coachingEventType;
+(id)_allCorrelationTypes;
+(id)correlationTypeForIdentifier:(id)arg1 ;
-(id)hk_localizedName;
-(id)hk_categoryID;
-(BOOL)_allowAuthorizationForSharingWithEntitlements:(id)arg1 ;
-(BOOL)_allowAuthorizationForReadingWithEntitlements:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(long long)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithDefinition:(SCD_Struct_HK4*)arg1 ;
-(Class)dataObjectClass;
-(id)_safeDescription;
-(BOOL)_requiresAuthorization;
@end

