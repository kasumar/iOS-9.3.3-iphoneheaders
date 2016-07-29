/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXColor : NSObject
+(id)readScRgbColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readSRgbColorFromXmlNode:(xmlNode*)arg1 attribute:(const char*)arg2 ;
+(id)readHslColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readSystemColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readSchemeColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readPresetColorFromXmlNode:(xmlNode*)arg1 ;
+(id)presetColorEnumMap;
+(id)presetColorRGBEnumMap;
+(id)systemColorEnumMap;
+(id)stringSRgbColor:(id)arg1 ;
+(id)schemeColorEnumMap;
+(id)readColorFromNode:(xmlNode*)arg1 ;
+(void)writeColor:(id)arg1 to:(id)arg2 ;
+(void)writeRgbColor:(id)arg1 to:(id)arg2 ;
+(void)writeSchemeColor:(id)arg1 to:(id)arg2 ;
+(void)writeSystemColor:(id)arg1 to:(id)arg2 ;
+(void)writePlaceholderColor:(id)arg1 to:(id)arg2 ;
+(id)readSchemeColorFromAttribute:(id)arg1 ;
+(void)writePresetColor:(id)arg1 to:(id)arg2 ;
+(id)readColorFromParentXmlNode:(xmlNode*)arg1 ;
+(id)readPresetColorFromAttribute:(id)arg1 ;
+(id)readSystemColorFromAttribute:(id)arg1 ;
@end

