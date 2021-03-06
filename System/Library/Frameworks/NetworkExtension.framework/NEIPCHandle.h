/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEIPC, NSUUID;

@interface NEIPCHandle : NSObject {

	NEIPC* _primary_ipc;
	NEIPC* _secondary_ipc;
	NSUUID* _config_id;
	CFArrayRef _configurations;
	ipc_queue* _send_queue;

}

@property (assign) NEIPC * primary_ipc;                    //@synthesize primary_ipc=_primary_ipc - In the implementation block
@property (assign) NEIPC * secondary_ipc;                  //@synthesize secondary_ipc=_secondary_ipc - In the implementation block
@property (assign) NSUUID * config_id;                     //@synthesize config_id=_config_id - In the implementation block
@property (assign) CFArrayRef configurations;              //@synthesize configurations=_configurations - In the implementation block
@property (assign) ipc_queue* send_queue;                  //@synthesize send_queue=_send_queue - In the implementation block
+(void)deregisterConfiguration:(VPNConfigurationPrivate*)arg1 ;
+(BOOL)sendMessageWithType:(unsigned)arg1 data:(CFDataRef)arg2 forConfiguration:(VPNConfigurationPrivate*)arg3 ;
-(CFArrayRef)configurations;
-(void)dealloc;
-(id)initWithConfiguration:(VPNConfigurationPrivate*)arg1 ;
-(NSUUID *)config_id;
-(id)createIPCFromEndpoint:(id)arg1 ;
-(void)setPrimary_ipc:(NEIPC *)arg1 ;
-(void)setSecondary_ipc:(NEIPC *)arg1 ;
-(ipc_queue*)send_queue;
-(NEIPC *)primary_ipc;
-(NEIPC *)secondary_ipc;
-(void)setSend_queue:(ipc_queue*)arg1 ;
-(void)removeConfiguration:(VPNConfigurationPrivate*)arg1 ;
-(void)addConfiguration:(VPNConfigurationPrivate*)arg1 ;
-(BOOL)sendMessage:(CFDataRef)arg1 withType:(unsigned)arg2 ;
-(long long)getIndexOfConfiguration:(VPNConfigurationPrivate*)arg1 ;
-(void)setConfig_id:(NSUUID *)arg1 ;
-(void)setConfigurations:(CFArrayRef)arg1 ;
@end

