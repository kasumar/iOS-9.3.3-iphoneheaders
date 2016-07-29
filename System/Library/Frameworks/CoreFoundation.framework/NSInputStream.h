/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSInputStream : NSStream

@property (readonly) BOOL hasBytesAvailable; 
+(id)inputStreamWithData:(id)arg1 ;
+(id)inputStreamWithFileAtPath:(id)arg1 ;
+(id)inputStreamWithURL:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(SCD_Struct_NS16)_cfStreamError;
-(unsigned long long)_cfTypeID;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)hasBytesAvailable;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
@end

