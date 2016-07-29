/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKFetchOperationDelegate;
@class NSUUID;

@interface HKFetchOperation : NSObject {

	NSUUID* _UUID;
	long long _clientPriority;
	long long _operationPriority;
	id<HKFetchOperationDelegate> _delegate;

}

@property (nonatomic,readonly) NSUUID * UUID;                                                                                 //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) long long clientPriority;                                                                        //@synthesize clientPriority=_clientPriority - In the implementation block
@property (assign,nonatomic) long long operationPriority;                                                                     //@synthesize operationPriority=_operationPriority - In the implementation block
@property (assign,setter=_setDelegate:,getter=_delegate,nonatomic,__weak) id<HKFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id)_delegate;
-(NSUUID *)UUID;
-(void)_setDelegate:(id)arg1 ;
-(void)stopOperation;
-(long long)clientPriority;
-(long long)operationPriority;
-(void)startOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)_alertDelegateDidUpdatePriority;
-(void)setClientPriority:(long long)arg1 ;
-(void)setOperationPriority:(long long)arg1 ;
@end

