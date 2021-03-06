/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:41:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccountUI/RUIObjectModelDelegate.h>

@protocol AAUIGenericTermsRemoteUIDelegate;
@class UINavigationController, UIViewController, RUILoader, NSMutableArray, ACAccount, ACAccountStore, UIAlertView, NSString;

@interface AAUIGenericTermsRemoteUI : NSObject <RUIObjectModelDelegate> {

	UINavigationController* _parentNavController;
	UIViewController* _originatingViewController;
	UINavigationController* _genericTermsUIViewController;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	char _isModal;
	UIAlertView* _tcConfirmationAlert;
	NSString* _agreeURL;
	id<AAUIGenericTermsRemoteUIDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIGenericTermsRemoteUIDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 inStore:(id)arg2 ;
-(void)presentFromViewController:(id)arg1 modal:(char)arg2 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<AAUIGenericTermsRemoteUIDelegate>)arg1 ;
-(id<AAUIGenericTermsRemoteUIDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_displayConnectionErrorAndDismiss;
-(void)_cleanUpAndDismissWithSuccess:(char)arg1 ;
-(void)_cleanupRUILoader;
-(void)_popObjectModelAnimated:(char)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(unsigned)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
@end

