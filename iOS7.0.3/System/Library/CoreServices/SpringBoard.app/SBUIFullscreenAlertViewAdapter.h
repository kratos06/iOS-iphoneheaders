/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBAlertViewAdapter.h>

@interface SBUIFullscreenAlertViewAdapter : SBAlertViewAdapter {

	BOOL _revealedContentBeneathForDismiss;
	BOOL _animatingOut;

}
-(void)alertDisplayWillBecomeVisible;
-(BOOL)isReadyToBeRemovedFromView;
-(BOOL)isAnimatingOut;
-(BOOL)shouldAnimateIconsIn;
-(void)viewAnimatedOut;
-(void)setAlert:(id)arg1 ;
-(id)alert;
-(void)dismiss;
-(void)setShouldAnimateIn:(BOOL)arg1 ;
-(void)updateSpringBoardInPreparationForTransparentDismiss;
@end
