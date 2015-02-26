/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationZoomDownAppToHome.h>

@class SBLockScreenViewController, SBLockToAppStatusBarAnimator, SBIconAnimator;

@interface SBUIAnimationZoomDownLockScreenToHome : SBUIAnimationZoomDownAppToHome {

	SBLockScreenViewController* _lockScreenViewController;
	SBLockToAppStatusBarAnimator* _statusBarAnimator;
	SBIconAnimator* _iconAnimator;

}
-(void)_prepareAnimation;
-(void)prepareZoom;
-(void)animateZoomWithCompletion:(/*^block*/ id)arg1 ;
-(void)cleanupZoom;
-(id)initWithLockScreenViewController:(id)arg1 ;
-(BOOL)_shouldTakeActivationAssertionForDeactivatingApp;
-(void)dealloc;
@end
