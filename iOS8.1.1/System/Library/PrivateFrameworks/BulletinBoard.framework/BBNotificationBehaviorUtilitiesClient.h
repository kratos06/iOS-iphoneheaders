/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBNotificationBehaviorUtilitiesClientProtocol.h>

@class NSXPCConnection, NSString;

@interface BBNotificationBehaviorUtilitiesClient : NSObject <BBNotificationBehaviorUtilitiesClientProtocol> {

	NSXPCConnection* _connection;
	/*^block*/id _filteringStateChangeHandler;
	/*^block*/id _activeBehaviorOverridesChangeHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2 ;
-(void)notificationPresentationFilteringChangedToEnabled:(BOOL)arg1 ;
-(void)setFilteringStateChangeHandler:(/*^block*/id)arg1 ;
-(void)setActiveBehaviorOverridesChangeHandler:(/*^block*/id)arg1 ;
-(void)shouldPresentNotificationOfType:(int)arg1 fromSender:(id)arg2 withHandler:(/*^block*/id)arg3 ;
@end
