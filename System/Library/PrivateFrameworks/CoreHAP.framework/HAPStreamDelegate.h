/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPStreamDelegate <NSObject>
@required
-(void)stream:(id)arg1 didCloseWithError:(id)arg2;
-(void)streamDidSuspend:(id)arg1;
-(void)streamDidResume:(id)arg1;
-(void)stream:(id)arg1 didFailToWriteDataWithIdentifier:(id)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didReceiveData:(id)arg2 withIdentifier:(id)arg3;

@end

