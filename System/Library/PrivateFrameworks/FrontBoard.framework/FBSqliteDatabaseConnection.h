/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <FrontBoard/FrontBoard-Structs.h>
@class NSObject, NSCache;

@interface FBSqliteDatabaseConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	sqlite3Ref _queue_dbConnection;
	NSCache* _queue_queryCache;

}
+(int)_sqliteOpenFlagsForDataProtectionClass:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)prepareStatement:(id)arg1 ;
-(id)lastErrorMessage;
-(void)performSyncWithDatabase:(/*^block*/id)arg1 ;
-(void)performWithDatabase:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 dataProtectionClass:(unsigned long long)arg2 ;
-(id)_initWithSqlitePath:(id)arg1 dataProtectionClass:(unsigned long long)arg2 ;
-(id)initWithInMemoryDatabase;
@end

