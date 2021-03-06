/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMagicMoveMatching.h>

@protocol TSDContainerRep, OS_dispatch_queue;
@class TSDCanvas, NSArray, TSDKnobTracker, CALayer, TSDTextureContext, NSDictionary, TSDLayout, TSDTextureSet, NSObject, TSDLayoutGeometry, TSDTilingBackgroundQueue, TSDInteractiveCanvasController;

@interface TSDRep : NSObject <TSDMagicMoveMatching> {

	TSDCanvas* mCanvas;
	TSDRep*<TSDContainerRep> mParentRep;
	NSArray* mKnobs;
	char mKnobPositionsInvalid;
	char mShowKnobsWhenManipulated;
	char mKnobsAreShowing;
	TSDKnobTracker* mKnobTracker;
	char mSelectionHighlightLayerValid;
	CALayer* mSelectionHighlightLayer;
	unsigned mTextureDeliveryStyle;
	int mTextureByGlyphStyle;
	TSDTextureContext* mTextureContext;
	unsigned mTextureStage;
	NSDictionary* mTextureActionAttributes;
	NSDictionary* mTextureAnimationInfo;
	char mShowTemporaryHighlight;
	CALayer* mTemporaryHighlightLayer;
	char mShowDragAndDropHighlight;
	CALayer* mDragAndDropHighlightLayer;
	TSDLayout* mTemporaryMixingLayout;
	TSDLayout* mLayout;
	TSDTextureSet* mTexture;
	NSObject*<OS_dispatch_queue> mTextureAccessQueue;
	CGColorRef mDefaultSelectionHighlightColor;
	TSDLayoutGeometry* mLastGeometryInRoot;
	CGRect mOriginalLayerFrameInScaledCanvas;
	TSDTilingBackgroundQueue* mTileQueue;
	long mTileQueueOnce;
	long mTileProviderQueueLock;
	NSObject*<OS_dispatch_queue> mTileProviderQueue;
	char mHasBeenRemoved;

}

@property (nonatomic,readonly) TSDLayout * layout; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (nonatomic,retain) TSDLayout * temporaryMixingLayout; 
@property (nonatomic,readonly) TSDInteractiveCanvasController * interactiveCanvasController; 
@property (assign,nonatomic) TSDRep*<TSDContainerRep> parentRep; 
@property (nonatomic,readonly) NSArray * knobs; 
@property (assign,nonatomic) TSDKnobTracker * currentKnobTracker; 
@property (assign,nonatomic) CGColorRef selectionHighlightColor; 
@property (retain) TSDTextureSet * texture; 
@property (nonatomic,copy) TSDTextureContext * textureContext; 
@property (assign,nonatomic) unsigned textureDeliveryStyle; 
@property (assign,nonatomic) int textureByGlyphStyle; 
@property (assign,nonatomic) unsigned textureStage; 
@property (assign,nonatomic) NSDictionary * textureActionAttributes; 
@property (nonatomic,retain) NSDictionary * textureAnimationInfo; 
@property (nonatomic,readonly) float textureAngle; 
@property (nonatomic,readonly) NSArray * hyperlinkRegions; 
@property (nonatomic,readonly) char isEditingPath; 
-(CGRect)naturalBounds;
-(NSArray *)hyperlinkRegions;
-(void)processChanges:(id)arg1 ;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(char)arg3 ;
-(CGPoint)convertNaturalPointToLayerRelative:(CGPoint)arg1 ;
-(CGPoint)convertNaturalPointFromUnscaledCanvas:(CGPoint)arg1 ;
-(void)willBeRemoved;
-(CGRect)convertNaturalRectFromUnscaledCanvas:(CGRect)arg1 ;
-(CGRect)convertNaturalRectToLayerRelative:(CGRect)arg1 ;
-(CGRect)frameInUnscaledCanvas;
-(void)willUpdateLayer:(id)arg1 ;
-(void)didUpdateLayer:(id)arg1 ;
-(CGRect)layerFrameInScaledCanvas;
-(void)computeDirectLayerFrame:(CGRect*)arg1 andTransform:(CGAffineTransform*)arg2 ;
-(char)isBeingResized;
-(void)recursivelyDrawInContext:(CGContextRef)arg1 ;
-(void)didDrawInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(void)becameSelected;
-(void)becameNotSelected;
-(char)shouldShowSelectionHighlight;
-(char)shouldShowKnobs;
-(void)dynamicDragDidBegin;
-(void)dynamicDragDidEnd;
-(void)beginDragInsertFromPalette;
-(void)endDragInsertFromPalette;
-(id)dynamicResizeDidBegin;
-(void)dynamicResizeDidEndWithTracker:(id)arg1 ;
-(void)viewScaleDidChange;
-(void)viewScrollDidChange;
-(void)viewScrollingEnded;
-(CGRect)boundsForStandardKnobs;
-(void)setTextureStage:(unsigned)arg1 ;
-(void)setTextureDeliveryStyle:(unsigned)arg1 ;
-(void)markTextureDirty;
-(unsigned)textureDeliveryStyle;
-(void)setTextureContext:(TSDTextureContext *)arg1 ;
-(void)updatePositionsOfKnobs:(id)arg1 ;
-(id)newTrackerForKnob:(id)arg1 ;
-(void)invalidateKnobPositions;
-(char)directlyManagesLayerContent;
-(char)mustDrawOnMainThreadForInteractiveCanvas;
-(char)canDrawInParallel;
-(char)shouldShowSizesInRulers;
-(char)shouldShowDragHUD;
-(void)setTextureAnimationInfo:(NSDictionary *)arg1 ;
-(id)textureForContext:(id)arg1 ;
-(void)updateFromLayout;
-(id)commandController;
-(id)overlayLayers;
-(void)setupForDrawingInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(char)isDrawingInFlippedContext;
-(CGRect)convertNaturalRectToUnscaledCanvas:(CGRect)arg1 ;
-(id)itemsToAddToEditMenu;
-(CGPoint)centerForRotation;
-(TSDLayout *)temporaryMixingLayout;
-(void)dynamicallyResizingWithTracker:(id)arg1 ;
-(int)dragTypeAtCanvasPoint:(CGPoint)arg1 ;
-(void)addKnobsToArray:(id)arg1 ;
-(void)invalidateKnobs;
-(void)setCurrentKnobTracker:(TSDKnobTracker *)arg1 ;
-(char)intersectsUnscaledRect:(CGRect)arg1 ;
-(char)shouldLayoutTilingLayer:(id)arg1 ;
-(CGRect)visibleBoundsForTilingLayer:(id)arg1 ;
-(TSDKnobTracker *)currentKnobTracker;
-(void)beginDrawingOperation;
-(CGRect)snapRectForDynamicDragWithOffset:(CGPoint)arg1 ;
-(id)additionalRectsForSnappingWithOffset:(CGPoint)arg1 ;
-(CGRect)targetRectForEditMenu;
-(unsigned)adjustedKnobForComputingResizeGeometry:(unsigned)arg1 ;
-(char)canEditWithEditor:(id)arg1 ;
-(void)endDrawingOperation;
-(void)processChangedProperty:(int)arg1 ;
-(NSDictionary *)textureAnimationInfo;
-(CGPoint)convertNaturalPointToUnscaledCanvas:(CGPoint)arg1 ;
-(CGAffineTransform)transformToConvertNaturalToLayerRelative;
-(char)isInDynamicOperation;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(char)directlyManagesVisibilityOfKnob:(id)arg1 ;
-(void)i_shutdownTileQueue;
-(void)recursivelyPerformSelector:(SEL)arg1 ;
-(TSDRep*<TSDContainerRep>)parentRep;
-(id)hitRep:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)hitRep:(CGPoint)arg1 ;
-(id)hitReps:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(NSArray *)knobs;
-(void)invalidateComments;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 ;
-(void)dynamicOperationDidEnd;
-(void)i_invalidateSelectionHighlightLayer;
-(id)repForSelecting;
-(id)parentRepToPerformSelecting;
-(char)isSelectedIgnoringLocking;
-(id)repForHandleSingleTap;
-(char)wantsToHandleTapsWhenLocked;
-(char)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(char)handleDoubleTapAtPoint:(CGPoint)arg1 ;
-(char)handleMultipleTapAtPoint:(CGPoint)arg1 ;
-(char)canDrawTilingLayerInBackground:(id)arg1 ;
-(id)i_tileQueue;
-(void)invalidateAnnotationColor;
-(void)i_willEnterForeground;
-(void)screenScaleDidChange;
-(char)canClipThemeContentToCanvas;
-(char)canDrawInBackgroundDuringScroll;
-(void)updateLayerGeometryFromLayout:(id)arg1 ;
-(id)additionalLayersUnderLayer;
-(char)repDirectlyManagesContentsScaleOfLayer:(id)arg1 ;
-(id)additionalLayersOverLayer;
-(id)popoutLayers;
-(CGRect)frameInUnscaledCanvasIncludingChrome;
-(char)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id*)arg2 andQueue:(id*)arg3 ;
-(void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2 ;
-(char)mustDrawTilingLayerOnMainThread:(id)arg1 ;
-(id)queueForDrawingTilingLayerInBackground:(id)arg1 ;
-(float)angleInRoot;
-(char)isBeingRotated;
-(char)isBeingDragged;
-(CGPoint)layerOffsetForDragging;
-(CGRect)i_layerFrameInScaledCanvasIgnoringDragging;
-(CGRect)i_originalLayerFrameInScaledCanvas;
-(CGAffineTransform)transformToConvertNaturalFromLayerRelative;
-(id)hitReps:(CGPoint)arg1 withSlopBlock:(/*^block*/id)arg2 ;
-(char)containsPoint:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(id)hitRepChrome:(CGPoint)arg1 ;
-(CGAffineTransform)layerTransformInRootForZeroAnchor;
-(CGRect)layerFrameInScaledCanvasRelativeToParent;
-(CGAffineTransform)layerTransform;
-(void)computeDirectLayerFrame:(CGRect*)arg1 andTransform:(CGAffineTransform*)arg2 basedOnTransform:(CGAffineTransform)arg3 andSize:(CGSize)arg4 ;
-(void)i_configureFontSmoothingForContext:(CGContextRef)arg1 layer:(id)arg2 ;
-(void)recursivelyDrawChildrenInContext:(CGContextRef)arg1 ;
-(char)shouldCreateKnobs;
-(unsigned long long)enabledKnobMask;
-(CGRect)trackingBoundsForStandardKnobs;
-(char)shouldCreateSelectionKnobs;
-(void)addSelectionKnobsToArray:(id)arg1 ;
-(char)shouldCreateLockedKnobs;
-(void)addLockedKnobsToArray:(id)arg1 ;
-(char)shouldCreateCommentKnob;
-(void)addCommentKnobToArray:(id)arg1 ;
-(char)shouldDisplayHyperlinkUI;
-(void)addHyperlinkKnobToArray:(id)arg1 ;
-(void)addActionGhostKnobToArrayIfNecessary:(id)arg1 ;
-(id)newSelectionKnobForType:(int)arg1 tag:(unsigned)arg2 ;
-(CGPoint)positionOfStandardKnob:(id)arg1 forBounds:(CGRect)arg2 ;
-(CGPoint)p_commentPoleTopPositionShouldDisplayDirectlyOverRep:(char)arg1 ;
-(CGPoint)positionOfHyperlinkKnob;
-(CGPoint)p_positionOfActionGhostKnobForBounds:(CGRect)arg1 ;
-(char)shouldShowCommentHighlight;
-(char)isEditingPath;
-(float)selectionHighlightWidth;
-(CGRect)boundsForHighlightLayer;
-(CGAffineTransform)transformForHighlightLayer;
-(CGPoint)convertKnobPositionToUnscaledCanvas:(CGPoint)arg1 ;
-(CGPoint)convertKnobPositionFromUnscaledCanvas:(CGPoint)arg1 ;
-(id)selectionHighlightLayer;
-(id)p_addLayersForKnobsToArray:(id)arg1 withDelegate:(id)arg2 isOverlay:(char)arg3 ;
-(void)p_dynamicOperationDidBegin;
-(void)p_dynamicOperationDidEnd;
-(id)connectedReps;
-(void)p_dynamicDragDidBegin;
-(char)allowDragDelegate;
-(char)allowResizeDelegate;
-(void)p_dynamicRotateDidBegin;
-(CGAffineTransform)unRotatedTransform:(CGAffineTransform)arg1 ;
-(void)setTextureAttributes:(id)arg1 ;
-(char)i_hasInteractiveCanvasController;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(void)i_willBeRemoved;
-(char)hasBeenRemoved;
-(void)addToSet:(id)arg1 ;
-(CGPathRef)newPathInScaledCanvasFromNaturalRect:(CGRect)arg1 ;
-(CGRect)frameInScreenSpace;
-(CGPoint)convertNaturalPointFromLayerRelative:(CGPoint)arg1 ;
-(CGRect)convertNaturalRectFromLayerRelative:(CGRect)arg1 ;
-(id)hitRepChrome:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(char)shouldExpandHitRegionWhenSmall;
-(float)shortestDistanceToPoint:(CGPoint)arg1 countAsHit:(char*)arg2 ;
-(id)repForDragging;
-(id)additionalRepsForDragging;
-(id)repForRotating;
-(void)updateChildrenFromLayout;
-(CGAffineTransform)parentLayerInverseTransformInRootForZeroAnchor;
-(void)antiAliasDefeatLayerTransform:(CGAffineTransform*)arg1 forFrame:(CGRect)arg2 ;
-(void)antiAliasDefeatLayerFrame:(CGRect*)arg1 forTransform:(CGAffineTransform)arg2 ;
-(void)computeDirectLayerFrame:(CGRect*)arg1 andTransform:(CGAffineTransform*)arg2 basedOnLayoutGeometry:(id)arg3 ;
-(id)colorBehindLayer:(id)arg1 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(char)canUseSpecializedHitRegionForKnob:(id)arg1 ;
-(char)forcesPlacementOnTop;
-(CGPoint)positionOfActionGhostKnob;
-(void)p_toggleCommentVisibility;
-(void)p_toggleHyperlinkUIVisibility;
-(void)p_actionGhostKnobHit;
-(id)knobForTag:(unsigned)arg1 ;
-(float)additionalRotationForKnobOrientation;
-(char)shouldShowCommentUIDirectlyOverRep;
-(CGPoint)unscaledActivityLineEndPointForEntry:(id)arg1 ;
-(void)showKnobsDuringManipulation:(char)arg1 ;
-(void)turnKnobsOn;
-(void)fadeKnobsIn;
-(void)fadeKnobsOut;
-(void)dynamicOperationDidBegin;
-(char)providesGuidesWhileAligning;
-(char)exclusivelyProvidesGuidesWhileAligning;
-(char)resetGuidesAfterDragAfterReset;
-(void)i_dynamicDragDidEnd;
-(CGPoint)i_dragOffset;
-(char)allowRotateDelegate;
-(char)demandsExclusiveSelection;
-(void)dynamicRotateDidBegin;
-(float)angleForRotation;
-(CGPoint)unscaledGuidePosition;
-(void)dynamicallyRotatingWithTracker:(id)arg1 ;
-(void)p_dynamicRotateDidEnd;
-(void)dynamicRotateDidEndWithTracker:(id)arg1 ;
-(id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2 ;
-(char)handleSingleTapAtPoint:(CGPoint)arg1 onKnob:(id)arg2 ;
-(char)handleDoubleTapAtPoint:(CGPoint)arg1 onKnob:(id)arg2 ;
-(char)wantsEditMenuForTapAtPoint:(CGPoint)arg1 onKnob:(id)arg2 ;
-(char)shouldIgnoreEditMenuTapAtPoint:(CGPoint)arg1 withRecognizer:(id)arg2 ;
-(char)shouldIgnoreSingleTapAtPoint:(CGPoint)arg1 withRecognizer:(id)arg2 ;
-(char)wantsToHandleTapsOnContainingGroup;
-(float)textureAngle;
-(void)setTextureByGlyphStyle:(int)arg1 ;
-(void)setTextureActionAttributes:(NSDictionary *)arg1 ;
-(id)allLayers;
-(int)dragHUDAndGuidesTypeAtCanvasPoint:(CGPoint)arg1 ;
-(char)handlesEditMenu;
-(id)resizedGeometryForTransform:(CGAffineTransform)arg1 ;
-(char)resizeFromCenterOnly;
-(id)infoForTransforming;
-(char)wantsGuidesWhileResizing;
-(CGRect)boundsForResizeGuideUI;
-(id)i_queueForTileProvider;
-(char)wantsToDistortWithImagerContext;
-(void)setTemporaryMixingLayout:(TSDLayout *)arg1 ;
-(void)setParentRep:(TSDRep*<TSDContainerRep>)arg1 ;
-(int)textureByGlyphStyle;
-(TSDTextureContext *)textureContext;
-(unsigned)textureStage;
-(NSDictionary *)textureActionAttributes;
-(void)willBeginEyedropperMode;
-(CGRect)i_partition_deepClipRect;
-(CGRect)clipRect;
-(void)dealloc;
-(void)setNeedsDisplay;
-(id)description;
-(char)isLocked;
-(char)containsPoint:(CGPoint)arg1 ;
-(char)isOpaque;
-(Class)layerClass;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(char)masksToBounds;
-(float)opacity;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(char)arg2 ;
-(char)isSelected;
-(TSDLayout *)layout;
-(id)beginEditing;
-(id)info;
-(CGColorRef)selectionHighlightColor;
-(void)setSelectionHighlightColor:(CGColorRef)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(char)isSelectable;
-(char)isPlaceholder;
-(TSDCanvas *)canvas;
-(TSDTextureSet *)texture;
-(char)isDraggable;
-(void)setTexture:(TSDTextureSet *)arg1 ;
-(int)tilingMode;
@end

