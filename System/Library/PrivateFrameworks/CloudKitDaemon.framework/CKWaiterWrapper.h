/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CKWaiterWrapper : NSObject {

	id _waiter;
	NSArray* _zoneIDs;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) id waiter;                       //@synthesize waiter=_waiter - In the implementation block
@property (nonatomic,retain) NSArray * zoneIDs;               //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)description;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSArray *)zoneIDs;
-(id)CKPropertiesDescription;
-(id)waiter;
-(void)setWaiter:(id)arg1 ;
-(void)setZoneIDs:(NSArray *)arg1 ;
@end

