/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLIntersiloServiceProtocol <CLIntersiloProxyDelegateProtocol>
@optional
-(void)beginService;
-(void)endService;
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2;
-(void)setOpaqueTag:(void*)arg1;

@required
+(void)becameFatallyBlocked:(id)arg1;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2;
+(BOOL)isSupported;

@end

