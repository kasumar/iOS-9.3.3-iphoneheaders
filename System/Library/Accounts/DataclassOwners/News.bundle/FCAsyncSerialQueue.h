/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Accounts/DataclassOwners/News.bundle/News
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface FCAsyncSerialQueue : NSObject {

	NSOperationQueue* _serialOperationQueue;

}

@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;              //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
-(void)cancelAllBlocks;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(void)enqueueWithQualityOfService:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)enqueueBlockForMainThread:(/*^block*/id)arg1 ;
-(id)init;
-(NSOperationQueue *)serialOperationQueue;
@end

