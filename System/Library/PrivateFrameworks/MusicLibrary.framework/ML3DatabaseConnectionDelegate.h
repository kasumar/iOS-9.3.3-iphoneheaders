/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ML3DatabaseConnectionDelegate <NSObject>
@optional
-(void)connectionWillOpenDatabase:(id)arg1;
-(void)connectionDidOpenDatabase:(id)arg1;
-(void)connection:(id)arg1 didFailToOpenDatabaseWithError:(id)arg2;
-(void)connectionWillCloseDatabase:(id)arg1;
-(void)connectionDidCloseDatabase:(id)arg1;
-(void)connection:(id)arg1 didFailToCloseDatabaseWithError:(id)arg2;
-(void)connectionDidBeginDatabaseTransaction:(id)arg1;
-(void)connection:(id)arg1 didEndDatabaseTransactionAndCommit:(BOOL)arg2;

@end

