/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol HSCloudServerProtocol
@required
-(void)setConnectionConfiguration:(id)arg1 daemonConfiguration:(unsigned long long)arg2 preferredVideoQuality:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(void)updateJaliscoLibraryWithReason:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)updateJaliscoAppsLibraryWithReason:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)updateSagaLibraryWithReason:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)authenticateAndStartInitialImport:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)deauthenticateWithCompletion:(/*^block*/id)arg1;
-(void)removeJaliscoLibraryWithCompletion:(/*^block*/id)arg1;
-(void)isAuthenticatedWithCompletion:(/*^block*/id)arg1;
-(void)isExpiredWithCompletion:(/*^block*/id)arg1;
-(void)loadIsUpdateInProgressWithCompletion:(/*^block*/id)arg1;
-(void)loadUpdateProgressWithCompletion:(/*^block*/id)arg1;
-(void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)importItemArtworkForSagaID:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)loadArtworkDataForPurchaseHistoryIDs:(id)arg1 returnArtworkData:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)loadArtworkDataForSagaID:(unsigned long long)arg1 returnArtworkData:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)loadArtworkInfoForSagaIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)downloadGeniusDataWithCompletion:(/*^block*/id)arg1;
-(void)addGeniusPlaylistWithName:(id)arg1 seedItemSagaIDs:(id)arg2 itemSagaIDs:(id)arg3 completion:(/*^block*/id)arg4;
-(void)addPlaylistWithName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updatePlaylistWithSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removePlaylistWithSagaID:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)uploadItemPropertiesWithCompletion:(/*^block*/id)arg1;
-(void)searchJaliscoAppsLibrary:(id)arg1 location:(id)arg2 searchColumns:(id)arg3 includeHidden:(BOOL)arg4 includeUnsupported:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(void)jaliscoAppsImageDataForStoreID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)redownloadPurchaseAppWithStoreID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setHidden:(BOOL)arg1 purchasedAppWithStoreID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)unhideAllPurchasedAppsWithCompletion:(/*^block*/id)arg1;
-(void)updateJaliscoAppsLibraryForFamilyStoreID:(id)arg1 withReason:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)updateArtistHeroImagesWithCompletion:(/*^block*/id)arg1;
-(void)setKeepLocal:(BOOL)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)fetchKeepLocalForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)loadIsJaliscoGeniusSupportedWithCompletion:(/*^block*/id)arg1;
-(void)loadJaliscoGeniusLearnMoreURLWithCompletion:(/*^block*/id)arg1;
-(void)loadJaliscoGeniusCUIDWithCompletion:(/*^block*/id)arg1;
-(void)setJaliscoGeniusCUID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)enableJaliscoGeniusWithCompletion:(/*^block*/id)arg1;
-(void)updateJaliscoGeniusDataWithCompletion:(/*^block*/id)arg1;
-(void)cancelUpdateJaliscoGeniusDataWithCompletion:(/*^block*/id)arg1;
-(void)loadJaliscoGeniusOperationStatusWithCompletion:(/*^block*/id)arg1;
-(void)disableJaliscoGeniusWithCompletion:(/*^block*/id)arg1;
-(void)hasProperNetworkConditionsToPlayMediaWithCompletion:(/*^block*/id)arg1;
-(void)isCellularDataRestrictedWithCompletion:(/*^block*/id)arg1;
-(void)shouldProhibitActionsForCurrentNetworkConditionsWithCompletion:(/*^block*/id)arg1;
-(void)canShowCloudDownloadButtonsWithCompletion:(/*^block*/id)arg1;
-(void)canShowCloudMusicWithCompletion:(/*^block*/id)arg1;
-(void)canShowCloudVideoWithCompletion:(/*^block*/id)arg1;
-(void)loadBooksForStoreIDs:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end
