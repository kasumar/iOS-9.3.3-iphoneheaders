/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <Catalyst/CATOperation.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSURL, NSURLSession, NSURLSessionDataTask, NSURLCredential, NSString;

@interface CRKFetchServerResourceOperation : CATOperation <NSURLSessionDataDelegate> {

	NSURL* _resourceURL;
	double _timeoutInterval;
	NSURLSession* _session;
	NSURLSessionDataTask* _dataTask;
	NSURLCredential* _credential;

}

@property (nonatomic,retain) NSURL * resourceURL;                          //@synthesize resourceURL=_resourceURL - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                       //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;              //@synthesize dataTask=_dataTask - In the implementation block
@property (nonatomic,retain) NSURLCredential * credential;                 //@synthesize credential=_credential - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)resourceURL;
-(BOOL)isAsynchronous;
-(void)cancel;
-(void)main;
-(NSURLCredential *)credential;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(double)timeoutInterval;
-(void)setResourceURL:(NSURL *)arg1 ;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(void)startTask;
-(id)initWithURL:(id)arg1 identity:(SecIdentityRef)arg2 certificates:(id)arg3 timeoutInterval:(double)arg4 ;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
@end

