/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, CALayer, UIViewController, UIColor;

@interface IMFlipViewTransition : UIControl {

	CGRect _fromFrame;
	CGRect _toFrame;
	UIView* _startView;
	UIView* _endView;
	CALayer* _backgroundBlocker;
	UIViewController* _endViewController;
	CGPoint _startPosition;
	UIView* _rootView;
	float _transitionDuration;
	char _noShadow;
	id _delegate;
	UIColor* _backgroundViewColor;

}

@property (assign,nonatomic) float transitionDuration;                          //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) CGRect fromFrame;                                  //@synthesize fromFrame=_fromFrame - In the implementation block
@property (assign,nonatomic) CGRect toFrame;                                    //@synthesize toFrame=_toFrame - In the implementation block
@property (nonatomic,retain) UIView * startView;                                //@synthesize startView=_startView - In the implementation block
@property (nonatomic,retain) UIView * endView;                                  //@synthesize endView=_endView - In the implementation block
@property (nonatomic,retain) UIViewController * endViewController;              //@synthesize endViewController=_endViewController - In the implementation block
@property (assign,nonatomic) id delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char noShadow;                                     //@synthesize noShadow=_noShadow - In the implementation block
@property (nonatomic,retain) UIView * rootView;                                 //@synthesize rootView=_rootView - In the implementation block
@property (assign,nonatomic) CGPoint startPosition;                             //@synthesize startPosition=_startPosition - In the implementation block
@property (nonatomic,retain) UIColor * backgroundViewColor;                     //@synthesize backgroundViewColor=_backgroundViewColor - In the implementation block
-(id)startImage;
-(void)startOpenSecondHalf;
-(void)endOpenTransition;
-(void)startCloseSecondHalf;
-(void)endCloseTransition;
-(void)setBackgroundViewColor:(UIColor *)arg1 ;
-(UIViewController *)endViewController;
-(id)imageFromViewController:(id)arg1 ;
-(char)noShadow;
-(CGRect)fromFrame;
-(UIColor *)backgroundViewColor;
-(void)flipClosed;
-(id)endImage;
-(void)setEndViewController:(UIViewController *)arg1 ;
-(void)updateCenterPoint:(CGPoint)arg1 ;
-(void)flipOpen;
-(void)setFromFrame:(CGRect)arg1 ;
-(void)setNoShadow:(char)arg1 ;
-(void)setStartView:(UIView *)arg1 ;
-(void)setEndView:(UIView *)arg1 ;
-(UIView *)startView;
-(UIView *)endView;
-(UIView *)rootView;
-(void)setToFrame:(CGRect)arg1 ;
-(CGRect)toFrame;
-(void)setRootView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(float)transitionDuration;
-(CGPoint)startPosition;
-(void)setStartPosition:(CGPoint)arg1 ;
-(void)updateShadowPath;
-(void)setTransitionDuration:(float)arg1 ;
@end

