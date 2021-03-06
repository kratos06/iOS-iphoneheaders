/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/TencentWeiboSettings.bundle/TencentWeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/SLSettingsController.h>
#import <TencentWeiboSettings/TEAccountCreationDelegate.h>

@class ACAccountType, ACAccount, NSMutableDictionary, NSArray, PSSpecifier, SLNetworkReachabilityWarning, PSSetupController, NSString;

@interface TESettingsController : SLSettingsController <TEAccountCreationDelegate> {

	ACAccountType* _tencentWeiboAccountType;
	ACAccount* _signInAccount;
	ACAccount* _account;
	NSMutableDictionary* _authorizedAppList;
	NSArray* _accountStateDependentSpecifiers;
	NSArray* _authorizedAppListSpecifiers;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _updateContactsSpecifier;
	SLNetworkReachabilityWarning* _networkWarning;
	PSSetupController* _accountCreationContainerVC;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_specifierForAccount:(id)arg1 ;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_learnMoreLinkGroupSpecifier;
-(id)_loginSpecifiers;
-(id)_networkWarning;
-(id)_authorizedAppsListSpecifiers;
-(void)_setAppAllowedAccess:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isAppAllowedAccountAccessWithSpecifier:(id)arg1 ;
-(void)_learnMoreLinkButtonTapped:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_handleAccountAuthenticationWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_showAppDownloadAlert;
-(id)_noAccountsSpecifiers;
-(void)_signInButtonTapped:(id)arg1 ;
-(id)_tencentWeiboAccountType;
-(void)accountCreationController:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(id)_tencentWeiboApp;
-(void)_reloadAuthorizedAppList;
-(id)_accountListSpecifiers;
-(BOOL)_isTencentWeiboParentalRestrictionEnabled;
-(id)_createNewAccountButtonSpecifier;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)navigationItem;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(void)appInstallerWillStart:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_createNewAccountButtonTapped:(id)arg1 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(void)_updateSignInButton;
-(id)specifiers;
-(void)returnPressedAtEnd;
-(void)_accountStoreDidChange:(id)arg1 ;
@end

