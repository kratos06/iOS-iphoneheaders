/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:02:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, MarkerImageView, NSMutableArray;

@interface SBVoiceOverTouchRotorKnob : UIView {

	int _position;
	int _count;
	UIImage* _emptyMarkImage;
	UIImage* _selectedMarkImage;
	MarkerImageView* _knobImageView;
	BOOL _lastMovementWasForward;
	BOOL _lastMovementSkippedEmptySpace;
	BOOL _needsLayout;
	NSMutableArray* _markerImageViews;

}

@property (assign,nonatomic) int count;              //@synthesize count=_count - In the implementation block
-(void)_layoutKnob;
-(void)updatePosition:(BOOL)arg1 ;
-(void)_updateSelectedMarker;
-(CGPoint)_trackPointForPlacement:(float)arg1 ;
-(void)_layoutMarkerAtPosition:(CGPoint)arg1 withCircleLocation:(float)arg2 withImageView:(id)arg3 ;
-(void)_layoutTrackMarks:(int)arg1 placements:(double)arg2 ;
-(void)_layoutTrackMarks;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(int)count;
-(void)layoutSubviews;
-(void)setCount:(int)arg1 ;
-(void)reset;
@end

