/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface BKSHIDEventRouterManagerBase : NSObject {

	NSArray* _eventRouters;

}

@property (nonatomic,retain) NSArray * eventRouters;              //@synthesize eventRouters=_eventRouters - In the implementation block
-(void)setEventRouters:(NSArray *)arg1 ;
-(NSArray *)eventRouters;
-(long long)routerDestinationForDescriptor:(id)arg1 ;
-(id)init;
-(id)description;
@end

