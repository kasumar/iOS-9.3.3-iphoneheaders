/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem {

	NSString* _symbolicColorName;

}

@property (nonatomic,retain) NSString * symbolicColorName;              //@synthesize symbolicColorName=_symbolicColorName - In the implementation block
@property (nonatomic,retain) NSString * colorString; 
-(id)init;
-(NSString *)symbolicColorName;
-(void)setColorString:(NSString *)arg1 ;
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(void)parserFoundAttributes:(id)arg1 ;
-(void)write:(id)arg1 ;
-(NSString *)colorString;
@end

