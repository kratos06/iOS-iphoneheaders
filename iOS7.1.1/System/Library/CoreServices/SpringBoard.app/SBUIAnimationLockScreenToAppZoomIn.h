/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:48 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlert, SBWindow, UIView, SBDisableAppStatusBarAlphaChangesAssertion;

@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController {

	SBAlert* _fromAlert;
	SBWindow* _transitionWindow;
	UIView* _viewToAnimate;
	UIView* _contextHostView;
	UIView* _fakeStatusBarViewContainer;
	int _launchingOrientation;
	BOOL _requiresHostView;
	BOOL _activateBeforeHosting;
	BOOL _fromAssistant;
	BOOL _finishedZooming;
	BOOL _finishedActivating;
	BOOL _finishedCrossfadingToHostView;
	SBDisableAppStatusBarAlphaChangesAssertion* _disableStatusBarAlphaChangeAssertion;

}
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(id)_animationProgressDependency;
-(BOOL)_animationShouldStart;
-(void)_applicationDependencyStateChanged;
-(void)_setupFakeStatusBarIfNecessary;
-(void)_doAnimation;
-(void)_showFakeStatusBarIfNecessary;
-(void)_finishedZooming;
-(void)_removeFakeStatusBarIfNecessary;
-(void)_maybeStartCrossfade;
-(void)_noteContextHostCrossfadeDidFinish;
-(void)_maybeReportAnimationFinished;
-(id)initWithActivatingApp:(id)arg1 fromAlert:(id)arg2 ;
-(BOOL)_shouldDismissBanner;
-(BOOL)isReasonableMomentToInterrupt;
-(void)dealloc;
-(void)_startAnimation;
-(void)_setHidden:(BOOL)arg1 ;
@end
