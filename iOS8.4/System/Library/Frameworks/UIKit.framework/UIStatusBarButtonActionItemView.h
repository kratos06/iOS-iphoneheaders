/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarItemView.h>

@class UIButton;

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {

	UIButton* _button;
	UIButton* _externalButton;

}
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(long long)buttonType;
-(double)updateContentsAndWidth;
-(void)_pressButton:(id)arg1 ;
-(BOOL)usesAdvancedActions;
-(void)_doubleTapButton:(id)arg1 ;
-(void)_pressAndHoldButton:(id)arg1 ;
-(id)_createButton;
-(void)_triggerButtonWithAction:(long long)arg1 ;
@end

