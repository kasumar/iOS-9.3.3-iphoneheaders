/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBAlignmentInfo : NSObject
+(int)convertXlHorizAlignEnumToED:(int)arg1 ;
+(int)convertXlVertAlignEnumToED:(int)arg1 ;
+(int)convertEDHorizontalAlignmentEnumToXl:(int)arg1 ;
+(int)convertEDVerticalAlignmentEnumToXl:(int)arg1 ;
+(id)edAlignmentInfoFromXlDXfAlign:(XlDXfAlign*)arg1 ;
+(void)writeAlignmentInfo:(id)arg1 toXlXf:(XlXf*)arg2 ;
+(XlDXfAlign*)xlDXfAlignFromEDAlignmentInfo:(id)arg1 ;
+(void)writeAlignmentInfo:(id)arg1 toXlGraphicsInfo:(XlGraphicsInfo*)arg2 ;
+(id)edAlignmentInfoFromXlXf:(XlXf*)arg1 ;
+(id)edAlignmentInfoFromXlGraphicsInfo:(XlGraphicsInfo*)arg1 ;
@end

