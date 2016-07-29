/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXTimeRestrictionManagerDelegate;
@class NSMutableSet, NSDate, AXAccessQueue, AXAccessQueueTimer, NSMutableArray;

@interface GAXTimeRestrictionManager : NSObject {

	BOOL _active;
	BOOL _paused;
	long long _expirationDurationInSeconds;
	NSMutableSet* _alarmDurationsInSeconds;
	NSDate* _startTime;
	id<GAXTimeRestrictionManagerDelegate> _delegate;
	AXAccessQueue* _assertedAccessQueue;
	AXAccessQueueTimer* _expirationTimer;
	NSMutableArray* _alarmTimers;

}

@property (assign,nonatomic) id<GAXTimeRestrictionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AXAccessQueue * assertedAccessQueue;                         //@synthesize assertedAccessQueue=_assertedAccessQueue - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                 //@synthesize active=_active - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                 //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) long long remainingTimeInSeconds; 
@property (nonatomic,retain) NSDate * startTime;                                          //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) long long expirationDurationInSeconds;                       //@synthesize expirationDurationInSeconds=_expirationDurationInSeconds - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * expirationTimer;                        //@synthesize expirationTimer=_expirationTimer - In the implementation block
@property (nonatomic,retain) NSMutableSet * alarmDurationsInSeconds;                      //@synthesize alarmDurationsInSeconds=_alarmDurationsInSeconds - In the implementation block
@property (nonatomic,retain) NSMutableArray * alarmTimers;                                //@synthesize alarmTimers=_alarmTimers - In the implementation block
-(void)beginWithDuration:(long long)arg1 ;
-(long long)remainingTimeInSeconds;
-(void)setExpirationTimer:(AXAccessQueueTimer *)arg1 ;
-(AXAccessQueue *)assertedAccessQueue;
-(void)setAlarmDurationsInSeconds:(NSMutableSet *)arg1 ;
-(void)_addAlarmForDuration:(long long)arg1 ;
-(void)setExpirationDurationInSeconds:(long long)arg1 ;
-(NSMutableSet *)alarmDurationsInSeconds;
-(void)setAssertedAccessQueue:(AXAccessQueue *)arg1 ;
-(long long)expirationDurationInSeconds;
-(void)_removeAllAlarmTimers;
-(void)_removeExpirationTimer;
-(void)_removeAllTimers;
-(void)setAlarmTimers:(NSMutableArray *)arg1 ;
-(void)_scheduleTimers;
-(NSMutableArray *)alarmTimers;
-(id)initWithAssertedAccessQueue:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<GAXTimeRestrictionManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<GAXTimeRestrictionManagerDelegate>)delegate;
-(BOOL)isActive;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)resume;
-(void)setPaused:(BOOL)arg1 ;
-(NSDate *)startTime;
-(void)pause;
-(BOOL)isPaused;
-(AXAccessQueueTimer *)expirationTimer;
@end

