/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _HKCharacteristic : NSObject
+(BOOL)_validateDateOfBirth:(id)arg1 error:(id*)arg2 ;
+(BOOL)_validateBiologicalSex:(id)arg1 error:(id*)arg2 ;
+(BOOL)_validateBloodType:(id)arg1 error:(id*)arg2 ;
+(BOOL)_validateQuantity:(id)arg1 withCompatibleUnit:(id)arg2 error:(id*)arg3 ;
+(BOOL)_validateFitzpatrickSkinType:(id)arg1 error:(id*)arg2 ;
+(id)_quantityTypeForCharacteristicType:(id)arg1 ;
+(id)_canoncialUnitForCharacteristicType:(id)arg1 ;
+(BOOL)_validateCharacteristic:(id)arg1 forDataType:(id)arg2 error:(id*)arg3 ;
@end

