/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OADOle : NSObject {

	BOOL mIconic;
	NSString* mCLSID;
	NSString* mAnsiUserType;
	NSString* mAnsiClipboardFormatName;
	unsigned mWinClipboardFormat;
	NSString* mMacClipboardFormat;
	NSString* mAnsiProgID;
	NSString* mUnicodeUserType;
	NSString* mUnicodeClipboardFormatName;
	NSString* mUnicodeProgID;
	id mObject;

}
+(BOOL)isProgIDChart:(id)arg1 ;
+(BOOL)isProgIDMathType:(id)arg1 ;
+(BOOL)isCLSIDSupported:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)CLSID;
-(void)setCLSID:(id)arg1 ;
-(void)setAnsiUserType:(id)arg1 ;
-(void)setWinClipboardFormat:(unsigned)arg1 ;
-(void)setMacClipboardFormat:(id)arg1 ;
-(void)setAnsiClipboardFormatName:(id)arg1 ;
-(void)setAnsiProgID:(id)arg1 ;
-(void)setUnicodeUserType:(id)arg1 ;
-(void)setUnicodeClipboardFormatName:(id)arg1 ;
-(void)setUnicodeProgID:(id)arg1 ;
-(BOOL)iconic;
-(void)setIconic:(BOOL)arg1 ;
-(id)ansiUserType;
-(id)ansiClipboardFormatName;
-(unsigned)winClipboardFormat;
-(id)macClipboardFormat;
-(id)ansiProgID;
-(id)unicodeUserType;
-(id)unicodeClipboardFormatName;
-(id)unicodeProgID;
@end

