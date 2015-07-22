/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class PSSpecifier, NSArray, NSString, UIAlertView;

@interface VPNController : PSListController <UIAlertViewDelegate> {

	PSSpecifier* _statusSpecifier;
	PSSpecifier* _switchSpecifier;
	PSSpecifier* _vpnListSeparatorGroupSpecifier;
	PSSpecifier* _otherVPNSpecifier;
	NSArray* _cancelSpecifiers;
	NSString* _activeVPNServiceID;
	PSSpecifier* _activeVPNSpecifier;
	UIAlertView* _alert;
	unsigned long long _vpnServiceCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(id)_connection;
-(id)vpnActiveForSpecifier:(id)arg1 ;
-(void)_setCancelButtonVisible:(BOOL)arg1 ;
-(void)_updateVPNSwitchStatus:(BOOL)arg1 ;
-(id)statusForConnection:(id)arg1 ;
-(void)_vpnStatusChanged:(id)arg1 ;
-(void)_timerUpdated:(id)arg1 ;
-(void)_vpnConfigurationChanged:(id)arg1 ;
-(void)setVPNActive:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_setVPNActive:(BOOL)arg1 ;
-(void)confirmAirplaneModeDisable:(id)arg1 ;
-(void)cancelAirplaneModeDisable:(id)arg1 ;
-(void)cancelConnection:(id)arg1 ;
-(void)_setActiveVPNServiceID:(id)arg1 ;
-(void)changeActiveVPN:(id)arg1 ;
-(id)serverForConnection:(id)arg1 ;
-(id)usernameForConnection:(id)arg1 ;
-(id)typeForConnection:(id)arg1 ;
-(id)localIPForSpecifier:(id)arg1 ;
-(id)remoteIPForSpecifier:(id)arg1 ;
-(id)timeConnectedForSpecifier:(id)arg1 ;
-(void)activateVPN:(id)arg1 ;
-(void)updateVPNConfigurationsList;
-(id)specifiers;
-(void)formSheetViewWillDisappear;
-(void)willBecomeActive;
-(void)showStatus:(id)arg1 ;
@end
