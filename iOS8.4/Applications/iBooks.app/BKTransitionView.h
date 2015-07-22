/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol BKTransitionViewDelegate;
@class UIViewController, UIView, IMViewControllerTransitionContext, NSString;

@interface BKTransitionView : UIView <UIViewControllerAnimatedTransitioning> {

	UIViewController* _fromViewController;
	UIViewController* _toViewController;
	id<BKTransitionViewDelegate> _delegate;
	char _ignoringInteractionEvents;
	UIView* _backgroundView;
	IMViewControllerTransitionContext* _transitionContext;
	UIView* _toViewSnapshot;

}

@property (nonatomic,retain) UIViewController * fromViewController;                              //@synthesize fromViewController=_fromViewController - In the implementation block
@property (nonatomic,retain) UIViewController * toViewController;                                //@synthesize toViewController=_toViewController - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) id<BKTransitionViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) IMViewControllerTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,retain) UIView * toViewSnapshot;                                            //@synthesize toViewSnapshot=_toViewSnapshot - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didCancelInteractiveTransition;
-(void)postInteractionAnimationsDidFinishWithContext:(id)arg1 ;
-(void)takeSnapshotAndPerformBlock:(/*^block*/id)arg1 ;
-(void)transitionDidFinish;
-(UIView *)toViewSnapshot;
-(void)beginSecondHalfTransition;
-(char)shouldSnapshotToView;
-(void)setToViewSnapshot:(UIView *)arg1 ;
-(void)beginTransition;
-(void)setFromViewController:(UIViewController *)arg1 ;
-(void)setToViewController:(UIViewController *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<BKTransitionViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(id<BKTransitionViewDelegate>)delegate;
-(void)setTransitionContext:(IMViewControllerTransitionContext *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(IMViewControllerTransitionContext *)transitionContext;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(UIViewController *)fromViewController;
-(UIViewController *)toViewController;
-(void)prepareForTransition;
@end
