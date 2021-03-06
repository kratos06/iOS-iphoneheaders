/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:57 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/MCAction.h>

@class NSMutableArray, NSArray;

@interface MCActionGroup : MCAction {

	NSMutableArray* _actions;

}

@property (nonatomic,readonly) NSArray * actions;                    //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) unsigned countOfActions; 
+(id)actionGroup;
-(id)init;
-(id)description;
-(NSArray *)actions;
-(void)removeAllActions;
-(void)addAction:(id)arg1 ;
-(void)addActions:(id)arg1 ;
-(id)imprint;
-(void)insertActions:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeActionsAtIndices:(id)arg1 ;
-(void)insertAction:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)demolish;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(unsigned)countOfActions;
-(id)actionAtIndex:(unsigned)arg1 ;
-(void)moveActionsAtIndices:(id)arg1 toIndex:(unsigned)arg2 ;
@end

