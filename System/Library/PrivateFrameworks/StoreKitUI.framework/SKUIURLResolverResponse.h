/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSHTTPURLResponse;

@interface SKUIURLResolverResponse : NSObject {

	NSData* _data;
	NSHTTPURLResponse* _response;

}

@property (nonatomic,readonly) NSData * data;                                //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * URLResponse;              //@synthesize response=_response - In the implementation block
-(NSData *)data;
-(id)initWithData:(id)arg1 URLResponse:(id)arg2 ;
-(NSHTTPURLResponse *)URLResponse;
@end

