/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDSQLiteDatabase;

@interface _HDSQLiteDatabaseWrapper : NSObject {

	HDSQLiteDatabase* _database;
	unsigned long long _generation;
	unsigned long long _threadID;
	long long _type;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;                //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) unsigned long long generation;              //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) unsigned long long threadID;                //@synthesize threadID=_threadID - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
-(void)setType:(long long)arg1 ;
-(long long)type;
-(HDSQLiteDatabase *)database;
-(unsigned long long)generation;
-(id)initWithDatabase:(id)arg1 generation:(unsigned long long)arg2 ;
-(void)captureThreadInfo;
-(unsigned long long)threadID;
-(id)typeString;
@end

