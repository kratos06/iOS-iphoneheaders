/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol VOTAppLauncherDelegate;
@class NSMutableString, NSArray, NSMutableArray, VOTLaunchableApp, NSString;

@interface VOTAppLauncher : NSObject {

	int _launchContext;
	id<VOTAppLauncherDelegate> _delegate;
	NSMutableString* _appNamePrefix;
	NSArray* _allInstalledApps;
	NSMutableArray* _filteredApps;
	VOTLaunchableApp* _focusedApp;

}

@property (nonatomic,readonly) NSString * focusedAppName; 
@property (nonatomic,readonly) unsigned long long filteredAppsCount; 
@property (assign,nonatomic) id<VOTAppLauncherDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int launchContext;                                   //@synthesize launchContext=_launchContext - In the implementation block
@property (nonatomic,retain) NSMutableString * appNamePrefix;                     //@synthesize appNamePrefix=_appNamePrefix - In the implementation block
@property (nonatomic,retain) NSArray * allInstalledApps;                          //@synthesize allInstalledApps=_allInstalledApps - In the implementation block
@property (nonatomic,retain) NSMutableArray * filteredApps;                       //@synthesize filteredApps=_filteredApps - In the implementation block
@property (nonatomic,retain) VOTLaunchableApp * focusedApp;                       //@synthesize focusedApp=_focusedApp - In the implementation block
-(id)initWithDelegate:(id)arg1 launchContext:(int)arg2 ;
-(void)updateMatchingAppsWithPrefix:(id)arg1 ;
-(void)focusOnNextMatchingApp;
-(void)focusOnPreviousMatchingApp;
-(void)launchFocusedApp;
-(void)setLaunchContext:(int)arg1 ;
-(void)_updateAllInstalledApps;
-(NSArray *)allInstalledApps;
-(void)setFilteredApps:(NSMutableArray *)arg1 ;
-(void)setAppNamePrefix:(NSMutableString *)arg1 ;
-(void)setAllInstalledApps:(NSArray *)arg1 ;
-(void)setFocusedApp:(VOTLaunchableApp *)arg1 ;
-(VOTLaunchableApp *)focusedApp;
-(NSMutableArray *)filteredApps;
-(void)_focusOnAppInDirection:(BOOL)arg1 ;
-(NSMutableString *)appNamePrefix;
-(void)_updateFilteredAppsWithPrefix:(id)arg1 reevaluateFromAllAllApps:(BOOL)arg2 ;
-(unsigned long long)filteredAppsCount;
-(int)launchContext;
-(NSString *)focusedAppName;
-(void)dealloc;
-(void)setDelegate:(id<VOTAppLauncherDelegate>)arg1 ;
-(id<VOTAppLauncherDelegate>)delegate;
@end

