/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDDistiller.h>

@class NSSet;

@interface TDAssetPackDistiller : TDDistiller {

	NSSet* assetPackMap;

}

@property (nonatomic,retain) NSSet * assetPackMap; 
-(void)dealloc;
-(void)setAssetPackMap:(NSSet *)arg1 ;
-(NSSet *)assetPackMap;
-(id)assetPackForTags:(id)arg1 ;
-(void)removeRenditionsFromAssetStoreWithKey:(id)arg1 ;
-(void)setAssetStoreRenditionCount:(unsigned)arg1 ;
-(void)setAssetStoreUuid:(id)arg1 ;
-(void)setAssetStoreAssociatedChecksum:(unsigned)arg1 ;
-(void)setAssetStoreKeyFormatData:(id)arg1 ;
-(void)setAssetStoreKeySemantics:(int)arg1 ;
-(void)setAssetStorageVersion:(unsigned)arg1 ;
-(void)setAssetStorageVersionString:(const char*)arg1 ;
-(void)setAssetSchemaVersion:(unsigned)arg1 ;
-(void)setAssetColorSpaceID:(unsigned)arg1 ;
-(BOOL)assetStoreWriteToDisk;
-(id)initWithDocument:(id)arg1 outputPath:(id)arg2 versionString:(id)arg3 usingAssetPackMapping:(id)arg4 attemptIncremental:(BOOL)arg5 ;
-(void)_storeRenditions;
@end

