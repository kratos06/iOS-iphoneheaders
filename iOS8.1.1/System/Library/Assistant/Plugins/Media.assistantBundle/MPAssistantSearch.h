/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAMPSearch.h>
#import <Media/AFServiceCommand.h>

@class NSString;

@interface MPAssistantSearch : SAMPSearch <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_stationDictionaryForGenreName:(id)arg1 parent:(unsigned long long)arg2 ;
-(id)_perform;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)_stationWithName:(id)arg1 ;
-(id)_stationDictionaryForGenreName:(id)arg1 ;
-(id)_itemsByTitle:(id)arg1 mediaTypes:(long long)arg2 ;
-(id)_songCollectionsWithGroupingType:(long long)arg1 searchString:(id)arg2 mediaTypes:(long long)arg3 ;
-(id)_playlistsByName:(id)arg1 isGeniusMix:(BOOL)arg2 ;
-(id)_audiobooksByName:(id)arg1 ;
-(id)_stationDictionariesWithParent:(unsigned long long)arg1 ;
-(void)_prepare;
@end
