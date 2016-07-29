/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, MPStoreRedownloadProductResponse, NSError, SSURLConnectionRequest, NSString;

@interface MPStoreRedownloadProductOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MPStoreRedownloadProductResponse* _redownloadProductResponse;
	NSError* _responseError;
	SSURLConnectionRequest* _URLConnectionRequest;
	NSString* _buyParameters;
	unsigned long long _endpointType;

}

@property (nonatomic,copy,readonly) NSString * buyParameters;                                             //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,readonly) unsigned long long endpointType;                                           //@synthesize endpointType=_endpointType - In the implementation block
@property (nonatomic,readonly) MPStoreRedownloadProductResponse * redownloadProductResponse; 
@property (nonatomic,copy,readonly) NSError * responseError; 
-(void)cancel;
-(id)init;
-(void)main;
-(id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2 ;
-(MPStoreRedownloadProductResponse *)redownloadProductResponse;
-(NSError *)responseError;
-(NSString *)buyParameters;
-(unsigned long long)endpointType;
@end

