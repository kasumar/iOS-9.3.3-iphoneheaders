/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject {

	NSLock* _lock;
	NSString* _hostname;
	SCNetworkReachabilityRef _reachability;
	unsigned _flags;
	CFDictionaryRef _observers;
	BOOL _isReachable;
	BOOL _receivedAtLeastOneCallback;

}

@property (assign,nonatomic) NSString * hostname;              //@synthesize hostname=_hostname - In the implementation block
-(void)reachabilityChangedWithFlags:(unsigned)arg1 ;
-(id)initWithHostname:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(void)setHostname:(NSString *)arg1 ;
-(NSString *)hostname;
-(BOOL)hasObservers;
@end

