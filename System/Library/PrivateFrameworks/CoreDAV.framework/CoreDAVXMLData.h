/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreDAV/CoreDAV-Structs.h>
@class NSData;

@interface CoreDAVXMLData : NSObject {

	BOOL _shouldAddFormattingSpaces;
	xmlTextWriterRef _writer;
	xmlDoc* _doc;
	BOOL _docHasEnded;
	CFDictionaryRef _seenURIsToPrefixes;
	CFDictionaryRef _seenURIsToDepth;
	CFArrayRef _elementStack;

}

@property (assign,nonatomic) BOOL shouldAddFormattingSpaces;              //@synthesize shouldAddFormattingSpaces=_shouldAddFormattingSpaces - In the implementation block
@property (nonatomic,readonly) NSData * data; 
+(BOOL)string:(id)arg1 isEqualToXmlCharString:(const char*)arg2 ;
-(void)dealloc;
-(id)init;
-(NSData *)data;
-(void)setShouldAddFormattingSpaces:(BOOL)arg1 ;
-(const char*)_prefixForNameSpace:(const char*)arg1 ;
-(void)_startElement:(id)arg1 inNamespace:(id)arg2 ;
-(void)_startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 attributes:(char*)arg4 ;
-(BOOL)shouldAddFormattingSpaces;
-(void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContentAsCDATA:(id)arg3 withAttributeNamesAndValues:(id)arg4 ;
-(void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContent:(id)arg3 withAttributeNamesAndValues:(id)arg4 ;
-(void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 ;
-(void)endElement:(id)arg1 inNamespace:(id)arg2 ;
-(void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributes:(id)arg3 ;
@end

