/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface AccountPSOutgoingController : PSListController {

	PSSpecifier* _newOutgoingAccountSpecifier;

}
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)_getStatusForServer:(id)arg1 ;
-(id)specifierForDeliveryAccount:(id)arg1 isPrimary:(BOOL)arg2 isCarrierAccount:(BOOL)arg3 ;
-(void)reloadOutgoingAccounts;
-(void)canceledAccountSetup;
-(void)finishedAccountSetup;
-(id)specifiers;
@end

