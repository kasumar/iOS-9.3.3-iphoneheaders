/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCMMetadata;

@interface MCMDataProtectionChangeOperation : NSObject {

	MCMMetadata* _dataContainerMetadata;
	int _newDataProtectionClass;
	BOOL _retryIfLocked;
	BOOL _retried;
	int _operationType;
	/*^block*/id _retryStartBlock;
	/*^block*/id _completionBlock;

}

@property (copy) id retryStartBlock;              //@synthesize retryStartBlock=_retryStartBlock - In the implementation block
@property (copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)dataProtectionChangeOperationWithContainerMetadata:(id)arg1 settingClass:(int)arg2 retryingIfLocked:(BOOL)arg3 changeType:(int)arg4 ;
-(void)setRetryStartBlock:(id)arg1 ;
-(BOOL)_runChangeOperationNeedToRetry:(BOOL*)arg1 withError:(id*)arg2 ;
-(void)performChangeOperation;
-(id)initWithContainerMetadata:(id)arg1 newClass:(int)arg2 retryingIfLocked:(BOOL)arg3 changeType:(int)arg4 ;
-(id)retryStartBlock;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
@end

