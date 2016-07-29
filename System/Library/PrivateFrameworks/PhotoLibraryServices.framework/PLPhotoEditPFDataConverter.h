/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLPhotoEditDataImporter.h>
#import <libobjc.A.dylib/PLPhotoEditDataExporter.h>

@class NSString;

@interface PLPhotoEditPFDataConverter : NSObject <PLPhotoEditDataImporter, PLPhotoEditDataExporter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_formatVersion;
+(BOOL)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 ;
+(id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 ;
+(id)_knownFormatIdentifiers;
+(id)_knownFormatVersions;
+(BOOL)_validateValueTypesForKeys:(id)arg1 requiredKeys:(id)arg2 inDictionary:(id)arg3 error:(id*)arg4 ;
+(long long)_supportLevelForSettings:(id)arg1 typesForKnownKeys:(id)arg2 requiredKeys:(id)arg3 ;
+(id)_filtersForLegacyAutoEnhanceSettingsDictionary:(id)arg1 ;
+(BOOL)validateAdjustmentsEnvelope:(id)arg1 ;
+(id)_supportedAdjustments;
+(id)_settingsDictionaryForLegacyAutoEnhanceFilters:(id)arg1 ;
+(BOOL)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 importProperties:(id)arg5 ;
+(id)dataFromPhotoEditModel:(id)arg1 outFormatIdentifier:(id*)arg2 outFormatVersion:(id*)arg3 exportProperties:(id)arg4 ;
@end

