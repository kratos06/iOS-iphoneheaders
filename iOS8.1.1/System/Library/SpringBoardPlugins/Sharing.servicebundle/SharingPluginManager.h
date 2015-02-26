/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SpringBoardPlugins/Sharing.servicebundle/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/SBBulletinAlertHandler.h>
#import <Sharing/SBControlCenterObserver.h>
#import <Sharing/SFAlertItemDelegate.h>
#import <Sharing/SBPluginBundleController.h>

@class NSMutableDictionary, NSString;

@interface SharingPluginManager : NSObject <SBBulletinAlertHandler, SBControlCenterObserver, SFAlertItemDelegate, SBPluginBundleController> {

	NSMutableDictionary* _recordIDToAlertItem;
	BOOL _screenDimmed;
	BOOL _lookingForEvent;
	BOOL _deviceUnlocked;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)awakeFromBundle;
-(void)alertItemDidDismiss:(id)arg1 ;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
-(void)controlCenterWillPresent;
-(void)dealloc;
-(id)init;
-(void)reset;
-(BOOL)bindBulletin:(id)arg1 forRegistry:(id)arg2 ;
-(void)handleEvent:(int)arg1 withBulletin:(id)arg2 forRegistry:(id)arg3 ;
@end
