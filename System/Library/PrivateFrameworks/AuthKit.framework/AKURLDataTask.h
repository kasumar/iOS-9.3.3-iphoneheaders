/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLRequest, NSURLSessionDataTask, NSMutableData, NSError;

@interface AKURLDataTask : NSObject {

	BOOL _canceledOrCompleted;
	NSURLRequest* _request;
	unsigned long long _retryCount;
	NSURLSessionDataTask* _underlyingTask;
	/*^block*/id _completionHandler;
	NSMutableData* _receivedData;
	NSError* _lastRetryError;

}

@property (nonatomic,retain) NSURLRequest * request;                             //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                      //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * underlyingTask;              //@synthesize underlyingTask=_underlyingTask - In the implementation block
@property (nonatomic,copy) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;                       //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,retain) NSError * lastRetryError;                           //@synthesize lastRetryError=_lastRetryError - In the implementation block
@property (assign,nonatomic) BOOL canceledOrCompleted;                           //@synthesize canceledOrCompleted=_canceledOrCompleted - In the implementation block
-(NSURLRequest *)request;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setCanceledOrCompleted:(BOOL)arg1 ;
-(NSURLSessionDataTask *)underlyingTask;
-(void)setUnderlyingTask:(NSURLSessionDataTask *)arg1 ;
-(NSError *)lastRetryError;
-(void)setLastRetryError:(NSError *)arg1 ;
-(BOOL)canceledOrCompleted;
-(void)_completeWithError:(id)arg1 ;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
@end

