/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:26 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBAppSwitcherIconControllerDelegate <NSObject>
@required
-(void)switcherIconScroller:(id)arg1 contentOffsetChanged:(float)arg2;
-(void)switcherIconScroller:(id)arg1 activate:(id)arg2;
-(char)switcherIconScroller:(id)arg1 shouldHideIconForDisplayLayout:(id)arg2;
-(void)switcherIconScrollerBeganPanning:(id)arg1;
-(unsigned)switcherIconScroller:(id)arg1 settledIndexForNormalizedOffset:(inout float*)arg2 andXVelocity:(float)arg3;
-(void)switcherIconScrollerDidEndScrolling:(id)arg1;

@end

