/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFRequestInfo;

@interface AFRemoteRequest : NSObject {

	AFRequestInfo* _info;

}

@property (nonatomic,readonly) AFRequestInfo * info;              //@synthesize info=_info - In the implementation block
-(id)initWithInfo:(id)arg1 ;
-(AFRequestInfo *)info;
-(void)sendWithCompletion:(/*^block*/id)arg1 ;
@end

