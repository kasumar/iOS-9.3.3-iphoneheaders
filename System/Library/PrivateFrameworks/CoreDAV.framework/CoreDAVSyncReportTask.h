/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {

	NSString* _previousSyncToken;
	NSString* _nextSyncToken;
	BOOL _moreToSync;
	BOOL _wasInvalidSyncToken;

}

@property (nonatomic,readonly) NSString * nextSyncToken;              //@synthesize nextSyncToken=_nextSyncToken - In the implementation block
@property (nonatomic,readonly) BOOL moreToSync;                       //@synthesize moreToSync=_moreToSync - In the implementation block
@property (nonatomic,readonly) BOOL wasInvalidSyncToken;              //@synthesize wasInvalidSyncToken=_wasInvalidSyncToken - In the implementation block
-(void)dealloc;
-(id)description;
-(BOOL)wasInvalidSyncToken;
-(id)notFoundHREFs;
-(BOOL)moreToSync;
-(NSString *)nextSyncToken;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 previousSyncToken:(id)arg4 ;
-(id)httpMethod;
@end

