/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface OIXMLNode : NSObject <NSCopying> {

	unsigned _kind;
	NSString* _name;
	id _value;

}
+(id)elementWithName:(id)arg1 ;
+(id)elementWithName:(id)arg1 stringValue:(id)arg2 ;
+(id)attributeWithName:(id)arg1 stringValue:(id)arg2 ;
+(id)textWithStringValue:(id)arg1 ;
+(void)_escapeCharacters:(const unsigned short*)arg1 amount:(unsigned)arg2 escapeWhiteSpaces:(BOOL)arg3 inString:(id)arg4 appendingToString:(CFStringRef)arg5 ;
+(void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(CFStringRef)arg3 ;
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObjectValue:(id)arg1 ;
-(id)objectValue;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(unsigned)kind;
-(id)openingTagString;
-(id)XMLString;
-(id)closingTagString;
-(id)initWithKind:(unsigned)arg1 ;
-(void)_appendXMLStringToString:(CFStringRef)arg1 level:(int)arg2 ;
-(id)contentString;
-(id)initWithKind:(unsigned)arg1 name:(id)arg2 stringValue:(id)arg3 ;
@end

