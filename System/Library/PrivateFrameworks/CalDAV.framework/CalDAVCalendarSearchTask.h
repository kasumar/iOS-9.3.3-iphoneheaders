/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSArray, NSString, NSDictionary;

@interface CalDAVCalendarSearchTask : CoreDAVTask {

	NSArray* _languages;
	NSString* _location;
	NSString* _calendarType;
	NSDictionary* _urlsToResults;

}

@property (nonatomic,retain,readonly) NSDictionary * urlsToResults;              //@synthesize urlsToResults=_urlsToResults - In the implementation block
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithLanguages:(id)arg1 location:(id)arg2 calendarType:(id)arg3 url:(id)arg4 ;
-(NSDictionary *)urlsToResults;
-(id)httpMethod;
@end

