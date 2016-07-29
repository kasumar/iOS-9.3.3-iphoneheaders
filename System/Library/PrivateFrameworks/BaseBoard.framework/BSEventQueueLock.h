/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BSEventQueue;

@interface BSEventQueueLock : NSObject {

	BOOL _relinquished;
	NSString* _reason;
	BSEventQueue* _eventQueue;

}

@property (nonatomic,copy) NSString * reason;                        //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) BSEventQueue * eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(BSEventQueue *)eventQueue;
-(void)setEventQueue:(BSEventQueue *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithEventQueue:(id)arg1 reason:(id)arg2 ;
-(void)relinquish;
@end

