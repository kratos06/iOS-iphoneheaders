/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class IMAccount, FTRegConnectionHandler;

@interface CNFInternalAccountViewController : PSListController {

	IMAccount* _account;
	FTRegConnectionHandler* _connectionHandler;

}

@property (nonatomic,retain) IMAccount * account;              //@synthesize account=_account - In the implementation block
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)bundle;
-(id)statusForAlias:(id)arg1 ;
-(void)_startListeningForNotifications;
-(BOOL)isConnectedToDaemon;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleAccountNotification:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(id)specifierForAlias:(id)arg1 ;
-(id)accountLoginStatus:(id)arg1 ;
-(id)registrationStatus:(id)arg1 ;
-(id)accountLogin:(id)arg1 ;
-(id)accountType:(id)arg1 ;
-(id)accountDisplayName:(id)arg1 ;
-(id)registrationFailureReason:(id)arg1 ;
-(id)accountIsActive:(id)arg1 ;
-(id)account;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(id)specifiers;
@end

