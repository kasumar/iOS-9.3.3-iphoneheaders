/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXAppRepresentation.h>

@protocol _GAXAppRepresentationDelegate;
@class AXIPCClient;

@interface _GAXAppRepresentation : AXAppRepresentation {

	BOOL _isSuspended;
	BOOL _gaxClientLoaded;
	BOOL _wasPlayingMedia;
	id<_GAXAppRepresentationDelegate> _delegate;
	unsigned long long _relaunchAttempts;
	AXIPCClient* _appClient;

}

@property (assign,nonatomic) id<_GAXAppRepresentationDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long relaunchAttempts;                                    //@synthesize relaunchAttempts=_relaunchAttempts - In the implementation block
@property (assign,getter=isGAXClientLoaded,nonatomic) BOOL gaxClientLoaded;                          //@synthesize gaxClientLoaded=_gaxClientLoaded - In the implementation block
@property (getter=isPurpleBuddy,nonatomic,readonly) BOOL purpleBuddy; 
@property (getter=isPreferences,nonatomic,readonly) BOOL preferences; 
@property (getter=isHostedByTheSystemApp,nonatomic,readonly) BOOL hostedByTheSystemApp; 
@property (assign,nonatomic) BOOL wasPlayingMedia;                                                   //@synthesize wasPlayingMedia=_wasPlayingMedia - In the implementation block
@property (nonatomic,retain) AXIPCClient * appClient;                                                //@synthesize appClient=_appClient - In the implementation block
-(id)restrictionIdentifiers;
-(BOOL)wasPlayingMedia;
-(AXIPCClient *)appClient;
-(BOOL)isGAXClientLoaded;
-(unsigned long long)relaunchAttempts;
-(void)setRelaunchAttempts:(unsigned long long)arg1 ;
-(void)setWasPlayingMedia:(BOOL)arg1 ;
-(void)setGaxClientLoaded:(BOOL)arg1 ;
-(BOOL)isPurpleBuddy;
-(void)setAppClient:(AXIPCClient *)arg1 ;
-(BOOL)isHostedByTheSystemApp;
-(BOOL)_setupGAXClientConnection;
-(BOOL)_hasValidPID;
-(void)settingsDidChangeWithServerMode:(unsigned)arg1 allowsMotion:(BOOL)arg2 allowsKeyboardTextInput:(BOOL)arg3 ;
-(id)containedViewsForArchivedFingerPath:(id)arg1 ;
-(BOOL)prepareForTransitionToWorkspaceAndRetrieveRestrictionsInformation:(id*)arg1 ;
-(void)restrictionWithIdentifier:(id)arg1 didChangeState:(long long)arg2 ;
-(void)_sendMessageToClient:(id)arg1 replyMessage:(id*)arg2 timeout:(double)arg3 description:(id)arg4 ;
-(BOOL)isWebApp;
-(void)setDelegate:(id<_GAXAppRepresentationDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<_GAXAppRepresentationDelegate>)delegate;
-(void)suspend;
-(void)resume;
-(BOOL)isPreferences;
-(void)terminate;
@end

