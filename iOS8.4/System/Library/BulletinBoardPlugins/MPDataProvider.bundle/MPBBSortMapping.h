/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/BulletinBoardPlugins/MPDataProvider.bundle/MPDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSString;

@interface MPBBSortMapping : NSObject {

	NSMutableArray* _recordIDsToSuppress;
	NSMutableDictionary* _bulletinRecordIDToSortIdentifier;
	NSString* _domain;

}

@property (nonatomic,retain) NSMutableArray * recordIDsToSuppress;                                //@synthesize recordIDsToSuppress=_recordIDsToSuppress - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bulletinRecordIDToSortIdentifier;              //@synthesize bulletinRecordIDToSortIdentifier=_bulletinRecordIDToSortIdentifier - In the implementation block
@property (readonly) NSString * domain;                                                           //@synthesize domain=_domain - In the implementation block
-(id)initForDomain:(id)arg1 ;
-(void)suppressBulletinsWithSortIdentifierLessThanOrEqualTo:(id)arg1 ;
-(void)flushCacheKeepingRecordIDs:(id)arg1 ;
-(BOOL)isBulletinSuppressedForRecordID:(id)arg1 ;
-(void)suppressBulletinForRecordID:(id)arg1 ;
-(NSMutableArray *)recordIDsToSuppress;
-(NSMutableDictionary *)bulletinRecordIDToSortIdentifier;
-(void)setBulletinRecordIDToSortIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setRecordIDsToSuppress:(NSMutableArray *)arg1 ;
-(void)_loadSortMappingFromPreferences;
-(void)_saveSortMappingToPreferences;
-(void)_suppressBulletinForRecordID:(id)arg1 saving:(BOOL)arg2 ;
-(void)dealloc;
-(NSString *)domain;
@end
