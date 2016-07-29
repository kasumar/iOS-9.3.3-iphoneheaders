/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPLoadableFonts : NSObject {

	TSWPLoadableFontInfo* _loadableFonts;
	unsigned _loadableFontCount;
	BOOL _allFontsLoaded;

}
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
-(void)backgroundLoadAll;
-(void)loadFontWithName:(id)arg1 ;
-(void)loadAll;
-(void)p_loadFontWithInfo:(TSWPLoadableFontInfo*)arg1 ;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

