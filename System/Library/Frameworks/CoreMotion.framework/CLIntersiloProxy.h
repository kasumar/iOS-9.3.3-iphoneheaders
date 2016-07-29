/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol CLIntersiloProxyDelegateProtocol;
@class CLIntersiloInterfaceSelectorInfo, CLSilo, CLIntersiloInterface;

@interface CLIntersiloProxy : NSProxy {

	CLIntersiloProxy* _peer;
	CLIntersiloProxy* _asymStrongPeer;
	CLIntersiloInterfaceSelectorInfo* _last;
	unsigned long long _opaqueTag;
	id<CLIntersiloProxyDelegateProtocol> _delegate;
	CLSilo* _delegateSilo;
	CLIntersiloInterface* _delegateInterface;
	CLIntersiloInterface* _proxiedInterface;

}

@property (nonatomic,__weak,readonly) id<CLIntersiloProxyDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) CLSilo * delegateSilo;                                      //@synthesize delegateSilo=_delegateSilo - In the implementation block
@property (nonatomic,copy,readonly) CLIntersiloInterface * delegateInterface;                     //@synthesize delegateInterface=_delegateInterface - In the implementation block
@property (nonatomic,copy,readonly) CLIntersiloInterface * proxiedInterface;                      //@synthesize proxiedInterface=_proxiedInterface - In the implementation block
+(id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 withInboundInterface:(id)arg3 andOutboundInterface:(id)arg4 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id<CLIntersiloProxyDelegateProtocol>)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2 ;
-(void)setOpaqueTag:(void*)arg1 ;
-(id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 delegateObject:(id)arg3 delegateSilo:(id)arg4 andUninitializedPeer:(id)arg5 ;
-(id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 andUninitializedPeer:(id)arg3 ;
-(CLSilo *)delegateSilo;
-(CLIntersiloInterface *)delegateInterface;
-(CLIntersiloInterface *)proxiedInterface;
@end

