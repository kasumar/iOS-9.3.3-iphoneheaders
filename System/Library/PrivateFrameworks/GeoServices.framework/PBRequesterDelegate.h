/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBRequesterDelegate <NSObject>
@optional
-(void)requesterDidFinish:(id)arg1;
-(void)requesterWillSendRequestForEstablishedConnection:(id)arg1;
-(void)requester:(id)arg1 didFailWithError:(id)arg2;
-(void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
-(void)requesterDidCancel:(id)arg1;

@end

