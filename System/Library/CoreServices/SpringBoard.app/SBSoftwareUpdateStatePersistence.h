/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface SBSoftwareUpdateStatePersistence : NSObject {

	unsigned long long _alertFlow;
	BOOL _downloadWasQueuedRemotely;
	unsigned long long _nextAlertRepopStrategy;
	NSDate* _nextAlertScheduledDate;

}

@property (assign,nonatomic) BOOL downloadWasQueuedRemotely;                         //@synthesize downloadWasQueuedRemotely=_downloadWasQueuedRemotely - In the implementation block
@property (assign,nonatomic) unsigned long long alertFlow;                           //@synthesize alertFlow=_alertFlow - In the implementation block
@property (nonatomic,retain) NSDate * nextAlertDate;                                 //@synthesize nextAlertScheduledDate=_nextAlertScheduledDate - In the implementation block
@property (assign,nonatomic) unsigned long long nextAlertRepopStrategy;              //@synthesize nextAlertRepopStrategy=_nextAlertRepopStrategy - In the implementation block
-(void)_setNextAlertDate:(id)arg1 ;
-(void)_setNextAlertRepopStrategy:(unsigned long long)arg1 ;
-(void)setAlertFlow:(unsigned long long)arg1 ;
-(void)setNextAlertRepopStrategy:(unsigned long long)arg1 withNextAlertDate:(id)arg2 ;
-(void)setDownloadWasQueuedRemotely:(BOOL)arg1 ;
-(unsigned long long)alertFlow;
-(NSDate *)nextAlertDate;
-(BOOL)downloadWasQueuedRemotely;
-(unsigned long long)nextAlertRepopStrategy;
-(id)init;
-(id)description;
-(void)_load;
-(void)save;
-(void)_clear;
@end

