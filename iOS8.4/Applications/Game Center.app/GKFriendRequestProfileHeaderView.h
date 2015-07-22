/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/GKPlayerProfileHeaderView.h>

@class GKHorizontalBubbleControlsView, GKTextBubbleControl;

@interface GKFriendRequestProfileHeaderView : GKPlayerProfileHeaderView {

	GKHorizontalBubbleControlsView* _bubblesContainerView;
	GKTextBubbleControl* _acceptBubble;
	GKTextBubbleControl* _ignoreBubble;

}

@property (nonatomic,retain) GKHorizontalBubbleControlsView * bubblesContainerView;              //@synthesize bubblesContainerView=_bubblesContainerView - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * acceptBubble;                                 //@synthesize acceptBubble=_acceptBubble - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * ignoreBubble;                                 //@synthesize ignoreBubble=_ignoreBubble - In the implementation block
-(void)pushRightBubble;
-(void)pushLeftBubble;
-(void)updatePlayerStatus;
-(GKTextBubbleControl *)acceptBubble;
-(GKTextBubbleControl *)ignoreBubble;
-(GKHorizontalBubbleControlsView *)bubblesContainerView;
-(void)establishViews;
-(id)viewAtBottomEdge;
-(void)setBubblesContainerView:(GKHorizontalBubbleControlsView *)arg1 ;
-(void)setAcceptBubble:(GKTextBubbleControl *)arg1 ;
-(void)setIgnoreBubble:(GKTextBubbleControl *)arg1 ;
-(void)dealloc;
@end
