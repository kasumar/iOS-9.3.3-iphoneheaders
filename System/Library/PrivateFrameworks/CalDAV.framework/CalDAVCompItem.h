/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCompItem : CoreDAVItem {

	NSString* _nameAttribute;

}

@property (nonatomic,retain) NSString * nameAttribute;              //@synthesize nameAttribute=_nameAttribute - In the implementation block
-(id)init;
-(void)setNameAttribute:(NSString *)arg1 ;
-(NSString *)nameAttribute;
-(void)parserFoundAttributes:(id)arg1 ;
-(void)write:(id)arg1 ;
@end

