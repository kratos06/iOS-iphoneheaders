/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKUserTrackingButtonTarget, MKUserTrackingView;
@class UIImageView, UIButton, UIActivityIndicatorView;

@interface _MKUserTrackingButtonController : NSObject {

	id<MKUserTrackingButtonTarget> _target;
	id<MKUserTrackingView> _userTrackingView;
	long long _state;
	UIImageView* _imageView;
	UIButton* _button;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) id<MKUserTrackingView> userTrackingView;              //@synthesize userTrackingView=_userTrackingView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long state;                                      //@synthesize state=_state - In the implementation block
-(void)_goToNextMode:(id)arg1 ;
-(id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4 ;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id<MKUserTrackingView>)userTrackingView;
-(void)setUserTrackingView:(id<MKUserTrackingView>)arg1 ;
-(void)_authorizationStatusChanged:(id)arg1 ;
-(BOOL)_shouldAnimateFromState:(long long)arg1 toState:(long long)arg2 ;
-(id)_shrinkAnimation;
-(id)_contentAnimation;
-(void)_reloadState;
-(void)_updateLoading;
-(id)_expandAnimation;
-(id)_activityIndicatorView;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(UIImageView *)imageView;
-(void)_updateState;
@end
