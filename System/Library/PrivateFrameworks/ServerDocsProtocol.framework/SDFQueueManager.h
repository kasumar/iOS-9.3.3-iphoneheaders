/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SDFQueueManager : NSObject {

	NSMutableDictionary* _serviceQueues;

}
+(id)sharedQueueManager;
-(id)init;
-(id)queueForServiceWithUniqueIdentifier:(id)arg1 ;
@end

