/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIWindow;

@interface SBStarkScreenFocusAssertion : NSObject {

	NSString* _name;
	long long _type;
	double _priority;
	NSString* _bundleID;
	int _pid;
	UIWindow* _window;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double priority;                       //@synthesize priority=_priority - In the implementation block
@property (nonatomic,__weak,readonly) UIWindow * window;              //@synthesize window=_window - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int pid;                               //@synthesize pid=_pid - In the implementation block
-(id)initWithName:(id)arg1 type:(long long)arg2 priority:(double)arg3 window:(id)arg4 application:(id)arg5 pid:(int)arg6 ;
-(UIWindow *)window;
-(id)description;
-(NSString *)name;
-(long long)type;
-(double)priority;
-(int)pid;
-(NSString *)bundleID;
@end

