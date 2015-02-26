/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPRangeArray;

@interface TSWPDeletionRangeMap : NSObject {

	unsigned long long _subRangeStart;
	TSWPRangeArray* _removedRanges;

}
-(id)initWithSubRange:(NSRange)arg1 removeRanges:(id)arg2 ;
-(id)inverseRangesInStorageRange:(NSRange)arg1 ;
-(NSRange)mappedCharRange:(NSRange)arg1 ;
-(unsigned long long)unmappedCharIndex:(unsigned long long)arg1 ;
-(NSRange)unmappedCharRange:(NSRange)arg1 ;
-(unsigned long long)mappedCharIndex:(unsigned long long)arg1 ;
-(void)adjustByDelta:(long long)arg1 ;
-(BOOL)containsCharIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end
