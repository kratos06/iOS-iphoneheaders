/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIView.h>

@class RCUIConfiguration, RCLayoutMetrics;

@interface RCAcousticAnnotationView : UIView {

	CGGradientRef _decibelMarkerBackgroundGradient;
	RCUIConfiguration* _UIConfiguration;
	RCLayoutMetrics* _layoutMetrics;
	float _gradientAlpha;

}

@property (nonatomic,copy) RCUIConfiguration * UIConfiguration;              //@synthesize UIConfiguration=_UIConfiguration - In the implementation block
@property (nonatomic,retain) RCLayoutMetrics * layoutMetrics;                //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (assign,nonatomic) float gradientAlpha;                            //@synthesize gradientAlpha=_gradientAlpha - In the implementation block
+(float)requiredWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setUIConfiguration:(RCUIConfiguration *)arg1 ;
-(void)setLayoutMetrics:(RCLayoutMetrics *)arg1 ;
-(RCUIConfiguration *)UIConfiguration;
-(RCLayoutMetrics *)layoutMetrics;
-(CGRect)annotationBoundaryRect;
-(void)setGradientAlpha:(float)arg1 ;
-(void)_reloadGradient;
-(id)_decibelMarkersAttributes;
-(id)_zeroMarkerAttributes;
-(float)gradientAlpha;
@end
