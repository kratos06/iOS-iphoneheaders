/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsTrainer/SportsTrainer-Structs.h>
#import <UIKit/UIView.h>
#import <SportsTrainer/STAnimatableButtonSliceDelegate.h>

@class UIImage, STShadowLabel, UIColor, STAnimatableButtonSlice;

@interface STAnimatableButton : UIView <STAnimatableButtonSliceDelegate> {

	UIImage* _image;
	UIImage* _normalImage;
	UIImage* _highlightedImage;
	STShadowLabel* _titleLabel;
	STShadowLabel* _subtitleLabel;
	id _target;
	SEL _action;
	bool _isLandscape;
	bool _touchInside;
	bool _slicesNeedDisplay;
	UIColor* _shadowColor;
	double _shadowBlurRadius;
	UIEdgeInsets _hitRectEdgeInsets;
	STAnimatableButtonSlice* _leftSlice;
	STAnimatableButtonSlice* _middleSlice;
	STAnimatableButtonSlice* _rightSlice;

}

@property (assign,nonatomic) UIEdgeInsets hitRectEdgeInsets;              //@synthesize hitRectEdgeInsets=_hitRectEdgeInsets - In the implementation block
-(void)drawImageForSlice;
-(void)setHitRectEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitRectEdgeInsets;
-(id)_buttonWellLandscapeImage;
-(id)_buttonWellImage;
-(void)setFrame:(CGRect)arg1 animated:(bool)arg2 ;
-(void)setNormalBackgroundImage:(id)arg1 ;
-(void)setHighlightedBackgroundImage:(id)arg1 ;
-(void)setShadowColor:(id)arg1 blurRadius:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(void)setSubtitle:(id)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setLandscape:(bool)arg1 ;
@end

