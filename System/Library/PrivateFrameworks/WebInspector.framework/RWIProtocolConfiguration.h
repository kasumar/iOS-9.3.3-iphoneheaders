/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RWIProtocolCSSDomainHandler, RWIProtocolDOMDomainHandler, RWIProtocolDOMStorageDomainHandler, RWIProtocolNetworkDomainHandler, RWIProtocolPageDomainHandler;
#import <WebInspector/WebInspector-Structs.h>
@class RWIProtocolCSSDomainEventDispatcher, RWIProtocolConsoleDomainEventDispatcher, RWIProtocolDOMDomainEventDispatcher, RWIProtocolDOMStorageDomainEventDispatcher, RWIProtocolNetworkDomainEventDispatcher, RWIProtocolPageDomainEventDispatcher;

@interface RWIProtocolConfiguration : NSObject {

	AugmentableInspectorController* _controller;
	id<RWIProtocolCSSDomainHandler> _cssHandler;
	RWIProtocolCSSDomainEventDispatcher* _cssEventDispatcher;
	RWIProtocolConsoleDomainEventDispatcher* _consoleEventDispatcher;
	id<RWIProtocolDOMDomainHandler> _domHandler;
	RWIProtocolDOMDomainEventDispatcher* _domEventDispatcher;
	id<RWIProtocolDOMStorageDomainHandler> _domStorageHandler;
	RWIProtocolDOMStorageDomainEventDispatcher* _domStorageEventDispatcher;
	id<RWIProtocolNetworkDomainHandler> _networkHandler;
	RWIProtocolNetworkDomainEventDispatcher* _networkEventDispatcher;
	id<RWIProtocolPageDomainHandler> _pageHandler;
	RWIProtocolPageDomainEventDispatcher* _pageEventDispatcher;

}

@property (setter=setCSSHandler:,nonatomic,retain) id<RWIProtocolCSSDomainHandler> cssHandler; 
@property (nonatomic,readonly) RWIProtocolCSSDomainEventDispatcher * cssEventDispatcher; 
@property (nonatomic,readonly) RWIProtocolConsoleDomainEventDispatcher * consoleEventDispatcher; 
@property (setter=setDOMHandler:,nonatomic,retain) id<RWIProtocolDOMDomainHandler> domHandler; 
@property (nonatomic,readonly) RWIProtocolDOMDomainEventDispatcher * domEventDispatcher; 
@property (setter=setDOMStorageHandler:,nonatomic,retain) id<RWIProtocolDOMStorageDomainHandler> domStorageHandler; 
@property (nonatomic,readonly) RWIProtocolDOMStorageDomainEventDispatcher * domStorageEventDispatcher; 
@property (setter=setNetworkHandler:,nonatomic,retain) id<RWIProtocolNetworkDomainHandler> networkHandler; 
@property (nonatomic,readonly) RWIProtocolNetworkDomainEventDispatcher * networkEventDispatcher; 
@property (setter=setPageHandler:,nonatomic,retain) id<RWIProtocolPageDomainHandler> pageHandler; 
@property (nonatomic,readonly) RWIProtocolPageDomainEventDispatcher * pageEventDispatcher; 
-(void)dealloc;
-(id<RWIProtocolCSSDomainHandler>)cssHandler;
-(RWIProtocolCSSDomainEventDispatcher *)cssEventDispatcher;
-(RWIProtocolConsoleDomainEventDispatcher *)consoleEventDispatcher;
-(id<RWIProtocolDOMDomainHandler>)domHandler;
-(void)setDOMStorageHandler:(id)arg1 ;
-(id<RWIProtocolDOMStorageDomainHandler>)domStorageHandler;
-(RWIProtocolDOMStorageDomainEventDispatcher *)domStorageEventDispatcher;
-(void)setNetworkHandler:(id<RWIProtocolNetworkDomainHandler>)arg1 ;
-(id<RWIProtocolNetworkDomainHandler>)networkHandler;
-(RWIProtocolNetworkDomainEventDispatcher *)networkEventDispatcher;
-(id<RWIProtocolPageDomainHandler>)pageHandler;
-(RWIProtocolPageDomainEventDispatcher *)pageEventDispatcher;
-(void)setDOMHandler:(id)arg1 ;
-(void)setPageHandler:(id<RWIProtocolPageDomainHandler>)arg1 ;
-(void)setCSSHandler:(id)arg1 ;
-(RWIProtocolDOMDomainEventDispatcher *)domEventDispatcher;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
@end

