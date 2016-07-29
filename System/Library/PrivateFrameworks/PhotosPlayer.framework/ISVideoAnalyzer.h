/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface ISVideoAnalyzer : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMutableDictionary* _operationsByRequestID;
	long long __currentRequestID;

}

@property (assign,setter=_setCurrentRequestID:,nonatomic) long long _currentRequestID;              //@synthesize _currentRequestID=__currentRequestID - In the implementation block
+(id)defaultAnalyzer;
-(id)init;
-(long long)requestAllFrameTimesInAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setCurrentRequestID:(long long)arg1 ;
-(long long)_currentRequestID;
-(void)_handleAllFrameTimesRequestFinishedForTime:(double)arg1 frameTimes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)requestLastFrameTimeBeforeTime:(double)arg1 inAsset:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

