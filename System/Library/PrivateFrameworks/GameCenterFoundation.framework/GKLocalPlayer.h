/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKPlayer.h>
#import <libobjc.A.dylib/GKLocalPlayerAuthenticationUIPersonality.h>
#import <libobjc.A.dylib/GKSavedGameListener.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GKLocalPlayerListener;
@class GKInvite, UIAlertView, NSInvocation, GKEventEmitter, NSString, UIViewController;

@interface GKLocalPlayer : GKPlayer <GKLocalPlayerAuthenticationUIPersonality, GKSavedGameListener, NSCoding, NSSecureCoding> {

	BOOL _authenticated;
	BOOL _didAuthenticate;
	BOOL _validatingAccount;
	BOOL _enteringForeground;
	BOOL _newToGameCenter;
	BOOL _showingInGameUI;
	GKInvite* _acceptedInvite;
	/*^block*/id _validateAccountCompletionHandler;
	UIAlertView* _loginAlertView;
	UIAlertView* _currentAlert;
	NSInvocation* _currentFriendRequestInvocation;
	long long _environment;
	GKEventEmitter*<GKLocalPlayerListener> _eventEmitter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIViewController * rootViewController; 
@property (nonatomic,retain) UIViewController * activeViewController; 
@property (nonatomic,retain) UIViewController*<GKAuthenticateViewController> signInViewController; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                                         //@synthesize authenticated=_authenticated - In the implementation block
@property (getter=isUnderage,nonatomic,readonly) BOOL underage; 
@property (nonatomic,copy) id authenticateHandler; 
@property (getter=isAuthenticating,nonatomic,readonly) BOOL authenticating; 
@property (assign,nonatomic) BOOL insideAuthenticatorInvocation; 
@property (nonatomic,retain) NSString * accountName; 
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSString * lastName; 
@property (nonatomic,retain) GKInvite * acceptedInvite;                                                         //@synthesize acceptedInvite=_acceptedInvite - In the implementation block
@property (nonatomic,readonly) BOOL canChangePhoto; 
@property (assign,getter=isPurpleBuddyAccount,nonatomic) BOOL purpleBuddyAccount; 
@property (nonatomic,readonly) long long environment;                                                           //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) BOOL allowNearbyMultiplayer; 
@property (assign,getter=isNewToGameCenter,nonatomic) BOOL newToGameCenter;                                     //@synthesize newToGameCenter=_newToGameCenter - In the implementation block
@property (nonatomic,readonly) NSString * facebookUserID; 
@property (nonatomic,readonly) NSString * iCloudUserID; 
@property (getter=isFindable,nonatomic,readonly) BOOL findable; 
@property (nonatomic,retain) GKEventEmitter*<GKLocalPlayerListener> eventEmitter;                               //@synthesize eventEmitter=_eventEmitter - In the implementation block
@property (assign,getter=isShowingInGameUI,nonatomic) BOOL showingInGameUI;                                     //@synthesize showingInGameUI=_showingInGameUI - In the implementation block
@property (nonatomic,copy) id validateAccountCompletionHandler;                                                 //@synthesize validateAccountCompletionHandler=_validateAccountCompletionHandler - In the implementation block
@property (nonatomic,retain) UIAlertView * loginAlertView;                                                      //@synthesize loginAlertView=_loginAlertView - In the implementation block
@property (assign,nonatomic) UIAlertView * currentAlert;                                                        //@synthesize currentAlert=_currentAlert - In the implementation block
@property (nonatomic,retain) NSInvocation * currentFriendRequestInvocation;                                     //@synthesize currentFriendRequestInvocation=_currentFriendRequestInvocation - In the implementation block
@property (assign,nonatomic) BOOL didAuthenticate;                                                              //@synthesize didAuthenticate=_didAuthenticate - In the implementation block
@property (assign,nonatomic) BOOL validatingAccount;                                                            //@synthesize validatingAccount=_validatingAccount - In the implementation block
@property (assign,nonatomic) BOOL enteringForeground;                                                           //@synthesize enteringForeground=_enteringForeground - In the implementation block
@property (assign,nonatomic) BOOL appIsInBackground; 
+(id)sharedLocalPlayerAuthenticator;
+(id)authenticationPersonality;
+(void)setAuthenticationPersonality:(id)arg1 ;
+(BOOL)hasAuthenticatedAccount;
+(id)accountName;
+(BOOL)supportsSecureCoding;
+(void)performAsync:(/*^block*/id)arg1 ;
+(id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1 ;
+(id)localPlayerAccessQueue;
+(id)_localPlayersFromInternals:(id)arg1 authenticated:(BOOL)arg2 ;
+(void)performSync:(/*^block*/id)arg1 ;
+(void)_sendPlayerAuthAPINotificationForLoggedInPlayerInternals:(id)arg1 loggedOutPlayerInternals:(id)arg2 oldPrimary:(id)arg3 newPrimary:(id)arg4 ;
+(id)localPlayers;
+(id)authenticatedLocalPlayers;
+(id)authenticatedLocalPlayersFiltered:(long long)arg1 ;
+(id)localPlayerForCredential:(id)arg1 ;
+(void)authenticatedLocalPlayersDidChange:(id)arg1 complete:(/*^block*/id)arg2 ;
+(void)authenticateWithUsername:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)localPlayer;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)showCancelledAlertForPlayer:(id)arg1 ;
-(void)showAlertForTag:(unsigned long long)arg1 ;
-(void)_showActionRestrictedAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)showLoginFailedAlert;
-(void)showCreateAccountRestrictedAlert;
-(void)showEditAccountRestrictedAlert;
-(void)showSignInAccountRestrictedAlert;
-(void)alertAndSendFriendRequest:(id)arg1 destination:(id)arg2 ;
-(BOOL)alertUserInStoreDemoModeEnabled;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)isAuthenticating;
-(void)authenticationDidCompleteWithError:(id)arg1 ;
-(void)startAuthenticationForExistingPrimaryPlayer;
-(void)startLegacyAuthenticationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1 ;
-(void)authenticationShowSignInUIForLocalPlayer:(id)arg1 ;
-(void)_showWelcomeBanner;
-(void)_showViewControllerForLegacyApps:(id)arg1 ;
-(void)cancelAuthentication;
-(void)validateAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showAuthenticateViewControllerForGameCenter;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)setActiveViewController:(UIViewController *)arg1 ;
-(UIViewController*<GKAuthenticateViewController>)signInViewController;
-(void)setSignInViewController:(UIViewController*<GKAuthenticateViewController>)arg1 ;
-(void)showViewController:(id)arg1 wrapInNavController:(BOOL)arg2 ;
-(void)removeActiveViewControllerAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UIViewController *)activeViewController;
-(void)deletePhotoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deletePhoto;
-(void)setPhoto:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)fetchSavedGamesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteSavedGamesWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setupForCloudSavedGames;
-(void)registerListener:(id)arg1 ;
-(void)unregisterListener:(id)arg1 ;
-(void)unregisterAllListeners;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)environment;
-(void)setStatus:(id)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)isAuthenticated;
-(id)friends;
-(GKEventEmitter*<GKLocalPlayerListener>)eventEmitter;
-(void)authenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEventEmitter:(GKEventEmitter*<GKLocalPlayerListener>)arg1 ;
-(void)setStatus:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)appIsInBackground;
-(BOOL)insideAuthenticatorInvocation;
-(BOOL)isShowingInGameUI;
-(id)authenticateHandler;
-(void)acceptFriendRequestsFromPlayers:(id)arg1 withHandles:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)declineFriendRequestsFromPlayers:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setAcceptedInvite:(GKInvite *)arg1 ;
-(void)setAppIsInBackground:(BOOL)arg1 ;
-(void)updateFromLocalPlayer:(id)arg1 ;
-(void)loadFriendPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadFriendsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadFriendRecommendationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadGameRecommendationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)canChangePhoto;
-(void)showSettings;
-(void)signOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLoginStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)callAuthHandlerWithError:(id)arg1 ;
-(void)setAuthenticateHandler:(id)arg1 ;
-(void)loadFriendRequests:(/*^block*/id)arg1 ;
-(void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 twitterScreenNames:(id)arg5 facebookIDs:(id)arg6 rid:(id)arg7 block:(/*^block*/id)arg8 ;
-(void)fetchMultiplayerGameInvite;
-(void)fetchTurnBasedEvent;
-(void)cancelGameInvite:(id)arg1 ;
-(void)inviteeAcceptedGameInviteWithNotification:(id)arg1 ;
-(void)inviteeDeclinedGameInviteWithNotification:(id)arg1 ;
-(BOOL)hasEmailAddress:(id)arg1 ;
-(void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateIdentityVerificationSignatureWithCompletionHandler:(/*^block*/id)arg1 ;
-(GKInvite *)acceptedInvite;
-(id)validateAccountCompletionHandler;
-(void)setValidateAccountCompletionHandler:(id)arg1 ;
-(UIAlertView *)loginAlertView;
-(void)setLoginAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)currentAlert;
-(void)setCurrentAlert:(UIAlertView *)arg1 ;
-(NSInvocation *)currentFriendRequestInvocation;
-(void)setCurrentFriendRequestInvocation:(NSInvocation *)arg1 ;
-(BOOL)didAuthenticate;
-(void)setDidAuthenticate:(BOOL)arg1 ;
-(BOOL)validatingAccount;
-(void)setValidatingAccount:(BOOL)arg1 ;
-(BOOL)enteringForeground;
-(void)setEnteringForeground:(BOOL)arg1 ;
-(BOOL)isNewToGameCenter;
-(void)setShowingInGameUI:(BOOL)arg1 ;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(void)setInsideAuthenticatorInvocation:(BOOL)arg1 ;
-(void)setNewToGameCenter:(BOOL)arg1 ;
-(void)removeFriend:(id)arg1 block:(/*^block*/id)arg2 ;
@end

