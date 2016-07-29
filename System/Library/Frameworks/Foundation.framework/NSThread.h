/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSMutableDictionary, NSString;

@interface NSThread : NSObject {

	id _private;
	unsigned char _bytes[44];

}

@property (retain,readonly) NSMutableDictionary * threadDictionary; 
@property (assign) double threadPriority; 
@property (assign) long long qualityOfService; 
@property (copy) NSString * name; 
@property (assign) unsigned long long stackSize; 
@property (readonly) BOOL isMainThread; 
@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(void)_mapkit_runThread:(id)arg1 ;
+(id)_mapkit_networkIOThread;
+(void)_im_runBlock:(/*^block*/id)arg1 ;
+(BOOL)isDying;
+(id)mainThread;
+(BOOL)isMultiThreaded;
+(void)sleepUntilDate:(id)arg1 ;
+(void)exit;
+(BOOL)isMainThread;
+(id)callStackSymbols;
+(id)currentThread;
+(id)callStackReturnAddresses;
+(BOOL)setThreadPriority:(double)arg1 ;
+(double)threadPriority;
+(void)sleepForTimeInterval:(double)arg1 ;
+(void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3 ;
-(void)zotRunBlock:(/*^block*/id)arg1 ;
-(void)__im_performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 modes:(id)arg3 ;
-(void)__im_performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(void)__im_performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 modes:(id)arg3 ;
-(void)__im_performBlock:(/*^block*/id)arg1 modes:(id)arg2 ;
-(void)__im_performBlock:(/*^block*/id)arg1 ;
-(void)__im_performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)registerForStopNotification;
-(void)unregisterForStopNotification;
-(BOOL)shouldStop;
-(long long)qualityOfService;
-(BOOL)_setThreadPriority:(double)arg1 ;
-(BOOL)isDying;
-(id)runLoop;
-(pthread_override_sRef)_beginQoSOverride:(unsigned)arg1 relativePriority:(int)arg2 ;
-(void)_endQoSOverride:(pthread_override_sRef)arg1 ;
-(void)_nq:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isMainThread;
-(void)start;
-(BOOL)isCancelled;
-(void)setQualityOfService:(long long)arg1 ;
-(NSMutableDictionary *)threadDictionary;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setThreadPriority:(double)arg1 ;
-(double)threadPriority;
-(unsigned long long)stackSize;
-(void)setStackSize:(unsigned long long)arg1 ;
@end

