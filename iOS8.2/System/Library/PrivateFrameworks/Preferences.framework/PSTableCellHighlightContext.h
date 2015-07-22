/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer, UITableViewCell;

@interface PSTableCellHighlightContext : NSObject {

	NSTimer* _timer;
	char _animateUnhighlight;
	char _valid;
	UITableViewCell* _cell;
	int _originalSelectionStyle;

}

@property (assign,nonatomic) UITableViewCell * cell;                  //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) char animateUnhighlight;               //@synthesize animateUnhighlight=_animateUnhighlight - In the implementation block
@property (assign,nonatomic) int originalSelectionStyle;              //@synthesize originalSelectionStyle=_originalSelectionStyle - In the implementation block
@property (nonatomic,readonly) char valid;                            //@synthesize valid=_valid - In the implementation block
+(id)contextWithCell:(id)arg1 ;
-(void)_killTimer;
-(void)dealloc;
-(void)invalidate;
-(UITableViewCell *)cell;
-(char)valid;
-(void)setCell:(UITableViewCell *)arg1 ;
-(void)_timerFired;
-(void)performHighlightForDuration:(double)arg1 animateUnhighlight:(char)arg2 ;
-(char)animateUnhighlight;
-(int)originalSelectionStyle;
-(void)setOriginalSelectionStyle:(int)arg1 ;
@end
