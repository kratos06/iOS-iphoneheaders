/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:41:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccountUI/AAUIBleachedNavigationController.h>
#import <AppleAccountUI/AAUIConfirmIdentityViewControllerDelegate.h>
#import <AppleAccountUI/RemoteUIControllerDelegate.h>

@class ACAccount, ACAccountStore, AAGrandSlamSigner, AAFamilyInvite, RemoteUIController, NSOperationQueue, NSMutableURLRequest, NSString;

@interface AAUIFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController <AAUIConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAGrandSlamSigner* _grandSlamSigner;
	AAFamilyInvite* _invite;
	RemoteUIController* _remoteUIController;
	NSOperationQueue* _inviteOperationQueue;
	NSMutableURLRequest* _startRemoteUIRequest;
	NSMutableURLRequest* _currentRemoteUIRequest;

}

@property (assign,nonatomic,__weak) id<AAUIFamilyInvitationAcceptanceDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)confirmIdentityViewController:(id)arg1 didCompleteWithSuccess:(char)arg2 ;
-(id)_createCancelButton;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(void)_sendUserToiTunesSettings;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(char)arg3 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)_loadiTunesLinkingRemoteUI;
-(void)_showErrorAlert;
-(id)initWithInvite:(id)arg1 grandSlamSigner:(id)arg2 ;
@end
