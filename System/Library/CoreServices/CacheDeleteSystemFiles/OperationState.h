/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/CacheDeleteSystemFiles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OperationState : NSObject {

	BOOL _operationCancelled;
	int _operationRefcount;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL operationCancelled;                                   //@synthesize operationCancelled=_operationCancelled - In the implementation block
@property (assign) int operationRefcount;                                     //@synthesize operationRefcount=_operationRefcount - In the implementation block
-(BOOL)operationCancelled;
-(void)setOperationCancelled:(BOOL)arg1 ;
-(int)operationRefcount;
-(void)setOperationRefcount:(int)arg1 ;
-(void)cancel;
-(id)init;
-(void)end;
-(BOOL)cancelled;
-(BOOL)begin;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

