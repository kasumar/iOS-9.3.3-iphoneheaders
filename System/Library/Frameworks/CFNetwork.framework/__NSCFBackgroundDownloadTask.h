/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask {

	BOOL _finished;

}

@property (assign) BOOL finished;              //@synthesize finished=_finished - In the implementation block
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)_onqueue_cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 ;
-(void)_onqueue_didFinishDownloadingToURL:(id)arg1 ;
-(void)_onqueue_didWriteData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3 ;
-(void)_onqueue_didResumeAtOffset:(long long)arg1 expectedTotalBytes:(long long)arg2 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
@end

