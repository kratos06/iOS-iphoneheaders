/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIView.h>

@protocol SBUIPasscodeLockView;
@class UIView, _UIBackdropView;

@interface SBUIPasscodeViewWithLockScreenStyle : UIView {

	UIView*<SBUIPasscodeLockView> _passcodeView;
	_UIBackdropView* _blurView;
	float _blurRadius;
	char _blurEnabled;

}

@property (nonatomic,readonly) UIView*<SBUIPasscodeLockView> passcodeView;              //@synthesize passcodeView=_passcodeView - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 includeBlur:(char)arg2 passcodeViewGenerator:(/*^block*/id)arg3 ;
-(void)setBlurEnabled:(char)arg1 ;
-(UIView*<SBUIPasscodeLockView>)passcodeView;
@end
