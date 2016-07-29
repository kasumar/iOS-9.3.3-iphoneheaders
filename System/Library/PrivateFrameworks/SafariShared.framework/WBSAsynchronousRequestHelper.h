/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/WBSAsynchronousRequest.h>

@class NSOperationQueue, NSURLConnection, NSURLResponse, NSMutableData, NSString;

@interface WBSAsynchronousRequestHelper : NSObject <NSURLConnectionDelegate, WBSAsynchronousRequest> {

	NSOperationQueue* _queue;
	/*^block*/id _handler;
	NSURLConnection* _connection;
	NSURLResponse* _response;
	NSMutableData* _data;
	id _lifetimeExtender;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithRequest:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendRequest;
@end

