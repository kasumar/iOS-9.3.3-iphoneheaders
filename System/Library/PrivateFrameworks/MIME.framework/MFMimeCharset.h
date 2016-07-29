/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MFMimeCharset : NSObject {

	unsigned _encoding;
	NSString* _primaryLanguage;
	NSString* _charsetName;
	unsigned _coversLargeUnicodeSubset : 1;
	unsigned _useBase64InHeaders : 1;
	unsigned _canBeUsedForOutgoingMessages : 1;

}
+(id)allMimeCharsets:(BOOL)arg1 ;
+(id)allMimeCharsets;
+(id)charsetForEncoding:(unsigned)arg1 ;
+(id)preferredMimeCharset;
-(void)dealloc;
-(id)description;
-(id)primaryLanguage;
-(id)displayName;
-(void)_setPrimaryLanguage:(id)arg1 ;
-(id)initWithEncoding:(unsigned)arg1 ;
-(BOOL)canBeUsedForOutgoingMessages;
-(BOOL)coversLargeUnicodeSubset;
-(BOOL)useBase64InHeaders;
-(unsigned)encoding;
-(id)charsetName;
@end

