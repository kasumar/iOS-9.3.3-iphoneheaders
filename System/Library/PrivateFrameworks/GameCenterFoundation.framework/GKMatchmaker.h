/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class GKMatch, NSSet, NSDictionary, NSObject, NSMutableDictionary, NSDate, GKDiscovery;

@interface GKMatchmaker : NSObject {

	BOOL _nearbyAdvertising;
	BOOL _wasNearbyBrowsing;
	BOOL _nearbyBrowsing;
	int _matching;
	/*^block*/id _inviteHandler;
	GKMatch* _match;
	/*^block*/id _inviteeResponseHandler;
	/*^block*/id _recipientResponseHandler;
	NSSet* _invitees;
	NSDictionary* _inviteesByUserID;
	/*^block*/id _nearbyPlayerHandler;
	/*^block*/id _nearbyPlayerIDHandler;
	NSObject*<OS_dispatch_queue> _lookForInviteQueue;
	NSMutableDictionary* _nearbyPlayers;
	NSDate* _nearbyQueryLastCheckDate;
	GKDiscovery* _nearbyDiscovery;
	double _nearbyQueryAllowance;
	NSSet* _nearbyCompatibileHashes;
	NSMutableDictionary* _nearbyInvites;

}

@property (assign,nonatomic) BOOL nearbyBrowsing;                                          //@synthesize nearbyBrowsing=_nearbyBrowsing - In the implementation block
@property (assign,nonatomic) BOOL nearbyAdvertising;                                       //@synthesize nearbyAdvertising=_nearbyAdvertising - In the implementation block
@property (assign,nonatomic) BOOL wasNearbyBrowsing;                                       //@synthesize wasNearbyBrowsing=_wasNearbyBrowsing - In the implementation block
@property (nonatomic,readonly) BOOL hasInviteListener; 
@property (retain) NSMutableDictionary * nearbyPlayers;                                    //@synthesize nearbyPlayers=_nearbyPlayers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nearbyInvites;                          //@synthesize nearbyInvites=_nearbyInvites - In the implementation block
@property (nonatomic,retain) GKDiscovery * nearbyDiscovery;                                //@synthesize nearbyDiscovery=_nearbyDiscovery - In the implementation block
@property (nonatomic,retain) NSDate * nearbyQueryLastCheckDate;                            //@synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate - In the implementation block
@property (nonatomic,retain) NSSet * nearbyCompatibileHashes;                              //@synthesize nearbyCompatibileHashes=_nearbyCompatibileHashes - In the implementation block
@property (assign,nonatomic) double nearbyQueryAllowance;                                  //@synthesize nearbyQueryAllowance=_nearbyQueryAllowance - In the implementation block
@property (nonatomic,copy) id nearbyPlayerHandler;                                         //@synthesize nearbyPlayerHandler=_nearbyPlayerHandler - In the implementation block
@property (nonatomic,copy) id nearbyPlayerIDHandler;                                       //@synthesize nearbyPlayerIDHandler=_nearbyPlayerIDHandler - In the implementation block
@property (nonatomic,retain) GKMatch * match;                                              //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) NSSet * invitees;                                             //@synthesize invitees=_invitees - In the implementation block
@property (nonatomic,copy) id inviteeResponseHandler;                                      //@synthesize inviteeResponseHandler=_inviteeResponseHandler - In the implementation block
@property (nonatomic,copy) id recipientResponseHandler;                                    //@synthesize recipientResponseHandler=_recipientResponseHandler - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> lookForInviteQueue;              //@synthesize lookForInviteQueue=_lookForInviteQueue - In the implementation block
@property (nonatomic,copy) id inviteHandler;                                               //@synthesize inviteHandler=_inviteHandler - In the implementation block
@property (assign) int matching;                                                           //@synthesize matching=_matching - In the implementation block
@property (retain) NSDictionary * inviteesByUserID;                                        //@synthesize inviteesByUserID=_inviteesByUserID - In the implementation block
+(id)descriptionForNearbyDictionary:(id)arg1 ;
+(id)syncQueue;
+(id)sharedMatchmaker;
-(void)performSync:(/*^block*/id)arg1 ;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)applicationWillTerminateNotification:(id)arg1 ;
-(void)applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)updateNearbyAdvertising;
-(void)acceptNearbyInvite:(id)arg1 connectionData:(id)arg2 ;
-(void)inviteAnyNearbyPlayersWithRequest:(id)arg1 ;
-(void)cancelNearbyInvitesToPlayers:(id)arg1 ;
-(void)startNearbyBrowsing;
-(void)stopNearbyBrowsing;
-(void)localPlayerRespondedToNearbyInvite:(id)arg1 ;
-(void)stopNearbyAdvertising;
-(void)cancelSentNearbyInvites;
-(void)declineReceivedNearbyInvites;
-(id)nearbyDeviceWithDeviceID:(id)arg1 ;
-(void)setNearbyDevice:(id)arg1 reachable:(BOOL)arg2 ;
-(void)foundNearbyDeviceID:(id)arg1 discoveryInfo:(id)arg2 ;
-(void)lostNearbyDeviceID:(id)arg1 ;
-(void)receivedData:(id)arg1 fromNearbyDeviceID:(id)arg2 ;
-(void)handleNearbyProfileQuery:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleNearbyProfileResponse:(id)arg1 fromDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)handleNearbyInvite:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleNearbyInviteResponse:(id)arg1 fromDevice:(id)arg2 ;
-(void)nearbyInviteWasCancelled:(id)arg1 fromDevice:(id)arg2 ;
-(BOOL)shouldRespondToNearbyQuery;
-(id)hashForBundleID:(id)arg1 version:(id)arg2 ;
-(void)loadCompatabilityMatrixAsDictionaryWithHandler:(/*^block*/id)arg1 ;
-(id)_nearbyDeviceWithDeviceID:(id)arg1 ;
-(void)setupNearbyDiscovery;
-(long long)currentEnvironment;
-(id)hashForCurrentGame;
-(void)startNearbyAdvertising;
-(void)generateHashedCompatibiltySet;
-(id)unreleasedHash;
-(int)numberOfNearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2 ;
-(id)nearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2 ;
-(id)profileDictionaryForLocalPlayer;
-(void)setNearbyPlayerFailed:(id)arg1 deviceID:(id)arg2 ;
-(void)setNearbyPlayerAccepted:(id)arg1 deviceID:(id)arg2 connectionData:(id)arg3 ;
-(void)setNearbyPlayerDeclined:(id)arg1 deviceID:(id)arg2 reason:(long long)arg3 ;
-(BOOL)compatibilityMatrix:(id)arg1 includesAppWithBundleID:(id)arg2 version:(id)arg3 ;
-(void)sendProfileResponseToDevice:(id)arg1 ;
-(void)determineIfShouldRespondToNearbyPlayer:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)loadPhotoDataDictionaryWithHandler:(/*^block*/id)arg1 ;
-(void)presentNearbyInvite:(id)arg1 fromDevice:(id)arg2 ;
-(void)saveNearbyInvite:(id)arg1 fromPlayer:(id)arg2 ;
-(void)declineNearbyInviteFromDevice:(id)arg1 reason:(long long)arg2 ;
-(void)removeNearbyInviteFromPlayer:(id)arg1 ;
-(void)localPlayerAcceptedNearbyInvite:(id)arg1 ;
-(id)nearbyInviteFromPlayer:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)lookForInvite;
-(void)registeredListentersChanged;
-(void)findRematchForMatch:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)inviteeResponseHandler;
-(void)setInviteeResponseHandler:(id)arg1 ;
-(id)recipientResponseHandler;
-(void)setRecipientResponseHandler:(id)arg1 ;
-(void)loadConnectivitySettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)inviteeAcceptedNotification:(id)arg1 ;
-(void)inviteeDeclinedNotification:(id)arg1 ;
-(void)localPlayerAcceptedGameInviteNotification:(id)arg1 ;
-(void)setConnectivitySettings:(id)arg1 ;
-(void)setInviteesByUserID:(NSDictionary *)arg1 ;
-(NSSet *)invitees;
-(void)setInvitees:(NSSet *)arg1 ;
-(BOOL)hasInviteListener;
-(void)respondToHostedInvite:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)matchForNearbyInvite:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)matchForRemoteInvite:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)removeInvitee:(id)arg1 ;
-(void)reportResponse:(long long)arg1 forInvitees:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)doneMatchmaking;
-(void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 onlineConnectionData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setMatching:(int)arg1 ;
-(void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_request:(id)arg1 match:(id)arg2 rematchID:(id)arg3 serverHosted:(BOOL)arg4 playerCount:(long long)arg5 connectionData:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 hostedCurrentPlayerCount:(long long)arg3 serverHosted:(BOOL)arg4 rematchID:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)findPlayersForHostedRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)cancelPendingInviteToPlayer:(id)arg1 ;
-(void)cancelPendingInvitesAndMarkInviteComplete:(BOOL)arg1 ;
-(void)setNearbyPlayerHandler:(id)arg1 ;
-(void)setNearbyPlayerIDHandler:(id)arg1 ;
-(void)localPlayerAcceptedGameInvite;
-(NSDictionary *)inviteesByUserID;
-(long long)responseForDeclineReason:(long long)arg1 ;
-(void)finishedAuthenticating;
-(void)setInviteHandler:(id)arg1 ;
-(void)matchForInvite:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)findMatchForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerCount:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelInviteToPlayer:(id)arg1 ;
-(void)finishMatchmakingForMatch:(id)arg1 ;
-(void)queryPlayerGroupActivity:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)queryActivityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startBrowsingForNearbyPlayersWithHandler:(/*^block*/id)arg1 ;
-(void)setNearbyPlayerAccepted:(id)arg1 connectionData:(id)arg2 ;
-(void)setNearbyPlayerDeclined:(id)arg1 reason:(long long)arg2 ;
-(void)setNearbyPlayerFailed:(id)arg1 ;
-(id)inviteHandler;
-(id)nearbyPlayerHandler;
-(id)nearbyPlayerIDHandler;
-(NSObject*<OS_dispatch_queue>)lookForInviteQueue;
-(void)setLookForInviteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)matching;
-(BOOL)nearbyAdvertising;
-(void)setNearbyAdvertising:(BOOL)arg1 ;
-(BOOL)wasNearbyBrowsing;
-(void)setWasNearbyBrowsing:(BOOL)arg1 ;
-(BOOL)nearbyBrowsing;
-(void)setNearbyBrowsing:(BOOL)arg1 ;
-(NSDate *)nearbyQueryLastCheckDate;
-(void)setNearbyQueryLastCheckDate:(NSDate *)arg1 ;
-(GKDiscovery *)nearbyDiscovery;
-(void)setNearbyDiscovery:(GKDiscovery *)arg1 ;
-(double)nearbyQueryAllowance;
-(void)setNearbyQueryAllowance:(double)arg1 ;
-(NSSet *)nearbyCompatibileHashes;
-(void)setNearbyCompatibileHashes:(NSSet *)arg1 ;
-(NSMutableDictionary *)nearbyInvites;
-(void)setNearbyInvites:(NSMutableDictionary *)arg1 ;
-(void)startBrowsingForNearbyPlayersWithReachableHandler:(/*^block*/id)arg1 ;
-(void)stopBrowsingForNearbyPlayers;
-(NSMutableDictionary *)nearbyPlayers;
-(void)setNearbyPlayers:(NSMutableDictionary *)arg1 ;
-(void)setMatch:(GKMatch *)arg1 ;
-(GKMatch *)match;
@end

