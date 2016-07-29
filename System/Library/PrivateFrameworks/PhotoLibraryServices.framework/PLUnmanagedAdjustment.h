/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSNumber, NSString, NSDate, PLAdditionalAssetAttributes;

@interface PLUnmanagedAdjustment : PLManagedObject

@property (nonatomic,retain) NSNumber * adjustmentBaseImageFormat; 
@property (nonatomic,retain) NSString * adjustmentFormatIdentifier; 
@property (nonatomic,retain) NSString * adjustmentFormatVersion; 
@property (nonatomic,retain) NSDate * adjustmentTimestamp; 
@property (nonatomic,retain) NSString * editorLocalizedName; 
@property (nonatomic,retain) NSString * otherAdjustmentsFingerprint; 
@property (nonatomic,retain) NSString * similarToOriginalAdjustmentsFingerprint; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
+(id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)arg1 ;
+(id)addUnmanagedAdjustmentFromAdjustmentFileAtPath:(id)arg1 withAsset:(id)arg2 ;
+(id)_convertRedEyeCorrections:(id)arg1 withOrientation:(long long)arg2 ;
+(id)_convertRedEyeCorrection:(id)arg1 withOrientation:(long long)arg2 ;
-(void)willSave;
@end

