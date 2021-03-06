/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Game Center/Game Center-Structs.h>
@class GKPlayer, GKScore;

@interface GKLeaderboardItem : NSObject {

	GKPlayer* _player;
	GKScore* _score;
	unsigned _totalScores;

}

@property (retain) GKPlayer * player;                           //@synthesize player=_player - In the implementation block
@property (retain) GKScore * score;                             //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned totalScores;              //@synthesize totalScores=_totalScores - In the implementation block
-(unsigned)totalScores;
-(void)setTotalScores:(unsigned)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_gkViewDebuggingChildKeys;
-(GKScore *)score;
-(void)setScore:(GKScore *)arg1 ;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
@end

