/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLConnection, NSData, NSError;

@interface QLThreadInvoker : NSObject {

	NSURLConnection* _connection;
	NSData* _data;
	NSError* _error;

}
-(void)dealloc;
-(void)connectionDidReceiveData:(id)arg1 ;
-(void)connectionDidFailWithError:(id)arg1 ;
-(id)initWithConnection:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)connectionDidReceiveDataLengthReceived:(id)arg1 ;
@end

