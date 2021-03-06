/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/FacebookAccountMigrationDialog.app/FacebookAccountMigrationDialog
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SLFacebookMigrationPasswordViewControllerDelegate;
@class UITableViewCell, UIActivityIndicatorView, NSTimer, NSString;

@interface SLFacebookMigrationPasswordViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableViewCell* _signInButton;
	BOOL _validationInProgress;
	UIActivityIndicatorView* _progressIndicator;
	NSTimer* _idleJiggleTimer;
	void* _powerAssertion;
	<SLFacebookMigrationPasswordViewControllerDelegate>* _delegate;
	NSString* _username;
	NSString* _password;

}

@property (assign,nonatomic,__weak) <SLFacebookMigrationPasswordViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * username;                                                                //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * password;                                                              //@synthesize password=_password - In the implementation block
-(void)passwordWasVerified;
-(void)presentErrorMessage:(id)arg1 ;
-(void)_passwordFieldChanged:(id)arg1 ;
-(void)_signInTapped;
-(void)_unfreezeUI;
-(void)_showUserNotificationWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_freezeUI;
-(void)_setCellsChecked:(BOOL)arg1 ;
-(void)_layoutProgressIndicator;
-(void)_jiggleIdleTimer;
-(id)password;
-(void)_cancelTapped:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_preventSleepAndDimming:(BOOL)arg1 ;
-(void)setUsername:(id)arg1 ;
-(id)username;
-(void).cxx_destruct;
@end

