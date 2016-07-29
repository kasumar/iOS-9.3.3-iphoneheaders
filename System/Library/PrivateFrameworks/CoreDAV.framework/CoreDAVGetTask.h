/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@interface CoreDAVGetTask : CoreDAVTask {

	id _appSpecificDataItemResult;
	BOOL _forceNoCache;

}

@property (assign,nonatomic) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) id appSpecificDataItemResult;                  //@synthesize appSpecificDataItemResult=_appSpecificDataItemResult - In the implementation block
@property (assign,nonatomic) BOOL forceNoCache;                             //@synthesize forceNoCache=_forceNoCache - In the implementation block
-(void)dealloc;
-(id)description;
-(id)appSpecificDataItemResult;
-(BOOL)forceNoCache;
-(void)setForceNoCache:(BOOL)arg1 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(void)setAppSpecificDataItemResult:(id)arg1 ;
-(id)httpMethod;
-(unsigned long long)cachePolicy;
@end

