/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSNumber, NSSet;

@interface TDEffectRenditionSpec : TDRenditionSpec

@property (nonatomic,retain) NSNumber * effectScale; 
@property (nonatomic,retain) NSSet * components; 
-(id)effectPreset;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2 ;
@end

