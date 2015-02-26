/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <WebUI/WBSCloudHistorySyncThrottlerDataStore.h>

@protocol OS_dispatch_queue, NSObject;
@class NSObject, WBSCloudHistorySyncThrottler, NSTimer, NSMutableDictionary, NSString;

@interface WBSCloudHistory : NSObject <WBSCloudHistorySyncThrottlerDataStore> {

	NSObject*<OS_dispatch_queue> _cloudHistoryQueue;
	BOOL _cloudHistoryEnabled;
	BOOL _saveChangesWhenHistoryLoads;
	BOOL _fetchChangesWhenHistoryLoads;
	id<NSObject> _historyWasLoadedObserver;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _saveOperationSuddenTerminationDisabler;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _fetchOperationSuddenTerminationDisabler;
	BOOL _removedHistoryItemsArePendingSave;
	WBSCloudHistorySyncThrottler* _saveChangesThrottler;
	WBSCloudHistorySyncThrottler* _fetchChangesThrottler;
	WBSCloudHistorySyncThrottler* _syncCircleSizeRetrievalThrottler;
	NSTimer* _serverBackoffTimer;
	BOOL _saveChangesWhenBackoffTimerFires;
	BOOL _fetchChangesWhenBackoffTimerFires;
	unsigned long long _numberOfDevicesInSyncCircle;
	NSMutableDictionary* _syncCircleSizeRetrievalCompletionHandlersByOperation;

}

@property (assign,getter=isCloudHistoryEnabled,nonatomic) BOOL cloudHistoryEnabled; 
@property (assign,nonatomic) unsigned long long numberOfDevicesInSyncCircle;                     //@synthesize numberOfDevicesInSyncCircle=_numberOfDevicesInSyncCircle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCloudHistory;
-(void)dealloc;
-(id)init;
-(id)currentSaveChangesThrottlerPolicyString;
-(id)_currentFetchChangesThrottlerPolicyString;
-(id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
-(void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(/*^block*/id)arg1 ;
-(void)_cloudHistoryConfigurationChanged:(id)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_saveChangesToCloudHistoryStoreBypassingThrottler:(BOOL)arg1 ;
-(void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(BOOL)arg1 ;
-(BOOL)isCloudHistoryEnabled;
-(void)_saveChangesWhenHistoryLoads;
-(void)_determineNumberOfDevicesInSyncCircleForOperation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)_backoffTimeIntervalFromError:(id)arg1 ;
-(void)_backOffWithInterval:(double)arg1 ;
-(void)_saveVisits:(id)arg1 tombstones:(id)arg2 toCloudHistoryBypassingThrottler:(BOOL)arg3 withCallback:(/*^block*/id)arg4 ;
-(long long)_priorityForSaveWithVisits:(id)arg1 tombstones:(id)arg2 bypassingThrottler:(BOOL)arg3 ;
-(long long)_resultFromError:(id)arg1 ;
-(long long)_estimatedPriorityForPotentialSaveAttempt;
-(void)_fetchAndMergeChangesBypassingThrottler:(BOOL)arg1 ;
-(void)_fetchChangesWhenHistoryLoads;
-(void)fetchAndMergeChanges;
-(void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg1 intoHistory:(id)arg2 withPriority:(long long)arg3 ;
-(unsigned long long)_cachedNumberOfDevicesInSyncCircle;
-(void)setNumberOfDevicesInSyncCircle:(unsigned long long)arg1 ;
-(void)_registerForHistoryWasLoadedNotificationIfNecessary;
-(void)_historyWasLoaded:(id)arg1 ;
-(void)saveChangesToCloudHistoryStore;
-(void)_serverBackoffTimerFired:(id)arg1 ;
-(void)_updateFetchThrottlerAndSaveThrottlerPolicies;
-(void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1 ;
-(id)recordOfPastOperationsForThrottler:(id)arg1 ;
-(void)setRecordOfPastOperations:(id)arg1 forThrottler:(id)arg2 ;
-(void)setCloudHistoryEnabled:(BOOL)arg1 ;
-(void)saveChangesToCloudHistoryStoreBypassingThrottler;
-(id)dateOfNextPermittedSaveChangesAttempt;
-(void)fetchAndMergeChangesBypassingThrottler;
-(unsigned long long)numberOfDevicesInSyncCircle;
@end
