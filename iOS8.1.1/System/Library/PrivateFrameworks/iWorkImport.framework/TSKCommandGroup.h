/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCommand.h>
#import <iWorkImport/TSKInnerCommandsProvider.h>
#import <iWorkImport/TSDPropagatableCommand.h>

@class NSMutableArray, NSMutableIndexSet, NSString, NSArray;

@interface TSKCommandGroup : TSKCommand <TSKInnerCommandsProvider, TSDPropagatableCommand> {

	NSMutableArray* _commands;
	NSMutableIndexSet* _processResults;
	NSMutableArray* _committedCommands;
	NSString* _actionString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isEmpty; 
@property (readonly) NSArray * commands;                            //@synthesize commands=_commands - In the implementation block
-(BOOL)modifiesAnyObjectPassingTest:(/*^block*/id)arg1 ;
-(void)populateChangePropagationMapAfterCommit:(id)arg1 ;
-(BOOL)shouldBePropagated;
-(void)populateChangePropagationMapBeforeCommit:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(CommandGroupArchive*)arg1 archiver:(id)arg2 ;
-(void)addCommand:(id)arg1 ;
-(void)loadFromArchive:(const CommandGroupArchive*)arg1 unarchiver:(id)arg2 ;
-(id)i_uncommittedCommands;
-(void)i_commitRemainingCommands;
-(void)setCommandController:(id)arg1 ;
-(BOOL)shouldRunSynchronously;
-(id)i_removeCommittedCommandAtIndex:(unsigned long long)arg1 ;
-(void)i_addCommittedCommand:(id)arg1 ;
-(const CommandGroupArchive*)commandGroupArchiveFromUnarchiver:(id)arg1 ;
-(void)addCommandIfNotNil:(id)arg1 ;
-(void)addCommandsFromArray:(id)arg1 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(BOOL)isEmpty;
-(void)commit;
-(id)initWithContext:(id)arg1 ;
-(NSArray *)commands;
-(BOOL)process;
-(id)actionString;
-(void)setActionString:(id)arg1 ;
@end
