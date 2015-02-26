/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUPurchaseContinuation.h>
#import <MusicStoreUI/ABPeoplePickerNavigationControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIActionSheet, UIAlertView, ABPeoplePickerNavigationController, NSString;

@interface MSTonePurchaseContinuation : SUPurchaseContinuation <ABPeoplePickerNavigationControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {

	UIActionSheet* _actionSheet;
	UIAlertView* _alertView;
	ABPeoplePickerNavigationController* _peoplePicker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(void)actionSheetCancel:(id)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)start;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)_destroyActionSheet;
-(void)_destroyAlertView;
-(id)_copyAllowedToneStyles;
-(void)_pickAssigneeToneStyle;
-(void)_showPeoplePicker;
-(void)_dismissPeoplePicker;
-(id)initWithPurchase:(id)arg1 ;
@end
