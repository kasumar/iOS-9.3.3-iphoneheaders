/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBPairingAgentParentDelegate, CBPairingAgentDelegate;
@interface CBPairingAgent : NSObject {

	id<CBPairingAgentParentDelegate> _parentManager;
	BOOL _useOOBMode;
	id<CBPairingAgentDelegate> _delegate;

}

@property (assign,nonatomic) id<CBPairingAgentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useOOBMode;                                  //@synthesize useOOBMode=_useOOBMode - In the implementation block
-(void)setDelegate:(id<CBPairingAgentDelegate>)arg1 ;
-(id<CBPairingAgentDelegate>)delegate;
-(void)setOrphan;
-(id)initWithParentManager:(id)arg1 ;
-(void)handlePairingMessage:(unsigned short)arg1 args:(id)arg2 ;
-(void)updateRegistration;
-(void)handlePairingRequested:(id)arg1 ;
-(void)handlePairingCompleted:(id)arg1 ;
-(void)handleUnpaired:(id)arg1 ;
-(BOOL)isPeerCloudPaired:(id)arg1 ;
-(id)retrievePairedPeers;
-(void)pairPeer:(id)arg1 ;
-(void)respondToPairingRequest:(id)arg1 type:(long long)arg2 accept:(BOOL)arg3 data:(id)arg4 ;
-(void)setUseOOBMode:(BOOL)arg1 ;
-(id)retrieveOOBDataForPeer:(id)arg1 ;
-(void)setOOBPairingEnabled:(BOOL)arg1 forPeer:(id)arg2 ;
-(BOOL)useOOBMode;
-(BOOL)isPeerPaired:(id)arg1 ;
-(void)unpairPeer:(id)arg1 ;
@end
