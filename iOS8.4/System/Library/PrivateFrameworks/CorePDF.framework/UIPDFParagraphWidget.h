/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <UIKit/UIPDFSelectionWidget.h>

@class UIPDFPageView, CAShapeLayer, CALayer;

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget> {

	CAShapeLayer* _trackingBorder;
	CGRect _initialRect;
	BOOL _tracking;
	CGRect _currentTrackingRect;
	CALayer* _leftGrabber;
	CALayer* _rightGrabber;
	CALayer* _topGrabber;
	CALayer* _bottomGrabber;
	CALayer* _selectedGrabber;
	CGRect _boundsInPDFSpace;
	UIPDFPageView* _pageView;
	CGPoint _initialSelectionPointOnPage;

}

@property (assign,nonatomic) UIPDFPageView * pageView;                           //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,readonly) CGPoint initialSelectionPointOnPage;              //@synthesize initialSelectionPointOnPage=_initialSelectionPointOnPage - In the implementation block
@property (nonatomic,readonly) CGPoint currentSelectionPointOnPage; 
-(void)hide;
-(void)dealloc;
-(id)init;
-(void)layout;
-(void)setSelection:(id)arg1 ;
-(void)remove;
-(UIPDFPageView *)pageView;
-(void)setSelectedGrabberPosition:(CGRect)arg1 ;
-(CGRect)adjustRect:(CGRect)arg1 toPoint:(CGPoint)arg2 ;
-(CGRect)selectionBoundsInEffectsSpace;
-(BOOL)hitTest:(CGPoint)arg1 fixedPoint:(CGPoint*)arg2 preceeds:(BOOL*)arg3 ;
-(CGPoint)selectedPointFor:(CGPoint)arg1 ;
-(CGPoint)viewOffset;
-(void)track:(CGPoint)arg1 ;
-(void)endTracking;
-(CGRect)selectionRectangle;
-(void)setSelectedGrabber:(unsigned long long)arg1 ;
-(CGPoint)initialSelectionPointOnPage;
-(CGPoint)currentSelectionPointOnPage;
-(void)setPageView:(UIPDFPageView *)arg1 ;
@end

