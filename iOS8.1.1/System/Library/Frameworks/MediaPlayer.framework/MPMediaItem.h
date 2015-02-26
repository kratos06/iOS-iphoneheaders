/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaEntity.h>

@class NSString, MPMediaItemArtwork, NSDate, NSURL, NSArray;

@interface MPMediaItem : MPMediaEntity

@property (nonatomic,readonly) BOOL mediaTypeCanSeedGenius; 
@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * albumTitle; 
@property (nonatomic,readonly) unsigned long long albumPersistentID; 
@property (nonatomic,readonly) NSString * artist; 
@property (nonatomic,readonly) unsigned long long artistPersistentID; 
@property (nonatomic,readonly) NSString * albumArtist; 
@property (nonatomic,readonly) unsigned long long albumArtistPersistentID; 
@property (nonatomic,readonly) NSString * genre; 
@property (nonatomic,readonly) unsigned long long genrePersistentID; 
@property (nonatomic,readonly) NSString * composer; 
@property (nonatomic,readonly) unsigned long long composerPersistentID; 
@property (nonatomic,readonly) double playbackDuration; 
@property (nonatomic,readonly) unsigned long long albumTrackNumber; 
@property (nonatomic,readonly) unsigned long long albumTrackCount; 
@property (nonatomic,readonly) unsigned long long discNumber; 
@property (nonatomic,readonly) unsigned long long discCount; 
@property (nonatomic,readonly) MPMediaItemArtwork * artwork; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (getter=isCompilation,nonatomic,readonly) BOOL compilation; 
@property (nonatomic,readonly) NSDate * releaseDate; 
@property (nonatomic,readonly) unsigned long long beatsPerMinute; 
@property (nonatomic,readonly) NSString * comments; 
@property (nonatomic,readonly) NSURL * assetURL; 
@property (getter=isCloudItem,nonatomic,readonly) BOOL cloudItem; 
@property (nonatomic,readonly) NSString * podcastTitle; 
@property (nonatomic,readonly) unsigned long long podcastPersistentID; 
@property (nonatomic,readonly) unsigned long long playCount; 
@property (nonatomic,readonly) unsigned long long skipCount; 
@property (nonatomic,readonly) unsigned long long rating; 
@property (nonatomic,copy) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) NSString * userGrouping; 
@property (nonatomic,readonly) double bookmarkTime; 
@property (nonatomic,readonly) BOOL isRental; 
@property (nonatomic,readonly) BOOL isITunesU; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double stopTime; 
@property (nonatomic,readonly) unsigned long long year; 
@property (assign,nonatomic) unsigned long long skipCountSinceSync; 
@property (assign,nonatomic) unsigned long long playCountSinceSync; 
@property (nonatomic,copy) NSDate * lastSkippedDate; 
@property (nonatomic,copy) NSDate * dateAccessed; 
@property (assign,nonatomic) BOOL hasBeenPlayed; 
@property (nonatomic,readonly) BOOL rememberBookmarkTime; 
@property (nonatomic,readonly) double effectiveStopTime; 
@property (nonatomic,readonly) NSString * effectiveAlbumArtist; 
@property (nonatomic,readonly) BOOL isUsableAsRepresentativeItem; 
@property (nonatomic,readonly) NSArray * chapters; 
+(id)propertyForSAMPSearchProperty:(id)arg1 ;
+(id)SAMPSearchPropertyForProperty:(id)arg1 ;
+(id)MPSD_mediaItemPropertiesForDownloadability;
+(id)artworkCatalogCacheProperties;
+(id)screenshotArtworkCatalogCacheProperties;
+(void)_createFilterableDictionary;
+(BOOL)canFilterByProperty:(id)arg1 ;
+(id)persistentIDPropertyForGroupingType:(long long)arg1 ;
+(BOOL)_isValidItemProperty:(id)arg1 ;
+(id)titlePropertyForGroupingType:(long long)arg1 ;
+(id)fallbackTitlePropertyForGroupingType:(long long)arg1 ;
+(id)dynamicProperties;
-(id)MPU_libraryLinkKind;
-(id)MPU_libraryLinkArtist;
-(id)MPU_libraryLinkPlaylistName;
-(id)MPU_libraryLinkURL:(BOOL)arg1 ;
-(id)MPU_containerLibraryLinkURL;
-(id)MPU_directStoreURL;
-(id)MPU_libraryLinkURL;
-(id)SAMPMediaEntityRepresentationUsingIdentifierType:(long long)arg1 ;
-(id)identifierURLScheme;
-(id)SAMPMediaItemRepresentationUsingIdentifierType:(long long)arg1 ;
-(BOOL)MPSD_isDownloadable;
-(BOOL)MPSD_isDownloadInProgress;
-(BOOL)mediaTypeCanSeedGenius;
-(id)artworkCatalog;
-(id)screenshotArtworkCatalog;
-(void)setRating:(unsigned long long)arg1 ;
-(NSString *)albumArtist;
-(unsigned long long)albumTrackNumber;
-(unsigned long long)albumTrackCount;
-(unsigned long long)discCount;
-(BOOL)isCloudItem;
-(double)bookmarkTime;
-(BOOL)isITunesU;
-(id)chapterOfType:(long long)arg1 atTime:(double)arg2 ;
-(id)initWithMultiverseIdentifier:(id)arg1 ;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(unsigned long long)rating;
-(id)_directStoreURL;
-(id)_libraryLinkURL;
-(double)playbackDuration;
-(id)chaptersOfType:(long long)arg1 ;
-(id)_libraryLinkKind;
-(id)_libraryLinkArtist;
-(id)_libraryLinkPlaylistName;
-(Class)itemArrayCoderPIDDataCodingClass;
-(id)valuesForProperties:(id)arg1 ;
-(BOOL)didSkipWithPlayedToTime:(double)arg1 ;
-(void)markNominalAmountHasBeenPlayed;
-(void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2 ;
-(void)incrementSkipCount;
-(void)incrementPlayCountForPlayingToEnd;
-(BOOL)incrementPlayCountForStopTime:(double)arg1 ;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(/*^block*/id)arg1 ;
-(id)_bestStoreURL;
-(NSString *)effectiveAlbumArtist;
-(unsigned long long)albumPersistentID;
-(unsigned long long)albumArtistPersistentID;
-(unsigned long long)artistPersistentID;
-(MPMediaItemArtwork *)artwork;
-(unsigned long long)composerPersistentID;
-(unsigned long long)genrePersistentID;
-(BOOL)isRental;
-(BOOL)isCompilation;
-(double)effectiveStopTime;
-(NSString *)podcastTitle;
-(unsigned long long)podcastPersistentID;
-(NSDate *)releaseDate;
-(id)predicateForProperty:(id)arg1 ;
-(unsigned long long)playCount;
-(void)setPlayCount:(unsigned long long)arg1 ;
-(unsigned long long)playCountSinceSync;
-(void)setPlayCountSinceSync:(unsigned long long)arg1 ;
-(NSDate *)lastPlayedDate;
-(void)setLastPlayedDate:(NSDate *)arg1 ;
-(NSDate *)dateAccessed;
-(void)setDateAccessed:(NSDate *)arg1 ;
-(unsigned long long)skipCount;
-(void)setSkipCount:(unsigned long long)arg1 ;
-(unsigned long long)skipCountSinceSync;
-(void)setSkipCountSinceSync:(unsigned long long)arg1 ;
-(NSDate *)lastSkippedDate;
-(void)setLastSkippedDate:(NSDate *)arg1 ;
-(BOOL)hasBeenPlayed;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(BOOL)rememberBookmarkTime;
-(NSString *)userGrouping;
-(id)chapterOfType:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)countOfChaptersOfType:(long long)arg1 ;
-(void)gaplessHeuristicInfo:(unsigned*)arg1 durationInSamples:(unsigned long long*)arg2 lastPacketsResync:(unsigned long long*)arg3 encodingDelay:(unsigned*)arg4 encodingDrain:(unsigned*)arg5 ;
-(BOOL)isUsableAsRepresentativeItem;
-(NSString *)albumTitle;
-(id)representativeItem;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)didReceiveMemoryWarning;
-(NSString *)title;
-(id)valueForProperty:(id)arg1 ;
-(unsigned long long)year;
-(double)startTime;
-(NSString *)comments;
-(NSString *)artist;
-(NSString *)composer;
-(NSString *)genre;
-(unsigned long long)discNumber;
-(NSString *)lyrics;
-(BOOL)existsInLibrary;
-(double)stopTime;
-(unsigned long long)beatsPerMinute;
-(NSArray *)chapters;
-(void)populateLocationPropertiesWithPath:(id)arg1 ;
-(id)multiverseIdentifier;
-(NSURL *)assetURL;
-(unsigned long long)mediaType;
@end
