/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBSLocalNotificationClient : NSObject
+(unsigned)currentAllowedNotificationTypesForBundleID:(id)arg1 ;
+(id)currentUserNotificationSettings;
+(void)registerUserNotificationSettings:(id)arg1 ;
+(void)scheduleLocalNotification:(id)arg1 ;
+(void)cancelLocalNotification:(id)arg1 ;
+(void)cancelAllLocalNotifications;
+(void)setScheduledLocalNotifications:(id)arg1 ;
+(id)scheduledLocalNotifications;
+(void)migrateUserNotificationSettingsForBundleIdentifierPushSettingsPairs:(id)arg1 ;
+(void)scheduleLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 waitUntilDone:(BOOL)arg3 ;
+(void)cancelLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 waitUntilDone:(BOOL)arg3 ;
+(id)scheduledLocalNotificationsForBundleIdentifier:(id)arg1 ;
+(id)currentUserNotificationSettingsForBundleID:(id)arg1 ;
+(void)_scheduleLocalNotifications:(id)arg1 cancel:(BOOL)arg2 replace:(BOOL)arg3 optionalBundleIdentifier:(id)arg4 waitUntilDone:(BOOL)arg5 ;
+(void)_scheduleLocalNotifications:(id)arg1 cancel:(BOOL)arg2 replace:(BOOL)arg3 optionalBundleIdentifier:(id)arg4 ;
+(void)registerUserNotificationSettings:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)getPendingNotification;
+(void)scheduleLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 ;
+(void)cancelLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 ;
+(void)cancelAllLocalNotificationsForBundleIdentifier:(id)arg1 ;
+(void)setScheduledLocalNotifications:(id)arg1 bundleIdentifier:(id)arg2 ;
@end
