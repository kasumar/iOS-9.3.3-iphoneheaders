/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWNetworkAgent.h>

@class NSString, NSUUID;

@interface NENetworkAgent : NSObject <NWNetworkAgent> {

	BOOL active;
	BOOL kernelActivated;
	BOOL userActivated;
	BOOL voluntary;
	int _internalSessionType;
	NSUUID* agentUUID;
	NSString* agentDescription;
	NSString* _configurationName;
	NSUUID* _internalUUID;
	/*^block*/id _internalStartHandler;

}

@property (copy,readonly) NSUUID * configurationUUID; 
@property (copy) NSString * configurationName;                          //@synthesize configurationName=_configurationName - In the implementation block
@property (readonly) int sessionType; 
@property (copy) NSUUID * internalUUID;                                 //@synthesize internalUUID=_internalUUID - In the implementation block
@property (assign) int internalSessionType;                             //@synthesize internalSessionType=_internalSessionType - In the implementation block
@property (copy) id internalStartHandler;                               //@synthesize internalStartHandler=_internalStartHandler - In the implementation block
@property (copy) NSString * agentDescription; 
@property (copy) NSUUID * agentUUID; 
@property (getter=isActive) BOOL active; 
@property (getter=isKernelActivated) BOOL kernelActivated; 
@property (getter=isUserActivated) BOOL userActivated; 
@property (getter=isVoluntary) BOOL voluntary; 
@property (getter=isSpecificUseOnly) BOOL specificUseOnly; 
@property (getter=isNetworkProvider) BOOL networkProvider; 
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(NSString *)configurationName;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setStartHandler:(/*^block*/id)arg1 ;
-(int)sessionType;
-(id)copyAgentData;
-(BOOL)startAgentWithOptions:(id)arg1 ;
-(NSString *)agentDescription;
-(void)setAgentDescription:(NSString *)arg1 ;
-(NSUUID *)agentUUID;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(BOOL)isKernelActivated;
-(void)setKernelActivated:(BOOL)arg1 ;
-(BOOL)isUserActivated;
-(void)setUserActivated:(BOOL)arg1 ;
-(BOOL)isVoluntary;
-(void)setVoluntary:(BOOL)arg1 ;
-(id)initWithConfigUUID:(id)arg1 sessionType:(int)arg2 ;
-(NSUUID *)internalUUID;
-(int)internalSessionType;
-(void)setInternalStartHandler:(id)arg1 ;
-(id)internalStartHandler;
-(NSUUID *)configurationUUID;
-(void)setConfigurationName:(NSString *)arg1 ;
-(void)setInternalUUID:(NSUUID *)arg1 ;
-(void)setInternalSessionType:(int)arg1 ;
@end

