/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSTimer, MobileTimerSecureWindow, MobileTimerTabBarController, NSString, UIViewController;

@interface AppController : UIApplication <UIApplicationDelegate> {

	char _initializationPerformed;
	NSTimer* _userPreferencesCommitTimer;
	MobileTimerSecureWindow* _window;
	MobileTimerTabBarController* _tabBarController;
	NSString* _currentTestName;
	int _iterations;

}

@property (nonatomic,readonly) UIViewController * containerViewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(id)tintColor;
-(void)handleUserPreferencesChangedWithScheduledLocalNotificationsRefresh:(char)arg1 ;
-(void)handleLocalNotificationsChangedWithFullReload:(char)arg1 ;
-(void)initWindowAndViewControllers;
-(void)scheduleUserPreferencesCommit;
-(void)commitUserPreferences;
-(void)cancelScheduledUserPreferencesCommit;
-(UIViewController *)containerViewController;
-(void)resetInvalidAlarmsLogging;
-(id)copyInvalidAlarmsLog;
-(void)_selectViewController:(id)arg1 ;
-(void)_spinMainRunLoop;
-(void)_runRotationTest;
-(void)_didEnterFullScreenClock:(id)arg1 ;
-(void)_didExitFullScreenClock:(id)arg1 ;
-(void)_didPageWorldClock:(id)arg1 ;
-(void)_didPageFullScreenWorldClock:(id)arg1 ;
-(void)_runScrollTest:(id)arg1 ;
-(void)saveState;
-(void)dealloc;
-(void)startedTest:(id)arg1 ;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(char)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(char)runTest:(id)arg1 options:(id)arg2 ;
-(void)application:(id)arg1 didSnoozeLocalNotification:(id)arg2 ;
-(void)_windowDidRotate:(id)arg1 ;
-(id)invalidAlarmsDetected;
@end
