/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class WBSSQLiteDatabase, NSDictionary, NSArray;

@interface WBSSQLiteStatement : NSObject {

	WBSSQLiteDatabase* _database;
	sqlite3_stmtRef _handle;
	NSDictionary* _columnNamesToIndexes;
	NSArray* _columnNames;

}

@property (nonatomic,readonly) NSArray * columnNames; 
@property (nonatomic,readonly) NSDictionary * columnNamesToIndexes; 
@property (nonatomic,readonly) sqlite3_stmtRef handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) WBSSQLiteDatabase * database;                     //@synthesize database=_database - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)reset;
-(BOOL)_isValid;
-(id)initWithDatabase:(id)arg1 query:(id)arg2 ;
-(id)fetch;
-(void)bindDouble:(double)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindInt64:(long long)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindNullAtParameterIndex:(unsigned long long)arg1 ;
-(void)bindData:(id)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindString:(id)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindInt:(int)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(NSArray *)columnNames;
-(NSDictionary *)columnNamesToIndexes;
-(WBSSQLiteDatabase *)database;
-(sqlite3_stmtRef)handle;
-(int)execute;
@end
