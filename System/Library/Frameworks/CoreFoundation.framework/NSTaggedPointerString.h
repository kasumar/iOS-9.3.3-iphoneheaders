/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSString.h>

@interface NSTaggedPointerString : NSString
+(void)_setAsTaggedStringClass;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)_isCString;
-(unsigned long long)fastestEncoding;
-(unsigned long long)smallestEncoding;
-(BOOL)_getCString:(char*)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned)arg3 ;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(const unsigned short*)_fastCharacterContents;
-(const char*)UTF8String;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(unsigned long long)length;
-(id)substringWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)uppercaseStringWithLocale:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)lowercaseStringWithLocale:(id)arg1 ;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(BOOL)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(BOOL)isNSString__;
@end

