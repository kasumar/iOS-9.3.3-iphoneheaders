/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface TCXmlEnumMap : NSObject {

	CFDictionaryRef mNameToValueMap;

}
-(void)dealloc;
-(BOOL)readFromNode:(xmlNode*)arg1 ns:(const char*)arg2 name:(const char*)arg3 value:(long long*)arg4 ;
-(id)initWithDescriptions:(const TCXmlEnumDescription*)arg1 ;
-(long long)readFromNode:(xmlNode*)arg1 ns:(const char*)arg2 name:(const char*)arg3 ;
-(long long)readFromNode:(xmlNode*)arg1 ns:(const char*)arg2 name:(const char*)arg3 def:(long long)arg4 ;
@end

