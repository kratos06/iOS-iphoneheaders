/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/UsageBundles/MessagesUsagePreferencesPlugin.bundle/MessagesUsagePreferencesPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessagesUsagePreferencesPlugin/PSStorageReporting.h>

@class NSString;

@interface MessagesUsagePreferencesDelegate : NSObject <PSStorageReporting> {

	unsigned long long _totalSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(BOOL)allowDeletionForCategory:(id)arg1 ;
@end
