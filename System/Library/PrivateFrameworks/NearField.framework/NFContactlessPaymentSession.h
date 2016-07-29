/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFContactlessPaymentSessionCallbacks.h>

@class NSDictionary, NFWeakReference, NFApplet, NSString;

@interface NFContactlessPaymentSession : NFSession <NFContactlessPaymentSessionCallbacks> {

	NSDictionary* _appletsById;
	NFWeakReference* _delegate;
	NFApplet* _activeApplet;
	NFApplet* _defaultApplet;

}

@property (assign) id<NFContactlessPaymentSessionDelegate> delegate; 
@property (readonly) NFApplet * activeApplet;                                     //@synthesize activeApplet=_activeApplet - In the implementation block
@property (readonly) NFApplet * defaultApplet;                                    //@synthesize defaultApplet=_defaultApplet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<NFContactlessPaymentSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<NFContactlessPaymentSessionDelegate>)delegate;
-(void)endSession;
-(id)appletWithIdentifier:(id)arg1 ;
-(id)allApplets;
-(BOOL)stopCardEmulation;
-(void)didStartSession:(id)arg1 ;
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectTechnology:(id)arg1 ;
-(void)didEndUnexpectedly;
-(BOOL)startHostCardEmulation;
-(void)didSelectApplet:(id)arg1 ;
-(void)didReceiveButtonPressForApplet:(id)arg1 ;
-(void)didExpireTransactionForApplet:(id)arg1 ;
-(void)didStartTransaction:(id)arg1 ;
-(void)didEndTransaction:(id)arg1 ;
-(BOOL)setActivePaymentApplet:(id)arg1 makeDefault:(BOOL)arg2 authorization:(id)arg3 ;
-(BOOL)startCardEmulationWithAuthorization:(id)arg1 ;
-(NFApplet *)activeApplet;
-(NFApplet *)defaultApplet;
@end

