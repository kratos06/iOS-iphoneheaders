/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Notes/Notes-Structs.h>
@class NSMutableArray, NoteContext;

@interface NoteSearchContext : NSObject {

	CXQueryRef query;
	NSMutableArray* integerIds;
	NoteContext* noteContext;

}

@property (nonatomic,readonly) CXQueryRef query; 
-(void)dealloc;
-(CXQueryRef)query;
-(id)initWithSearchTerms:(id)arg1 context:(id)arg2 ;
-(char)nextSearchResults:(id*)arg1 includePrevious:(char)arg2 ;
@end
