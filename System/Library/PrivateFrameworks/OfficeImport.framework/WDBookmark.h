/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class NSString;

@interface WDBookmark : WDRun {

	NSString* mName;
	int mBookmarkType;

}
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(int)bookmarkType;
-(int)runType;
-(id)initWithParagraph:(id)arg1 name:(id)arg2 type:(int)arg3 ;
-(void)setBookmarkType:(int)arg1 ;
@end

