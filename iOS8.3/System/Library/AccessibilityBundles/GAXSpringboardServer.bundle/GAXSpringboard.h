/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:35:56 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GAXSpringboardServer/GAXSpringboardServer-Structs.h>
@class NSObject, AXTimer, UIWindow, UIView, NSString, AXIPCServer, AXIPCClient, AXAccessQueue, GAXSpringBoardOverrideHandler, SBUILockScreenDisableAssertion;

@interface GAXSpringboard : NSObject {

	SCD_Struct_GA0 _reflectedBackboardState;
	NSObject*<OS_dispatch_queue> _gaxStateAccessQueue;
	char _requiringWallpaper;
	char _shouldRevertClipsToBoundsOnUniqueSubviewOfHostedApplicationView;
	AXTimer* _didEndRequiringWallpaperCheckTimer;
	id _applicationContextHostManager;
	UIWindow* _hostedApplicationWindow;
	UIView* _hostedApplicationView;
	NSString* _frontmostAppIdentifier;
	unsigned _profileConfiguration;
	AXIPCServer* _springboardServer;
	AXIPCClient* _backboardClient;
	AXAccessQueue* _backboardMessageQueue;
	GAXSpringBoardOverrideHandler* _springboardOverrideHandler;
	AXAccessQueue* _applicationLaunchingQueue;
	SBUILockScreenDisableAssertion* _lockScreenDisableAssertion;

}

@property (getter=isEnabled,nonatomic,readonly) char enabled; 
@property (nonatomic,copy) NSString * frontmostAppIdentifier;                                                   //@synthesize frontmostAppIdentifier=_frontmostAppIdentifier - In the implementation block
@property (nonatomic,readonly) char isActive; 
@property (nonatomic,readonly) char isInWorkspace; 
@property (nonatomic,readonly) char isInactive; 
@property (nonatomic,readonly) unsigned profileConfiguration;                                                   //@synthesize profileConfiguration=_profileConfiguration - In the implementation block
@property (nonatomic,readonly) char allowsTouch; 
@property (nonatomic,readonly) char allowsLockButton; 
@property (nonatomic,readonly) char allowsMotion; 
@property (nonatomic,readonly) char allowsAutolock; 
@property (nonatomic,retain) AXIPCServer * springboardServer;                                                   //@synthesize springboardServer=_springboardServer - In the implementation block
@property (nonatomic,retain) AXIPCClient * backboardClient;                                                     //@synthesize backboardClient=_backboardClient - In the implementation block
@property (nonatomic,retain) AXAccessQueue * backboardMessageQueue;                                             //@synthesize backboardMessageQueue=_backboardMessageQueue - In the implementation block
@property (assign,getter=isRequiringWallpaper,nonatomic) char requiringWallpaper;                               //@synthesize requiringWallpaper=_requiringWallpaper - In the implementation block
@property (nonatomic,retain) AXTimer * didEndRequiringWallpaperCheckTimer;                                      //@synthesize didEndRequiringWallpaperCheckTimer=_didEndRequiringWallpaperCheckTimer - In the implementation block
@property (nonatomic,retain) id applicationContextHostManager;                                                  //@synthesize applicationContextHostManager=_applicationContextHostManager - In the implementation block
@property (nonatomic,retain) UIWindow * hostedApplicationWindow;                                                //@synthesize hostedApplicationWindow=_hostedApplicationWindow - In the implementation block
@property (nonatomic,retain) UIView * hostedApplicationView;                                                    //@synthesize hostedApplicationView=_hostedApplicationView - In the implementation block
@property (assign,nonatomic) char shouldRevertClipsToBoundsOnUniqueSubviewOfHostedApplicationView;              //@synthesize shouldRevertClipsToBoundsOnUniqueSubviewOfHostedApplicationView=_shouldRevertClipsToBoundsOnUniqueSubviewOfHostedApplicationView - In the implementation block
@property (nonatomic,retain) GAXSpringBoardOverrideHandler * springboardOverrideHandler;                        //@synthesize springboardOverrideHandler=_springboardOverrideHandler - In the implementation block
@property (nonatomic,retain) AXAccessQueue * applicationLaunchingQueue;                                         //@synthesize applicationLaunchingQueue=_applicationLaunchingQueue - In the implementation block
@property (nonatomic,retain) SBUILockScreenDisableAssertion * lockScreenDisableAssertion;                       //@synthesize lockScreenDisableAssertion=_lockScreenDisableAssertion - In the implementation block
+(id)sharedInstance;
-(void)setBackboardClient:(AXIPCClient *)arg1 ;
-(AXIPCClient *)backboardClient;
-(void)_sendMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 replyMessage:(id*)arg3 description:(id)arg4 ;
-(char)isInWorkspace;
-(char)allowsMotion;
-(void)systemDidRestartDueToLowBattery;
-(char)wantsSingleAppMode;
-(char)wantsSingleAppModeOrAppSelfLockMode;
-(char)wantsAppSelfLockMode;
-(id)_debugGAXDescription;
-(void)setBackboardMessageQueue:(AXAccessQueue *)arg1 ;
-(char)allowsAutolock;
-(void)setSpringboardOverrideHandler:(GAXSpringBoardOverrideHandler *)arg1 ;
-(void)_handleDeviceWasLockedNotification:(id)arg1 ;
-(char)allowsTouch;
-(char)isInactive;
-(void)_handleDidShowTripleClickAlertNotification:(id)arg1 ;
-(void)setApplicationLaunchingQueue:(AXAccessQueue *)arg1 ;
-(void)setSpringboardServer:(AXIPCServer *)arg1 ;
-(void)_handleDidShowVoiceOverItemChooserNotification:(id)arg1 ;
-(void)_handleAXSpringBoardServerDidInit:(id)arg1 ;
-(void)_extendAXSpringServerInstanceIfExists:(id)arg1 ;
-(AXIPCServer *)springboardServer;
-(void)_updateStateOfHostedApplicationWithIdentifier:(id)arg1 scaleFactor:(float)arg2 center:(CGPoint)arg3 animationDuration:(double)arg4 ;
-(void)setDidEndRequiringWallpaperCheckTimer:(AXTimer *)arg1 ;
-(GAXSpringBoardOverrideHandler *)springboardOverrideHandler;
-(void)setFrontmostAppIdentifier:(NSString *)arg1 ;
-(void)setLockScreenDisableAssertion:(SBUILockScreenDisableAssertion *)arg1 ;
-(id)_gaxHandleFrontmostAppDidCheckIn:(id)arg1 ;
-(id)_handleServerModeTransitionDidComplete:(id)arg1 ;
-(id)_handleIsWebApplicationAndForegroundRunning:(id)arg1 ;
-(id)_handleIsSystemAppHostingFacetimeCall:(id)arg1 ;
-(id)_handlePrepareTransitionToWorkspace:(id)arg1 ;
-(id)_handleUpdateGAXBackboardState:(id)arg1 ;
-(id)_handleLaunchApplication:(id)arg1 ;
-(id)_handleEndRequiringWallpaper:(id)arg1 ;
-(id)_handleUpdateHostedApplicationState:(id)arg1 ;
-(id)_handleUnlockDevice:(id)arg1 ;
-(id)applicationContextHostManager;
-(UIView *)hostedApplicationView;
-(UIWindow *)hostedApplicationWindow;
-(char)_shouldDisableClipsToBoundsOnUniqueSubviewOfHostedApplicationViewForApplicationWithIdentifier:(id)arg1 ;
-(void)setShouldRevertClipsToBoundsOnUniqueSubviewOfHostedApplicationView:(char)arg1 ;
-(void)setApplicationContextHostManager:(id)arg1 ;
-(void)setHostedApplicationView:(UIView *)arg1 ;
-(void)setHostedApplicationWindow:(UIWindow *)arg1 ;
-(char)shouldRevertClipsToBoundsOnUniqueSubviewOfHostedApplicationView;
-(void)_prepareTransitionToWorkspaceWithCompletionHandler:(/*^block*/id)arg1 ;
-(AXTimer *)didEndRequiringWallpaperCheckTimer;
-(char)isRequiringWallpaper;
-(void)setRequiringWallpaper:(char)arg1 ;
-(SBUILockScreenDisableAssertion *)lockScreenDisableAssertion;
-(void)_releaseLockScreenDisableAssertion;
-(void)_acquireLockScreenDisableAssertion;
-(char)_applicationWithIdentifierIsWebApplicationAndForegroundRunning:(id)arg1 ;
-(AXAccessQueue *)applicationLaunchingQueue;
-(char)_sendReplayableMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 replyMessage:(id*)arg3 description:(id)arg4 error:(id*)arg5 ;
-(AXAccessQueue *)backboardMessageQueue;
-(NSString *)frontmostAppIdentifier;
-(char)allowsLockButton;
-(void)notifyBackboardSBMiniAlertIsShowing:(char)arg1 ;
-(unsigned)profileConfiguration;
-(void)notifyBackboardShowingWhitelistedLockscreenUI:(char)arg1 withIdentifier:(id)arg2 ;
-(void)notifyBackboardLockscreenUIIsShowing:(char)arg1 ;
-(void)deviceWasUnlocked;
-(void)notifyBackboardIsMakingEmergencyCall:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(char)isActive;
-(char)isEnabled;
@end
