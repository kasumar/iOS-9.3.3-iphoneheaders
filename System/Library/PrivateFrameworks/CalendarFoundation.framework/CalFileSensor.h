/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface CalFileSensor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	/*^block*/id _eventBlock;
	BOOL _started;
	NSString* _path;

}

@property (nonatomic,retain,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL started;                        //@synthesize started=_started - In the implementation block
@property (nonatomic,copy,readonly) id eventBlock;                  //@synthesize eventBlock=_eventBlock - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)path;
-(void)stop;
-(void)start;
-(id)initWithPath:(id)arg1 eventBlock:(/*^block*/id)arg2 ;
-(id)eventBlock;
-(BOOL)started;
@end

