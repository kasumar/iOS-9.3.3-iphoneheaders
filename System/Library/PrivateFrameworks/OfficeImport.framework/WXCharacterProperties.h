/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXCharacterProperties : NSObject
+(BOOL)readBooleanCharacterProperty:(xmlNode*)arg1 propertyName:(const char*)arg2 attributeName:(const char*)arg3 outValue:(int*)arg4 state:(id)arg5 ;
+(void)readReflection:(id)arg1 fromXmlNode:(xmlNode*)arg2 state:(id)arg3 ;
+(void)readShadowForTarget:(id)arg1 fromXmlNode:(xmlNode*)arg2 state:(id)arg3 ;
+(BOOL)readBooleanCharacterMultipleProperty:(xmlNode*)arg1 propertyName:(const char*)arg2 attributeName:(const char*)arg3 outValue:(int*)arg4 state:(id)arg5 ;
+(id)readFillColor:(xmlNode*)arg1 forTarget:(id)arg2 state:(id)arg3 ;
+(BOOL)isBooleanCharacterPropertyTrue:(int)arg1 ;
+(void)initialize;
+(void)applyDeletionInsertionProperties:(id)arg1 state:(id)arg2 ;
+(void)readFrom:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
@end

