/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SWCXPCServer <NSObject>
@required
-(void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 details:(id)arg4 reply:(/*^block*/id)arg5;
-(void)logControl:(id)arg1 reply:(/*^block*/id)arg2;
-(void)removeService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4;
-(void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 mask:(unsigned)arg4 flags:(unsigned)arg5 reply:(/*^block*/id)arg6;
-(void)addAllAppsWithReply:(/*^block*/id)arg1;
-(void)checkService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4;
-(void)getInfoForService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4;
-(void)addService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4;
-(void)show:(id)arg1 reply:(/*^block*/id)arg2;

@end

