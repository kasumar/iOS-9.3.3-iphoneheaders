/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CAMKeyValueCoalescer : NSObject {

	double __interval;
	/*^block*/id __handler;
	NSObject*<OS_dispatch_source> _coalescingTimer;
	NSMutableDictionary* __values;
	NSMutableDictionary* __previousValues;
	NSObject*<OS_dispatch_queue> __coalescingQueue;

}

@property (nonatomic,readonly) double _interval;                                           //@synthesize _interval=__interval - In the implementation block
@property (nonatomic,copy,readonly) id _handler;                                           //@synthesize _handler=__handler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> coalescingTimer;                //@synthesize coalescingTimer=_coalescingTimer - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _values;                              //@synthesize _values=__values - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _previousValues;                      //@synthesize _previousValues=__previousValues - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _coalescingQueue;              //@synthesize _coalescingQueue=__coalescingQueue - In the implementation block
-(void)flush;
-(id)_handler;
-(double)_interval;
-(id)initWithInterval:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)coalesceValue:(id)arg1 forKeyPath:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)_coalescingQueue;
-(NSMutableDictionary *)_values;
-(NSObject*<OS_dispatch_source>)coalescingTimer;
-(void)_pushCoalescedValues;
-(void)setCoalescingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSMutableDictionary *)_previousValues;
@end

