/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAHACommand.h>
#import <Accessibility/AFServiceCommand.h>

@protocol OS_dispatch_queue;
@class HMDAssistantGather, NSObject, NSArray, NSString, HMHAPMetadata, HMDAssistantCommandHelper;

@interface HMDAssistantCommand : SAHACommand <AFServiceCommand> {

	BOOL _completionHandlerCalled;
	HMDAssistantGather* _gather;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _homeKitObjects;
	long long _numberOfHomes;
	NSString* _primaryHomeName;
	NSString* _primaryHomeID;
	HMHAPMetadata* _metadata;
	HMDAssistantCommandHelper* _assistantCommandHelper;

}

@property (nonatomic,retain) HMDAssistantGather * gather;                                     //@synthesize gather=_gather - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSArray * homeKitObjects;                                        //@synthesize homeKitObjects=_homeKitObjects - In the implementation block
@property (assign,nonatomic) long long numberOfHomes;                                         //@synthesize numberOfHomes=_numberOfHomes - In the implementation block
@property (nonatomic,retain) NSString * primaryHomeName;                                      //@synthesize primaryHomeName=_primaryHomeName - In the implementation block
@property (nonatomic,retain) NSString * primaryHomeID;                                        //@synthesize primaryHomeID=_primaryHomeID - In the implementation block
@property (nonatomic,retain) HMHAPMetadata * metadata;                                        //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) HMDAssistantCommandHelper * assistantCommandHelper;              //@synthesize assistantCommandHelper=_assistantCommandHelper - In the implementation block
@property (assign,nonatomic) BOOL completionHandlerCalled;                                    //@synthesize completionHandlerCalled=_completionHandlerCalled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(NSObject*<OS_dispatch_queue>)queue;
-(HMHAPMetadata *)metadata;
-(void)setMetadata:(HMHAPMetadata *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)homeKitObjects;
-(NSString *)primaryHomeName;
-(void)reportOutcome:(id)arg1 results:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)primaryHomeID;
-(id)filterObjects:(id)arg1 forRoom:(id)arg2 andZone:(id)arg3 ;
-(id)filterObjects:(id)arg1 forGroup:(id)arg2 ;
-(id)filterObjects:(id)arg1 byAttribute:(id)arg2 ;
-(HMDAssistantGather *)gather;
-(void)reportResults:(id)arg1 handler:(/*^block*/id)arg2 ;
-(HMDAssistantCommandHelper *)assistantCommandHelper;
-(void)reportUnlockRequired:(/*^block*/id)arg1 ;
-(void)returnResults:(id)arg1 serviceType:(id)arg2 forAction:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)filterObjects:(id)arg1 forcharacteristicType:(id)arg2 ;
-(void)handleGetColor:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)executeActionSet:(id)arg1 action:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)handleSetColor:(id)arg1 forObjects:(id)arg2 service:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)updateValueToBoundary:(id)arg1 metadata:(id)arg2 ;
-(id)compareForBoundary:(id)arg1 withMetadata:(id)arg2 ;
-(id)updateValue:(id)arg1 forAction:(id)arg2 ;
-(id)compareCurrentValue:(id)arg1 newValue:(id)arg2 withMetadata:(id)arg3 ;
-(long long)numberOfHomes;
-(id)objectsWithSearchFilter:(id)arg1 inHome:(id)arg2 ;
-(id)objectsWithIdentifierList:(id)arg1 ;
-(void)handleGetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleGetMetadataActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleSetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleUpdateActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)parseColorEncoding:(id)arg1 ;
-(id)filterObjects:(id)arg1 forCharacteristics:(id)arg2 ;
-(id)handleReadWriteResponses:(id)arg1 error:(id)arg2 forAction:(id)arg3 inServiceType:(id)arg4 results:(id)arg5 ;
-(id)filterObjects:(id)arg1 byCharacteristicType:(id)arg2 ;
-(void)setGather:(HMDAssistantGather *)arg1 ;
-(void)setCompletionHandlerCalled:(BOOL)arg1 ;
-(BOOL)completionHandlerCalled;
-(void)setNumberOfHomes:(long long)arg1 ;
-(void)setPrimaryHomeName:(NSString *)arg1 ;
-(void)setPrimaryHomeID:(NSString *)arg1 ;
-(void)setHomeKitObjects:(NSArray *)arg1 ;
-(void)setAssistantCommandHelper:(HMDAssistantCommandHelper *)arg1 ;
-(void)handleCommandWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performWithGather:(id)arg1 queue:(id)arg2 msgDispatcher:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

