/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSString, BKSProcessAssertion, NSObject;

@interface MRDTaskAssertion : NSObject {

	NSString* _bundleID;
	int _pid;
	BKSProcessAssertion* _processAssertion;
	NSObject*<OS_dispatch_source> _invalidationTimer;
	BOOL _acquired;
	long long _type;
	NSString* _name;

}

@property (nonatomic,readonly) long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
-(id)initWithType:(long long)arg1 pid:(int)arg2 ;
-(void)invalidateOnDate:(id)arg1 ;
-(id)_initWithType:(long long)arg1 bundleID:(id)arg2 orPID:(int)arg3 ;
-(void)_cancelInvalidationTimer;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(BOOL)isValid;
-(long long)type;
-(int)pid;
-(NSString *)bundleID;
-(id)initWithType:(long long)arg1 bundleID:(id)arg2 ;
@end

