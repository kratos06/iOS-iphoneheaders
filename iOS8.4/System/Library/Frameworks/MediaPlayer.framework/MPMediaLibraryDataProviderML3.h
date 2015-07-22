/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaLibraryDataProviderPrivate.h>

@protocol OS_dispatch_queue, MPArtworkDataSource;
@class NSString, NSArray, NSObject, ML3MusicLibrary, MPMediaEntityCache, NSSet;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate> {

	NSObject*<OS_dispatch_queue> _backgroundTaskQueue;
	unsigned long long _backgroundTask;
	unsigned long long _backgroundTaskCount;
	BOOL _hasScheduledEventPosting;
	int _refreshState;
	NSString* _uniqueIdentifier;
	ML3MusicLibrary* _library;
	MPMediaEntityCache* _entityCache;
	id<MPArtworkDataSource> _artworkDataSource;

}

@property (nonatomic,retain) ML3MusicLibrary * library;                                                    //@synthesize library=_library - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) MPMediaEntityCache * entityCache;                                           //@synthesize entityCache=_entityCache - In the implementation block
@property (nonatomic,readonly) id<MPArtworkDataSource> artworkDataSource;                                  //@synthesize artworkDataSource=_artworkDataSource - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthentication; 
@property (nonatomic,readonly) NSSet * propertiesToCache; 
@property (nonatomic,readonly) NSString * syncValidity; 
@property (nonatomic,readonly) NSString * databasePath; 
@property (nonatomic,readonly) long long playbackHistoryPlaylistPersistentID; 
@property (nonatomic,readonly) BOOL isGeniusEnabled; 
@property (nonatomic,readonly) NSArray * preferredAudioLanguages; 
@property (nonatomic,readonly) NSArray * preferredSubtitleLanguages; 
@property (nonatomic,readonly) id<MPArtworkDataSource> completeMyCollectionArtworkDataSource; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
@property (nonatomic,readonly) BOOL companionDeviceActiveStoreAccountIsDynamiteEligible; 
+(id)_unadjustedValueForMPProperty:(id)arg1 withDefaultValue:(id)arg2 ;
+(id)_unadjustedValueForItemTimeWithDefaultValue:(id)arg1 ;
+(id)_unadjustedValueForItemDateWithDefaultValue:(id)arg1 ;
+(id)_unadjustedValueForItemPropertyRatingWithDefaultValue:(id)arg1 ;
+(id)_unadjustedValueForItemPropertyVolumeAdjustmentWithDefaultValue:(id)arg1 ;
+(id)_unadjustedValueForItemPropertyVolumeNormalizationWithDefaultValue:(id)arg1 ;
-(NSArray *)preferredAudioLanguages;
-(NSArray *)preferredSubtitleLanguages;
-(id<MPArtworkDataSource>)artworkDataSource;
-(void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performStoreItemLibraryImport:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4 ;
-(BOOL)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(BOOL)itemExistsWithPersistentID:(unsigned long long)arg1 ;
-(BOOL)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 ;
-(void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(/*^block*/id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(/*^block*/id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2 ;
-(id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1 ;
-(id)initWithLibrary:(id)arg1 ;
-(unsigned long long)currentEntityRevision;
-(long long)playlistGeneration;
-(BOOL)writable;
-(BOOL)hasMediaOfType:(unsigned long long)arg1 ;
-(BOOL)hasGeniusMixes;
-(BOOL)hasUbiquitousBookmarkableItems;
-(BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1 ;
-(long long)itemPersistentIDForStoreID:(long long)arg1 ;
-(long long)playbackHistoryPlaylistPersistentID;
-(long long)addPlaylistWithValuesForProperties:(id)arg1 ;
-(BOOL)deleteItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)removePlaylistWithIdentifier:(long long)arg1 ;
-(void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 ;
-(void)clearLocationPropertiesOfItemWithIdentifier:(long long)arg1 ;
-(void)performReadTransactionWithBlock:(/*^block*/id)arg1 ;
-(NSString *)syncValidity;
-(MPMediaEntityCache *)entityCache;
-(BOOL)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(id)itemResultSetForQueryCriteria:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(/*^block*/id)arg2 ;
-(id)collectionResultSetForQueryCriteria:(id)arg1 ;
-(void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2 ;
-(void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2 ;
-(void)setLibraryPublicEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2 ;
-(void)setLibraryPublicContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2 ;
-(void)addPlaylistStoreItemsForLookupItems:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addTracksToMyLibrary:(id)arg1 ;
-(void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 inUsersLibrary:(BOOL)arg3 itemBlock:(/*^block*/id)arg4 collectionBlock:(/*^block*/id)arg5 ;
-(void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addItemsWithIdentifiers:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeItemsWithIdentifiers:(id)arg1 atFilteredIndexes:(id)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1 ;
-(void)removeFirstItemFromPlaylistWithIdentifier:(long long)arg1 ;
-(void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_libraryContentsDidChange:(id)arg1 ;
-(void)_dynamicPropertiesDidChange:(id)arg1 ;
-(void)_invisiblePropertiesDidChange:(id)arg1 ;
-(void)_displayValuesDidChange:(id)arg1 ;
-(void)_syncGenerationDidChange:(id)arg1 ;
-(void)_libraryUIDDidChange:(id)arg1 ;
-(void)_libraryCloudLibraryAvailabilityDidChange:(id)arg1 ;
-(void)_postEvents;
-(void)performBackgroundTaskWithBlock:(/*^block*/id)arg1 ;
-(void)_importStoreItemElements:(id)arg1 andAddTracksToCloudLibrary:(BOOL)arg2 usingCloudAdamID:(long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_addGlobalPlaylistToLibraryDatabase:(id)arg1 asLibraryOwned:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3 ;
-(void)_loadValueForAggregateFunction:(id)arg1 entityClass:(Class)arg2 property:(id)arg3 query:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_loadProperties:(id)arg1 ofEntityWithIdentifier:(long long)arg2 ML3EntityClass:(Class)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)ML3SystemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 subscriptionFilteringOptions:(long long)arg3 additionalFilterPredicates:(id)arg4 ;
-(id)systemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 subscriptionFilteringOptions:(long long)arg3 ;
-(id)_adjustedItemPropertyAssetURLOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemTimeOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyChapterArtworkTimesOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyChaptersOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyContentRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemDateOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyEpisodeNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyEQPresetOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyFilePathOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedPropertyMediaTypeOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyMovieInfoOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertySeasonNameOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertySeasonNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyVerifiedIntegrityOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyVolumeAdjustmentOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyVolumeNormalizationOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedPlaylistPropertySeedItemsOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(BOOL)_dataProviderSupportsEntityChangeTracking;
-(void)_coalesceEvents;
-(BOOL)_removeEntitiesWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 entityClass:(Class)arg3 ;
-(void)dealloc;
-(NSString *)name;
-(NSString *)uniqueIdentifier;
-(ML3MusicLibrary *)library;
-(void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5 ;
-(BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5 ;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCurrentThreadInTransaction;
-(void)setLibrary:(ML3MusicLibrary *)arg1 ;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(unsigned long long)syncGenerationID;
-(NSArray *)localizedSectionIndexTitles;
-(BOOL)companionDeviceActiveStoreAccountIsDynamiteEligible;
-(id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1 ;
-(NSString *)databasePath;
-(id)lastModifiedDate;
@end
