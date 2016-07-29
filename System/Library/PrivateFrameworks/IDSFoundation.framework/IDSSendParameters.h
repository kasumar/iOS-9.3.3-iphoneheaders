/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSData, NSString, NSArray, NSNumber, NSDate;

@interface IDSSendParameters : NSObject <NSCopying> {

	NSMutableDictionary* _params;

}

@property (nonatomic,retain) NSDictionary * message; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSDictionary * protobuf; 
@property (nonatomic,retain) NSString * resourcePath; 
@property (nonatomic,retain) NSDictionary * resourceMetadata; 
@property (nonatomic,retain) NSArray * destinations; 
@property (nonatomic,retain) NSString * accountUUID; 
@property (nonatomic,retain) NSString * mainAccountUUID; 
@property (nonatomic,retain) NSString * localDestinationDeviceUUID; 
@property (assign,nonatomic) BOOL wantsAppAck; 
@property (assign,nonatomic) BOOL encryptPayload; 
@property (assign,nonatomic) BOOL compressPayload; 
@property (assign,nonatomic) double timeout; 
@property (assign,nonatomic) long long priority; 
@property (assign,nonatomic) BOOL localDelivery; 
@property (assign,nonatomic) BOOL requireBluetooth; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) BOOL bypassDuet; 
@property (assign,nonatomic) BOOL fakeMessage; 
@property (assign,nonatomic) BOOL bypassStorage; 
@property (assign,nonatomic) BOOL activityContinuation; 
@property (assign,nonatomic) BOOL nonWaking; 
@property (nonatomic,retain) NSString * queueOneIdentifier; 
@property (assign,nonatomic) BOOL fireAndForget; 
@property (nonatomic,retain) NSArray * duetIdentifiersOverride; 
@property (assign,nonatomic) BOOL forceEncryptionOff; 
@property (nonatomic,retain) NSString * subService; 
@property (nonatomic,retain) NSString * subServiceAccountUUID; 
@property (assign,nonatomic) BOOL expectsPeerResponse; 
@property (nonatomic,retain) NSString * peerResponseIdentifier; 
@property (assign,nonatomic) BOOL compressed; 
@property (nonatomic,retain) NSString * fromID; 
@property (nonatomic,retain) NSString * originalfromID; 
@property (assign,nonatomic) BOOL useDictAsTopLevel; 
@property (assign,nonatomic) BOOL wantsResponse; 
@property (nonatomic,retain) NSData * dataToEncrypt; 
@property (nonatomic,retain) NSData * messageUUID; 
@property (nonatomic,retain) NSString * alternateCallbackID; 
@property (nonatomic,retain) NSNumber * command; 
@property (assign,nonatomic) BOOL wantsDeliveryStatus; 
@property (nonatomic,retain) NSDictionary * deliveryStatusContext; 
@property (nonatomic,retain) NSArray * interestingRegistrationProperties; 
@property (nonatomic,retain) NSArray * requireAllRegistrationProperties; 
@property (nonatomic,retain) NSArray * requireLackOfRegistrationProperties; 
@property (assign,nonatomic) BOOL isProxiedOutgoingMessage; 
@property (nonatomic,retain) NSArray * bulkedPayload; 
@property (assign,nonatomic) BOOL daemonDeathResend; 
@property (assign,nonatomic) BOOL bypassSizeCheck; 
@property (nonatomic,retain,readonly) NSDate * expirationDate; 
@property (nonatomic,retain,readonly) NSDictionary * dictionaryRepresentation; 
@property (assign,nonatomic) BOOL enforceRemoteTimeouts; 
@property (nonatomic,retain) NSData * accessToken; 
@property (assign,nonatomic) BOOL homeKitPayload; 
@property (assign,nonatomic) BOOL disableAliasValidation; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(NSString *)identifier;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)message;
-(void)setMessage:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)destinations;
-(void)setTimeout:(double)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)wantsDeliveryStatus;
-(NSDictionary *)deliveryStatusContext;
-(BOOL)compressed;
-(void)setCompressed:(BOOL)arg1 ;
-(NSString *)peerResponseIdentifier;
-(void)setResourcePath:(NSString *)arg1 ;
-(void)setResourceMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)resourceMetadata;
-(NSString *)accountUUID;
-(NSData *)dataToEncrypt;
-(void)setBulkedPayload:(NSArray *)arg1 ;
-(NSArray *)bulkedPayload;
-(NSArray *)requireAllRegistrationProperties;
-(NSArray *)requireLackOfRegistrationProperties;
-(NSArray *)interestingRegistrationProperties;
-(NSString *)queueOneIdentifier;
-(NSArray *)duetIdentifiersOverride;
-(NSString *)subService;
-(void)setSubServiceAccountUUID:(NSString *)arg1 ;
-(NSString *)subServiceAccountUUID;
-(void)setMainAccountUUID:(NSString *)arg1 ;
-(NSString *)mainAccountUUID;
-(void)setOriginalfromID:(NSString *)arg1 ;
-(NSString *)originalfromID;
-(void)setLocalDestinationDeviceUUID:(NSString *)arg1 ;
-(NSString *)localDestinationDeviceUUID;
-(BOOL)useDictAsTopLevel;
-(BOOL)encryptPayload;
-(BOOL)compressPayload;
-(BOOL)wantsResponse;
-(BOOL)localDelivery;
-(BOOL)requireBluetooth;
-(BOOL)bypassDuet;
-(BOOL)fakeMessage;
-(BOOL)bypassStorage;
-(BOOL)activityContinuation;
-(BOOL)nonWaking;
-(BOOL)daemonDeathResend;
-(void)setBypassSizeCheck:(BOOL)arg1 ;
-(BOOL)bypassSizeCheck;
-(BOOL)fireAndForget;
-(void)setIsProxiedOutgoingMessage:(BOOL)arg1 ;
-(BOOL)isProxiedOutgoingMessage;
-(BOOL)enforceRemoteTimeouts;
-(BOOL)homeKitPayload;
-(BOOL)disableAliasValidation;
-(BOOL)forceEncryptionOff;
-(void)setDataToEncrypt:(NSData *)arg1 ;
-(void)setWantsResponse:(BOOL)arg1 ;
-(void)setFromID:(NSString *)arg1 ;
-(void)setEnforceRemoteTimeouts:(BOOL)arg1 ;
-(void)setHomeKitPayload:(BOOL)arg1 ;
-(void)setSubService:(NSString *)arg1 ;
-(void)setFakeMessage:(BOOL)arg1 ;
-(void)setDisableAliasValidation:(BOOL)arg1 ;
-(void)setWantsAppAck:(BOOL)arg1 ;
-(void)setWantsDeliveryStatus:(BOOL)arg1 ;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(void)setMessageUUID:(NSData *)arg1 ;
-(void)setAlternateCallbackID:(NSString *)arg1 ;
-(void)setEncryptPayload:(BOOL)arg1 ;
-(void)setCompressPayload:(BOOL)arg1 ;
-(void)setLocalDelivery:(BOOL)arg1 ;
-(void)setRequireBluetooth:(BOOL)arg1 ;
-(void)setUseDictAsTopLevel:(BOOL)arg1 ;
-(void)setExpectsPeerResponse:(BOOL)arg1 ;
-(void)setPeerResponseIdentifier:(NSString *)arg1 ;
-(void)setBypassDuet:(BOOL)arg1 ;
-(void)setNonWaking:(BOOL)arg1 ;
-(void)setFireAndForget:(BOOL)arg1 ;
-(void)setBypassStorage:(BOOL)arg1 ;
-(void)setActivityContinuation:(BOOL)arg1 ;
-(void)setQueueOneIdentifier:(NSString *)arg1 ;
-(void)setForceEncryptionOff:(BOOL)arg1 ;
-(void)setDuetIdentifiersOverride:(NSArray *)arg1 ;
-(void)setInterestingRegistrationProperties:(NSArray *)arg1 ;
-(void)setRequireAllRegistrationProperties:(NSArray *)arg1 ;
-(void)setRequireLackOfRegistrationProperties:(NSArray *)arg1 ;
-(void)setAccountUUID:(NSString *)arg1 ;
-(NSString *)alternateCallbackID;
-(void)setDaemonDeathResend:(BOOL)arg1 ;
-(BOOL)wantsAppAck;
-(NSString *)fromID;
-(NSDictionary *)protobuf;
-(void)setAccessToken:(NSData *)arg1 ;
-(NSNumber *)command;
-(void)setCommand:(NSNumber *)arg1 ;
-(NSString *)resourcePath;
-(void)setDestinations:(NSArray *)arg1 ;
-(double)timeout;
-(void)setProtobuf:(NSDictionary *)arg1 ;
-(NSData *)messageUUID;
-(BOOL)expectsPeerResponse;
-(NSData *)accessToken;
@end

