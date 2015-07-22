/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:52:23 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class WatchDogTimer;

@interface AutoSync : CHSynchronizedLoggable {

	BOOL _alreadyWaiting;
	unsigned _syncWindowSeconds;
	unsigned _syncIntervalSeconds;
	WatchDogTimer* _watchDog;

}
-(void)handleTransactionAdded:(id)arg1 ;
-(void)handleTransactionAdded_sync:(id)arg1 withUpdate:(id)arg2 ;
-(void)fireSyncNotification;
-(void)startWatchDogTimer;
-(char)canWeSync;
-(id)getSyncHistory;
-(void)updateSyncHistory:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flush;
-(void)registerForNotifications;
@end
