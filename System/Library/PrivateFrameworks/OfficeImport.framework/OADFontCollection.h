/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADBaseFontCollection.h>

@class NSMutableDictionary;

@interface OADFontCollection : OADBaseFontCollection {

	NSMutableDictionary* _scriptToFontMap;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(void)setFont:(id)arg1 forScript:(id)arg2 ;
-(id)fontForScript:(id)arg1 ;
-(id)scripts;
-(BOOL)isEqualToFontCollection:(id)arg1 ;
@end

