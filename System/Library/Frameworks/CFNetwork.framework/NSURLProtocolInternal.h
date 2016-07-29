/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLProtocolClient;
@class NSURLRequest, NSCachedURLResponse, NSLock;

@interface NSURLProtocolInternal : NSObject {

	id<NSURLProtocolClient> client;
	NSURLRequest* request;
	NSCachedURLResponse* cachedResponse;
	NSLock* mutex;

}
-(void)dealloc;
-(id)init;
@end

