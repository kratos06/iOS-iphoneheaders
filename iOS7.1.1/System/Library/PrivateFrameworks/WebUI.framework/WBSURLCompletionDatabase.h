/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface WBSURLCompletionDatabase : NSObject {

	void* _private;

}
-(void)dealloc;
-(id)init;
-(id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 ;
-(void)enumerateMatchDataForTypedStringHint:(id)arg1 withBlock:(/*^block*/ id)arg2 ;
-(void)getBestMatchesForTypedString:(id)arg1 topHits:(id*)arg2 matches:(id*)arg3 limit:(unsigned long long)arg4 ;
-(void)clearBookmarkMatchesCachesKeepingEmptyValues:(bool)arg1 ;
-(void)clearBookmarkMatchesCaches;
-(void)clearMatchesCaches;
@end
