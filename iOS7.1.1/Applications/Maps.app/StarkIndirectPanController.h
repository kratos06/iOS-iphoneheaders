/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>

@protocol StarkIndirectPanControllerDelegateStarkChromeModeController;
@class UIButton, StarkPanButtonContainer, UIView, MKMapView, UIDynamicAnimator, UIDynamicBehavior, UIPushBehavior, StarkIndirectPanDynamicItem;

@interface StarkIndirectPanController : NSObject <UIDynamicAnimatorDelegate> {

	UIButton* _panUpButton;
	UIButton* _panLeftButton;
	UIButton* _panRightButton;
	UIButton* _panDownButton;
	StarkPanButtonContainer* _panButtonContainer;
	BOOL _hasBegunMomentaryImpulseInDirection[4];
	UIView* _containingView;
	MKMapView* _mapView;
	CGPoint _initialPanPoint;
	BOOL _animating;
	UIDynamicAnimator* _animator;
	UIDynamicBehavior* _panBehavior;
	UIPushBehavior* _leftPush;
	UIPushBehavior* _rightPush;
	UIPushBehavior* _upPush;
	UIPushBehavior* _downPush;
	<StarkIndirectPanControllerDelegate><StarkChromeModeController>* _ownerChromeModeController;
	StarkIndirectPanDynamicItem* _item;

}

@property (assign,nonatomic,__weak) <StarkIndirectPanControllerDelegate><StarkChromeModeController> * ownerChromeModeController;              //@synthesize ownerChromeModeController=_ownerChromeModeController - In the implementation block
@property (nonatomic,retain) StarkIndirectPanDynamicItem * item;                                                                              //@synthesize item=_item - In the implementation block
-(void)layoutForUnobscuredBoundsChange;
-(void)setOwnerChromeModeController:(id)arg1 animation:(id)arg2 ;
-(id)ownerChromeModeController;
-(void)_endAnimatingIfNeeded;
-(void)_createViewsIfNeeded;
-(void)_beginImpulseUp;
-(void)_endImpulseUp;
-(void)_momentaryImpulseUp;
-(void)_beginImpulseLeft;
-(void)_endImpulseLeft;
-(void)_momentaryImpulseLeft;
-(void)_beginImpulseRight;
-(void)_endImpulseRight;
-(void)_momentaryImpulseRight;
-(void)_beginImpulseDown;
-(void)_endImpulseDown;
-(void)_momentaryImpulseDown;
-(void)_configureAnimator;
-(void)_beginImpulseInDirection:(int)arg1 withMagnitude:(float)arg2 ;
-(id)_behaviorForDirection:(int)arg1 ;
-(void)_setHasBegunMomentaryImpulse:(BOOL)arg1 inDirection:(int)arg2 ;
-(int)_actionForDirection:(int)arg1 ;
-(void)_setImpulseInDirection:(int)arg1 magnitude:(float)arg2 ;
-(void)_beginAnimatingIfNeeded;
-(BOOL)_hasBegunMomentaryImpulseInDirection:(int)arg1 ;
-(void)setOwnerChromeModeController:(id)arg1 ;
-(void)beginImpulseOfType:(int)arg1 inDirection:(int)arg2 ;
-(void)setItem:(id)arg1 ;
-(id)item;
-(void)dynamicAnimatorDidPause:(id)arg1 ;
-(void).cxx_destruct;
@end

