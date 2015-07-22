/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:46:03 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKPlayer.h>
#import <GameCenterFoundation/NSCoding.h>
#import <GameCenterFoundation/NSSecureCoding.h>
#import <GameCenterFoundation/GKSavedGameListener.h>

@protocol GKLocalPlayerListener, GKAuthenticateViewController;
@class GKInvite, UIAlertView, NSString, NSInvocation, NSDictionary, NSDate, GKEventEmitter, UIViewController;

@interface GKLocalPlayer : GKPlayer <NSCoding, NSSecureCoding, GKSavedGameListener> {

	char _authenticated;
	char _authenticating;
	char _authenticatingCurrentAccount;
	char _didAuthenticate;
	char _validatingAccount;
	char _enteringForeground;
	char _appUnrecognized;
	char _newToGameCenter;
	/*^block*/id _authenticateHandler;
	GKInvite* _acceptedInvite;
	/*^block*/id _authenticationCompletionHandler;
	/*^block*/id _validateAccountCompletionHandler;
	UIAlertView* _loginAlertView;
	UIAlertView* _currentAlert;
	NSString* _lastUsernameAttempted;
	NSString* _lastAccountNameAuthenticated;
	NSInvocation* _currentFriendRequestInvocation;
	unsigned _failedLogins;
	NSDictionary* _authenticateAlertDictionary;
	int _environment;
	NSString* _lastAuthPlayerID;
	NSDate* _lastAuthDate;
	GKEventEmitter*<GKLocalPlayerListener> _eventEmitter;
	UIViewController* _rootViewController;
	UIViewController* _activeViewController;
	UIViewController*<GKAuthenticateViewController> _signInViewController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAuthenticated,nonatomic) char authenticated;                                         //@synthesize authenticated=_authenticated - In the implementation block
@property (getter=isUnderage,nonatomic,readonly) char underage; 
@property (nonatomic,copy) id authenticateHandler;                                                              //@synthesize authenticateHandler=_authenticateHandler - In the implementation block
@property (assign,getter=isAuthenticating,nonatomic) char authenticating;                                       //@synthesize authenticating=_authenticating - In the implementation block
@property (nonatomic,retain) NSString * accountName; 
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSString * lastName; 
@property (nonatomic,retain) GKInvite * acceptedInvite;                                                         //@synthesize acceptedInvite=_acceptedInvite - In the implementation block
@property (nonatomic,readonly) char canChangePhoto; 
@property (nonatomic,retain) NSString * lastUsernameAttempted;                                                  //@synthesize lastUsernameAttempted=_lastUsernameAttempted - In the implementation block
@property (nonatomic,retain) NSString * lastAccountNameAuthenticated;                                           //@synthesize lastAccountNameAuthenticated=_lastAccountNameAuthenticated - In the implementation block
@property (assign,getter=isPurpleBuddyAccount,nonatomic) char purpleBuddyAccount; 
@property (assign,getter=isAppUnrecognized,nonatomic) char appUnrecognized;                                     //@synthesize appUnrecognized=_appUnrecognized - In the implementation block
@property (nonatomic,readonly) int environment;                                                                 //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) char allowNearbyMultiplayer; 
@property (assign,getter=isNewToGameCenter,nonatomic) char newToGameCenter;                                     //@synthesize newToGameCenter=_newToGameCenter - In the implementation block
@property (nonatomic,readonly) NSString * facebookUserID; 
@property (nonatomic,readonly) NSString * iCloudUserID; 
@property (getter=isFindable,nonatomic,readonly) char findable; 
@property (nonatomic,retain) GKEventEmitter*<GKLocalPlayerListener> eventEmitter;                               //@synthesize eventEmitter=_eventEmitter - In the implementation block
@property (nonatomic,copy) id authenticationCompletionHandler;                                                  //@synthesize authenticationCompletionHandler=_authenticationCompletionHandler - In the implementation block
@property (nonatomic,copy) id validateAccountCompletionHandler;                                                 //@synthesize validateAccountCompletionHandler=_validateAccountCompletionHandler - In the implementation block
@property (nonatomic,retain) UIAlertView * loginAlertView;                                                      //@synthesize loginAlertView=_loginAlertView - In the implementation block
@property (assign,nonatomic) UIAlertView * currentAlert;                                                        //@synthesize currentAlert=_currentAlert - In the implementation block
@property (nonatomic,retain) NSInvocation * currentFriendRequestInvocation;                                     //@synthesize currentFriendRequestInvocation=_currentFriendRequestInvocation - In the implementation block
@property (nonatomic,retain) NSString * lastAuthPlayerID;                                                       //@synthesize lastAuthPlayerID=_lastAuthPlayerID - In the implementation block
@property (nonatomic,retain) NSDate * lastAuthDate;                                                             //@synthesize lastAuthDate=_lastAuthDate - In the implementation block
@property (assign,nonatomic) char didAuthenticate;                                                              //@synthesize didAuthenticate=_didAuthenticate - In the implementation block
@property (assign,nonatomic) char validatingAccount;                                                            //@synthesize validatingAccount=_validatingAccount - In the implementation block
@property (assign,nonatomic) char enteringForeground;                                                           //@synthesize enteringForeground=_enteringForeground - In the implementation block
@property (assign,nonatomic) char authenticatingCurrentAccount;                                                 //@synthesize authenticatingCurrentAccount=_authenticatingCurrentAccount - In the implementation block
@property (assign,nonatomic) unsigned failedLogins;                                                             //@synthesize failedLogins=_failedLogins - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                                             //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) UIViewController * activeViewController;                                           //@synthesize activeViewController=_activeViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<GKAuthenticateViewController> signInViewController;              //@synthesize signInViewController=_signInViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * authenticateAlertDictionary;                                        //@synthesize authenticateAlertDictionary=_authenticateAlertDictionary - In the implementation block
+(char)hasAuthenticatedAccount;
+(id)accountName;
+(char)supportsSecureCoding;
+(id)localPlayer;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)showCancelledAlertForPlayer:(id)arg1 ;
-(void)showAlertForTag:(unsigned)arg1 ;
-(void)_showActionRestrictedAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)showLoginFailedAlert;
-(void)showCreateAccountRestrictedAlert;
-(void)showEditAccountRestrictedAlert;
-(void)showSignInAccountRestrictedAlert;
-(void)alertAndSendFriendRequest:(id)arg1 destination:(id)arg2 ;
-(char)alertUserInStoreDemoModeEnabled;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)startAuthentication;
-(void)startLegacyAuthenticationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)validateAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)callAuthHandlerWithError:(id)arg1 ;
-(void)completeAuthenticationWithResponse:(id)arg1 error:(id)arg2 ;
-(void)finishAuthenticationWithError:(id)arg1 ;
-(void)handleUnderlyingErrorForAuthenticateError:(id)arg1 ;
-(void)showAuthorizeViewController;
-(void)showAuthenticateViewController;
-(void)removeActiveViewControllerAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)showViewController:(id)arg1 wrapInNavController:(char)arg2 ;
-(void)_showWelcomeBanner;
-(void)_showViewControllerForLegacyApps:(id)arg1 ;
-(void)presentError:(id)arg1 forMode:(int)arg2 ;
-(void)showAuthenticateViewControllerForGameCenter;
-(void)signOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelAuthentication;
-(void)deletePhoto;
-(void)setPhoto:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(int)environment;
-(UIViewController *)rootViewController;
-(void)setStatus:(id)arg1 ;
-(void)registerListener:(id)arg1 ;
-(void)unregisterListener:(id)arg1 ;
-(GKEventEmitter*<GKLocalPlayerListener>)eventEmitter;
-(void)fetchSavedGamesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteSavedGamesWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEventEmitter:(GKEventEmitter*<GKLocalPlayerListener>)arg1 ;
-(void)setupForCloudSavedGames;
-(void)daemonFetchGameInvite:(id)arg1 ;
-(void)daemonCancelledGameInvite:(id)arg1 ;
-(void)daemonInviteeRespondedToGameInvite:(id)arg1 ;
-(void)daemonFetchTurnBasedEvent:(id)arg1 ;
-(void)setStatus:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)isAuthenticating;
-(void)_addEmail:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)acceptFriendRequestsFromPlayers:(id)arg1 withHandles:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)declineFriendRequestsFromPlayers:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)bundleIDIsCompatibleWithCurrentGame:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setAcceptedInvite:(GKInvite *)arg1 ;
-(void)setupMultiplayerNotifications;
-(void)updateFromLocalPlayer:(id)arg1 ;
-(void)loadFriendsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadFriendRecommendationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadGameRecommendationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)canChangePhoto;
-(void)showSettings;
-(void)setAuthenticateHandler:(id)arg1 ;
-(void)authenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addEmail:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadFriendRequests:(/*^block*/id)arg1 ;
-(void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 twitterScreenNames:(id)arg5 facebookIDs:(id)arg6 rid:(id)arg7 block:(/*^block*/id)arg8 ;
-(char)hasEmailAddress:(id)arg1 ;
-(void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateIdentityVerificationSignatureWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAuthenticating:(char)arg1 ;
-(id)authenticateHandler;
-(GKInvite *)acceptedInvite;
-(id)authenticationCompletionHandler;
-(void)setAuthenticationCompletionHandler:(id)arg1 ;
-(id)validateAccountCompletionHandler;
-(void)setValidateAccountCompletionHandler:(id)arg1 ;
-(UIAlertView *)loginAlertView;
-(void)setLoginAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)currentAlert;
-(void)setCurrentAlert:(UIAlertView *)arg1 ;
-(NSString *)lastUsernameAttempted;
-(void)setLastUsernameAttempted:(NSString *)arg1 ;
-(char)authenticatingCurrentAccount;
-(void)setAuthenticatingCurrentAccount:(char)arg1 ;
-(NSString *)lastAccountNameAuthenticated;
-(void)setLastAccountNameAuthenticated:(NSString *)arg1 ;
-(NSInvocation *)currentFriendRequestInvocation;
-(void)setCurrentFriendRequestInvocation:(NSInvocation *)arg1 ;
-(char)didAuthenticate;
-(void)setDidAuthenticate:(char)arg1 ;
-(char)validatingAccount;
-(void)setValidatingAccount:(char)arg1 ;
-(char)enteringForeground;
-(void)setEnteringForeground:(char)arg1 ;
-(unsigned)failedLogins;
-(void)setFailedLogins:(unsigned)arg1 ;
-(NSDictionary *)authenticateAlertDictionary;
-(void)setAuthenticateAlertDictionary:(NSDictionary *)arg1 ;
-(char)isAppUnrecognized;
-(void)setAppUnrecognized:(char)arg1 ;
-(NSString *)lastAuthPlayerID;
-(void)setLastAuthPlayerID:(NSString *)arg1 ;
-(NSDate *)lastAuthDate;
-(void)setLastAuthDate:(NSDate *)arg1 ;
-(char)isNewToGameCenter;
-(void)setActiveViewController:(UIViewController *)arg1 ;
-(UIViewController*<GKAuthenticateViewController>)signInViewController;
-(void)setSignInViewController:(UIViewController*<GKAuthenticateViewController>)arg1 ;
-(void)unregisterAllListeners;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(void)setNewToGameCenter:(char)arg1 ;
-(void)loadFriendPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeFriend:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setAuthenticated:(char)arg1 ;
-(char)isAuthenticated;
-(UIViewController *)activeViewController;
-(id)friends;
@end
