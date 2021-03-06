/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MapKit/MKVariableDelayTapRecognizerDelegate.h>
#import <MapKit/MKAnnotationContainerViewDelegate.h>
#import <MapKit/VKMapViewDelegate.h>
#import <MapKit/MKMapGestureControllerDelegate.h>
#import <MapKit/MKAnnotationMarkerContainer.h>
#import <MapKit/MKAnnotationManagerDelegate.h>
#import <MapKit/GEOResourceManifestTileGroupObserver.h>
#import <MapKit/NSCoding.h>
#import <MapKit/VKPuckAnimatorDelegate.h>
#import <MapKit/MKOverlayContainerViewDelegate.h>

@protocol MKMapViewDelegateMKMapViewDelegatePrivate;
@class MKMapViewInternal, UIView, MKMapAnnotationManager, MKAnnotationContainerView, MKAttributionLabel, UIImageView, NSTimer, UILabel, _MKEnvironmentLabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIGestureRecognizer, MKMapGestureController, MKOverlayContainerView, MKBasicMapView, VKMapView, VKLabelMarker, MKScaleView, MKCompassView, MKUserLocation, VKPuckAnimator, MKMapCamera, UITextView, UIPanGestureRecognizer, NSArray, NSString, CLLocation, MKAnnotationView;

@interface MKMapView : UIView <UIGestureRecognizerDelegate, MKVariableDelayTapRecognizerDelegate, MKAnnotationContainerViewDelegate, VKMapViewDelegate, MKMapGestureControllerDelegate, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, GEOResourceManifestTileGroupObserver, NSCoding, VKPuckAnimatorDelegate, MKOverlayContainerViewDelegate> {

	MKMapViewInternal* _internal;
	UIView* _contentView;
	MKMapAnnotationManager* _annotationManager;
	MKAnnotationContainerView* _annotationContainer;
	MKAttributionLabel* _attributionLabel;
	/*^block*/id _annotationRectTest;
	/*^block*/id _annotationCoordinateTest;
	UIImageView* _attributionBadgeView;
	NSTimer* _startEffectsTimer;
	id<MKMapViewDelegate><MKMapViewDelegatePrivate> _safeDelegate;
	id<MKMapViewDelegate><MKMapViewDelegatePrivate> _unsafeDelegate;
	unsigned long long _suspendedEffectsCount;
	unsigned long long _userInteractionDisabledCount;
	unsigned long long _mapType;
	NSTimer* _defaultLocationTimer;
	UILabel* _debugView;
	NSTimer* _debugTimer;
	unsigned long long _debugViewIndex;
	_MKEnvironmentLabel* _debugCurrentEnvironmentLabel;
	double _heading;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapGestureRecognizer* _selectingTapGestureRecognizer;
	UITapGestureRecognizer* _nonselectingTapGestureRecognizer;
	UIGestureRecognizer* _locationConsoleGesture;
	MKMapGestureController* _gestureController;
	MKOverlayContainerView* _overlayContainer;
	long long _userTrackingMode;
	MKBasicMapView* _basicMapView;
	VKMapView* _mapView;
	VKLabelMarker* _pressedLabelMarker;
	MKScaleView* _scaleView;
	MKCompassView* _compassView;
	BOOL _scaleVisible;
	BOOL _compassVisible;
	NSTimer* _compassHideTimer;
	BOOL _scaleEnabled;
	BOOL _compassEnabled;
	UIView* _scrollContainerView;
	/*^block*/id _regionSetterWhenSized;
	MKUserLocation* _userLocation;
	VKPuckAnimator* _userLocationAnimator;
	MKMapCamera* _camera;
	id _topLayoutGuide;
	id _bottomLayoutGuide;
	/*^block*/id _showCalloutAfterRegionChangeBlock;
	/*^block*/id _selectAnnotationViewAfterRedrawBlock;
	/*^block*/id _debugConsoleAdditionalInfoProvider;
	UITextView* _vectorKitDebugView;
	UIEdgeInsets _edgeInsets;
	UIPanGestureRecognizer* _vectorKitStyleDebugGestureRecognizer;
	double _verticalYawOverride;
	struct {
		unsigned callsDelegateForAllRegionChanges : 1;
		unsigned changingRegion : 1;
		unsigned debugViewHeading : 1;
		unsigned didStartDragging : 1;
		unsigned draggingInterrupted : 1;
		unsigned didStartSmoothScrolling : 1;
		unsigned hasRenderedSomething : 1;
		unsigned ignoreHeadingUpdates : 1;
		unsigned ignoreLocationUpdates : 1;
		unsigned isSuspended : 1;
		unsigned longPressing : 1;
		unsigned persistFixedUserLocation : 1;
		unsigned regionChangeIsAnimated : 1;
		unsigned rotationSupported : 1;
		unsigned scrollEnabled : 1;
		unsigned scrolling : 1;
		unsigned shouldRotateForHeading : 1;
		unsigned useVehicleHeading : 1;
		unsigned showsUserLocation : 1;
		unsigned zoomEnabled : 1;
		unsigned zoomIsAnimated : 1;
		unsigned zooming : 1;
		unsigned isChangingViewSize : 1;
		unsigned isChangingEdgeInsets : 1;
		unsigned showsAttribution : 1;
		unsigned showsAttributionBadge : 1;
		unsigned useOld2DAnnotationContainer : 1;
		unsigned rotating : 1;
		unsigned pitching : 1;
		unsigned rotateEnabled : 1;
		unsigned pitchEnabled : 1;
		unsigned showsBuildings : 1;
		unsigned showsPointsOfInterest : 1;
		unsigned allowsRotation : 1;
		unsigned hasPendingCameraChange : 1;
		unsigned backdropViewQualityChangingDisabled : 1;
		unsigned canSelectPOIs : 1;
		unsigned canSelectAllLabels : 1;
		unsigned vectorKitConsoleEnabled : 1;
		unsigned edgeInsetsAreExplicit : 1;
		unsigned locationPropagationEnabled : 1;
		unsigned userInteractionPausesLocationUpdates : 1;
		unsigned locationPulseEnabled : 1;
		unsigned shouldSplitRouteLine : 1;
		unsigned shouldAnimatePositionWithRouteMatch : 1;
		unsigned showsCurrentEnvironmentName : 1;
		unsigned processingUserLocationUpdate : 1;
		unsigned changingMapType : 1;
		unsigned userRotatedAwayFromVerticalYaw : 1;
		unsigned goingToDefaultLocation : 1;
		unsigned delayLocationUpdatesUntilInitialRendering : 1;
		unsigned isDraggingAnnotationView : 1;
		unsigned showsPressedLabelMarkerEffect : 1;
		unsigned delegateShouldReceiveTouch : 1;
		unsigned delegateShouldDelayTapResponse : 1;
		unsigned delegateDidUpdateUserLocation : 1;
		unsigned delegateDidFailToLocateUser : 1;
		unsigned delegateWillChangeRegion : 1;
		unsigned delegateDidChangeRegion : 1;
		unsigned delegateDidStartMapRendering : 1;
		unsigned delegateDidFinishMapRendering : 1;
		unsigned delegateDidChangeUserTrackingMode : 1;
		unsigned delegateDidChangeUserTrackingModeButton : 1;
		unsigned delegateDidChangeMapType : 1;
	}  _flags;
	BOOL _hasSetLayoutMargins;
	unsigned long long _currentFlyoverAnimationID;

}

@property (getter=_visibleTileSets,nonatomic,readonly) NSArray * visibleTileSets; 
@property (getter=_detailedDescription,nonatomic,readonly) NSString * detailedDescription; 
@property (nonatomic,readonly) NSArray * overlays; 
@property (nonatomic,retain) CLLocation * predictedUserLocation; 
@property (assign,nonatomic) BOOL ignoreLocationUpdates; 
@property (nonatomic,retain,readonly) MKAnnotationView * userLocationView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MKMapViewDelegate> delegate; 
@property (assign,nonatomic) unsigned long long mapType; 
@property (assign,nonatomic) SCD_Struct_MK2 region; 
@property (assign,nonatomic) SCD_Struct_MK1 centerCoordinate; 
@property (assign,nonatomic) SCD_Struct_MK2 visibleMapRect; 
@property (nonatomic,copy) MKMapCamera * camera; 
@property (assign,getter=isZoomEnabled,nonatomic) BOOL zoomEnabled; 
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (assign,getter=isRotateEnabled,nonatomic) BOOL rotateEnabled; 
@property (assign,getter=isPitchEnabled,nonatomic) BOOL pitchEnabled; 
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) BOOL showsBuildings; 
@property (assign,nonatomic) BOOL showsUserLocation; 
@property (nonatomic,readonly) MKUserLocation * userLocation; 
@property (assign,nonatomic) long long userTrackingMode; 
@property (getter=isUserLocationVisible,nonatomic,readonly) BOOL userLocationVisible; 
@property (nonatomic,readonly) NSArray * annotations; 
@property (nonatomic,copy) NSArray * selectedAnnotations; 
@property (nonatomic,readonly) CGRect annotationVisibleRect; 
@property (assign,setter=_setCurrentFlyoverAnimationID:,getter=_currentFlyoverAnimationID,nonatomic) unsigned long long currentFlyoverAnimationID;              //@synthesize currentFlyoverAnimationID=_currentFlyoverAnimationID - In the implementation block
+(SCD_Struct_MK2)_regionThatFitsMapType:(unsigned long long)arg1 viewSize:(CGSize)arg2 viewInsets:(UIEdgeInsets)arg3 edgePadding:(UIEdgeInsets)arg4 region:(SCD_Struct_MK2)arg5 minZoomLevel:(double)arg6 maxZoomLevel:(double)arg7 snapToZoomLevel:(BOOL)arg8 ;
+(unsigned long long)minZoomLevelForMapType:(unsigned long long)arg1 viewSize:(CGSize)arg2 ;
+(SCD_Struct_MK2)_mapRectThatFitsViewBounds:(CGRect)arg1 mapRect:(SCD_Struct_MK2)arg2 viewInsets:(UIEdgeInsets)arg3 edgePadding:(UIEdgeInsets)arg4 minZoomLevel:(double)arg5 maxZoomLevel:(double)arg6 snapToZoomLevel:(BOOL)arg7 ;
+(SCD_Struct_MK2)regionThatFitsMapType:(unsigned long long)arg1 viewSize:(CGSize)arg2 edgeInsets:(UIEdgeInsets)arg3 region:(SCD_Struct_MK2)arg4 ;
+(SCD_Struct_MK2)regionThatFitsMapType:(unsigned long long)arg1 viewSize:(CGSize)arg2 region:(SCD_Struct_MK2)arg3 ;
+(void)setRendersInBackgroundByDefault:(BOOL)arg1 ;
-(UIEdgeInsets)defaultInsetsForPinAnnotations;
-(SCD_Struct_MK2)mapRectThatFits:(SCD_Struct_MK2)arg1 minMetersPerPoint:(double)arg2 ;
-(void)goToSearchResults:(id)arg1 mapRegion:(id)arg2 requireMapMovement:(BOOL)arg3 animation:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isCoordinateVisible:(SCD_Struct_MK1)arg1 ;
-(id)selectedSearchResult;
-(BOOL)_pinPositionAvailableAtPoint:(CGPoint)arg1 ;
-(void)goToSearchResults:(id)arg1 mapRegion:(id)arg2 requireMapMovement:(BOOL)arg3 ;
-(SCD_Struct_MK2)mapRectContainingSearchResults:(id)arg1 ;
-(SCD_Struct_MK1)pinDroppingCoordinate;
-(void)setSelectedSearchResult:(id)arg1 ;
-(CGPoint)_convertCoordinate:(SCD_Struct_MK1)arg1 toPointToView:(id)arg2 ;
-(SCD_Struct_MK1)_convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2 ;
-(CGRect)_convertRegion:(SCD_Struct_MK2)arg1 toRectToView:(id)arg2 ;
-(SCD_Struct_MK2)_convertRect:(CGRect)arg1 toRegionFromView:(id)arg2 ;
-(CGRect)_convertMapRect:(SCD_Struct_MK2)arg1 toRectToView:(id)arg2 ;
-(SCD_Struct_MK2)_convertRect:(CGRect)arg1 toMapRectFromView:(id)arg2 ;
-(SCD_Struct_MK1)_convertPoint:(CGPoint)arg1 toMapPointFromView:(id)arg2 ;
-(CGPoint)_convertMapPoint:(SCD_Struct_MK1)arg1 toPointToView:(id)arg2 ;
-(void)setDelegate:(id<MKMapViewDelegate>)arg1 ;
-(id<MKMapViewDelegate>)delegate;
-(id)_visibleTileSets;
-(id)_detailedDescription;
-(void)_setMaximumZoomLevel:(double)arg1 ;
-(void)_resetMaximumZoomLevel;
-(void)addOverlay:(id)arg1 level:(long long)arg2 ;
-(void)addOverlays:(id)arg1 level:(long long)arg2 ;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3 ;
-(void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2 ;
-(id)overlaysInLevel:(long long)arg1 ;
-(id)viewForOverlay:(id)arg1 ;
-(id)rendererForOverlay:(id)arg1 ;
-(void)removeOverlays:(id)arg1 ;
-(void)addOverlays:(id)arg1 ;
-(NSArray *)overlays;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)insertOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 ;
-(id)vk_mapLayer;
-(id)overlayContainer;
-(id)createDrawableForOverlay:(id)arg1 ;
-(void)overlayContainerAddedDrawables:(id)arg1 ;
-(void)_updateCameraState;
-(void)_snapToNorthIfNecessary;
-(id)_camera;
-(void)_setCamera:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setCamera:(id)arg1 duration:(double)arg2 timingCurve:(long long)arg3 ;
-(void)_setCamera:(id)arg1 duration:(double)arg2 timing:(/*^block*/id)arg3 ;
-(void)_updateFromCamera:(id)arg1 duration:(double)arg2 timing:(/*^block*/id)arg3 ;
-(void)_updateFromCamera:(id)arg1 ;
-(void)_setCamera:(id)arg1 ;
-(void)_startTrackingHeading;
-(void)_stopTrackingHeading;
-(BOOL)shouldRotateForHeading;
-(BOOL)_updateRotationSupported;
-(void)enableMapRotationIfNeeded;
-(BOOL)_useVehicleHeading;
-(void)_updateCourseForMapViewHeading:(id)arg1 ;
-(void)_updateHeading:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShouldRotateForHeading:(BOOL)arg1 ;
-(BOOL)_rotationPossible;
-(void)_setUseVehicleHeading:(BOOL)arg1 ;
-(void)pauseUserHeadingUpdates;
-(void)resumeUserHeadingUpdates;
-(void)locationManagerUpdatedHeading:(id)arg1 ;
-(void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(CGRect)_debugViewFrame;
-(BOOL)_isUserLocationInView:(BOOL)arg1 ;
-(MKAnnotationView *)userLocationView;
-(BOOL)isLocationConsoleEnabled;
-(void)setLocationConsoleEnabled:(BOOL)arg1 ;
-(BOOL)_isUserLocationViewCentered:(double)arg1 ;
-(void)_pauseUserLocationUpdates;
-(void)_resumeUserLocationUpdates:(BOOL)arg1 ;
-(void)removeUserLocation;
-(void)_toggleLocationConsole:(id)arg1 ;
-(void)_updateLocationConsole;
-(BOOL)ignoreLocationUpdates;
-(id)descriptionForLocation:(id)arg1 compact:(BOOL)arg2 ;
-(void)setIgnoreLocationUpdates:(BOOL)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)setPredictedUserLocation:(CLLocation *)arg1 ;
-(BOOL)_isLocationPropagationEnabled;
-(void)_setLocationPropagationEnabled:(BOOL)arg1 ;
-(CLLocation *)predictedUserLocation;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)puckAnimatorDidStop:(id)arg1 ;
-(void)puckAnimator:(id)arg1 updatedTargetPosition:(SCD_Struct_MK3)arg2 ;
-(void)puckAnimator:(id)arg1 runAnimation:(id)arg2 ;
-(void)puckAnimator:(id)arg1 updatedPosition:(SCD_Struct_MK3)arg2 course:(double)arg3 ;
-(void)startUpdatingUserLocation;
-(void)stopUpdatingUserLocation;
-(CGRect)attributionFrame;
-(SCD_Struct_MK2)regionThatFits:(SCD_Struct_MK2)arg1 ;
-(void)setRegion:(SCD_Struct_MK2)arg1 animated:(BOOL)arg2 ;
-(void)setVisibleMapRect:(SCD_Struct_MK2)arg1 ;
-(UIEdgeInsets)_edgeInsets;
-(double)_minimumZoomLevel;
-(double)_maximumZoomLevel;
-(void)_insertSubview:(id)arg1 ;
-(void)_setMapType:(unsigned long long)arg1 onInit:(BOOL)arg2 ;
-(void)geoDefaultsDidChange:(id)arg1 ;
-(void)deviceOrientationDidChange:(id)arg1 ;
-(void)_willChangeStatusBarFrame:(id)arg1 ;
-(void)_updatePitchAllowed:(BOOL)arg1 ;
-(void)_updateRotateAllowed:(BOOL)arg1 ;
-(void)_displayWorld;
-(void)goToDefaultLocation;
-(void)set_defaultLocationTimer:(id)arg1 ;
-(void)_configureGestureRecognizers:(id)arg1 ;
-(void)_updateAttribution;
-(void)stopEffects;
-(id)_commonInitFromIB:(BOOL)arg1 gestureRecognizerHostView:(id)arg2 showsAttribution:(BOOL)arg3 ;
-(BOOL)showsUserLocation;
-(BOOL)isPitchEnabled;
-(BOOL)isRotateEnabled;
-(void)set_startEffectsTimer:(id)arg1 ;
-(void)_clearLayoutGuides;
-(void)startEffects;
-(void)_layoutAttribution;
-(CGRect)_currentEnvironmentNameFrame;
-(void)_updateScrollingAndGestures;
-(void)_updateEnvironmentLabelText;
-(void)_updateHeadingOrientation;
-(id)_nonselectingTapGestureRecognizer;
-(BOOL)_supportsVKMapType:(long long)arg1 ;
-(BOOL)_canShowFlyover;
-(void)_deselectLabelMarkerAnimated:(BOOL)arg1 ;
-(void)_updateIconsShouldAlignToPixels;
-(void)_handleStyleDebugGesture:(id)arg1 ;
-(void)_updateCompassVisibility;
-(BOOL)_isChangingRegionForGesture;
-(void)_setScrolling:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_willStartScroll;
-(void)_didEndScroll;
-(double)_zoomLevel;
-(double)_boundedZoomLevel:(double)arg1 ;
-(double)_zoomScaleForMapRegion:(id)arg1 ;
-(void)_sizeWillChange;
-(void)_sizeDidChangeWithCenterCoordinate:(SCD_Struct_MK1)arg1 ;
-(BOOL)_canEnter3DMode;
-(void)setUserTrackingMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_setUserTrackingMode:(long long)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3 ;
-(void)toggleLocationConsole:(id)arg1 ;
-(void)_handleTapToSelect:(id)arg1 ;
-(void)_handleTapToDeselect:(id)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)_addDebugGesture;
-(BOOL)calloutViewContainsPoint:(CGPoint)arg1 ;
-(BOOL)_hitSomethingAtTouch:(id)arg1 ;
-(void)_dropDraggingAnnotationView:(BOOL)arg1 ;
-(void)_handleLongPressDidEnd;
-(void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(void)_annotationViewDragStateChanged:(id)arg1 ;
-(id)_calloutPopoverController;
-(id)mapAttributionWithStringAttributes:(id)arg1 ;
-(void)_startFlyoverTourAnimation:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_selectLabelMarker:(id)arg1 animated:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(BOOL)_isUsingDevResourceStyleSheet;
-(BOOL)_isHandlingUserEvent;
-(BOOL)_iconsShouldAlignToPixels;
-(void)_updateScrollContainerView:(BOOL)arg1 ;
-(void)_updateRotationAttributes;
-(void)_updateEffects;
-(BOOL)_shouldDisplayScaleForCurrentRegion;
-(void)_setScaleVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateScaleVisibility;
-(void)pauseUserLocationUpdates;
-(void)resumeUserLocationUpdates;
-(void)_updateShouldDisplayEffects;
-(double)_maxZoomLevelForCoordinate:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK1)_centerMapPoint;
-(BOOL)effectsEnabled;
-(void)_setZoomScale:(double)arg1 centerMapPoint:(SCD_Struct_MK1)arg2 duration:(double)arg3 animated:(BOOL)arg4 ;
-(void)_goToMapRegion:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_suspendUserInteraction;
-(void)_resumeUserInteraction;
-(void)_updateDebugViewFrameWithEdgeInsets;
-(void)_updateVectorKitConsoleFrameWithEdgeInsets;
-(void)_updateCompassPosition;
-(void)_updateScalePosition;
-(BOOL)_roomForCompass;
-(void)_setCompassVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setEdgeInsets:(UIEdgeInsets)arg1 explicit:(BOOL)arg2 ;
-(void)setVisibleMapRect:(SCD_Struct_MK2)arg1 edgePadding:(UIEdgeInsets)arg2 animated:(BOOL)arg3 ;
-(void)_addSetRegionBlockWhenSized:(/*^block*/id)arg1 ;
-(id)_mapRegionWithCenterCoordinate:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 ;
-(void)_goToMapRegion:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3 ;
-(int)_viewIndexForSubview:(id)arg1 ;
-(SCD_Struct_MK5)_zoomRegionForMapRect:(SCD_Struct_MK2)arg1 edgePadding:(UIEdgeInsets)arg2 maxZoomLevel:(long long)arg3 minZoomLevel:(long long)arg4 ;
-(double)_zoomLevelForMapRect:(SCD_Struct_MK2)arg1 includeAccessoryPadding:(BOOL)arg2 ;
-(double)_boundedZoomLevel:(double)arg1 coordinate:(SCD_Struct_MK1)arg2 ;
-(long long)_roundedZoomLevel;
-(void)_setZoomScale:(double)arg1 centerCoordinate:(SCD_Struct_MK1)arg2 duration:(double)arg3 animated:(BOOL)arg4 ;
-(void)_selectUserLocationTypeWithDeltaZoomLevel:(double)arg1 ;
-(CGPoint)convertCoordinate:(SCD_Struct_MK1)arg1 toPointToView:(id)arg2 ;
-(double)_panDurationFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(void)_fixUserLocationFromPresentationValue;
-(void)_clearFixedUserLocation;
-(void)_setScrolling:(BOOL)arg1 ;
-(void)_updateContentBounds;
-(BOOL)_isPitched;
-(SCD_Struct_MK1)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2 ;
-(id)scaleView;
-(void)handleCompassTap:(id)arg1 ;
-(BOOL)isCompassEnabled;
-(id)_compassHideTimer;
-(id)compassView;
-(void)snapToNorth:(id)arg1 ;
-(void)set_compassHideTimer:(id)arg1 ;
-(id)compassVisibilityAnimation;
-(void)_hideCompassFromTimer:(id)arg1 ;
-(void)_willStartUserInteraction;
-(void)_didEndUserInteraction;
-(void)_userScrollingEnded;
-(void)_willStartZoom:(BOOL)arg1 ;
-(void)_didEndZoom;
-(void)_didChangeRegionMidstream:(BOOL)arg1 ;
-(void)_willChangeRegionAnimated:(BOOL)arg1 ;
-(CGRect)annotationVisibleRect;
-(double)_goToCenterCoordinate:(SCD_Struct_MK1)arg1 zoomLevel:(double)arg2 animated:(BOOL)arg3 ;
-(void)setCamera:(id)arg1 animated:(BOOL)arg2 ;
-(SCD_Struct_MK2)visibleMapRect;
-(double)_zoomLevelForRegion:(SCD_Struct_MK2)arg1 includeAccessoryPadding:(BOOL)arg2 ;
-(id)annotationsInMapRect:(SCD_Struct_MK2)arg1 ;
-(id)_selectedLabelMarker;
-(void)_selectAnnotation:(id)arg1 animated:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(void)_addAnnotation:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(id)_findLayoutGuideVC;
-(void)updateLayoutGuides;
-(void)_prepareFlyoverAnimation:(id)arg1 inBackground:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performFlyoverAnimation:(id)arg1 animateToStart:(BOOL)arg2 ;
-(void)setCompassEnabled:(BOOL)arg1 ;
-(void)_stopFlyoverAnimation;
-(void)_pauseFlyoverAnimation;
-(void)_resumeFlyoverAnimation;
-(void)selectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(SCD_Struct_MK2)_mapRectWithFraction:(double)arg1 ofVisible:(SCD_Struct_MK2)arg2 ;
-(void)_zoomWithAmount:(double)arg1 ;
-(BOOL)annotationContainerShouldAlignToPixels:(id)arg1 ;
-(BOOL)annotationContainerIsRotated:(id)arg1 ;
-(void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)calloutDidAppearForAnnotationView:(id)arg1 inContainer:(id)arg2 ;
-(void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(SCD_Struct_MK1)arg3 completionHandler:(/*^block*/id)arg4 ;
-(double)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(SCD_Struct_MK1)arg2 maxDistance:(double*)arg3 startPoint:(CGPoint*)arg4 shadowStartPoint:(CGPoint*)arg5 ;
-(void)annotationContainerWillAnimateBubble:(id)arg1 ;
-(void)annotationContainerDidAnimateBubble:(id)arg1 ;
-(void)annotationContainerWillDropPins:(id)arg1 ;
-(void)annotationContainerDidDropPins:(id)arg1 ;
-(CGRect)visibleCenteringRectInView:(id)arg1 ;
-(CGRect)visibleRectInView:(id)arg1 ;
-(CGRect)annotationContainerVisibleRect:(id)arg1 ;
-(void)annotationContainerDidFinishMapsTransitionExpanding:(id)arg1 ;
-(void)gestureControllerWillStartUserInteraction:(id)arg1 ;
-(void)gestureControllerDidStopUserInteraction:(id)arg1 ;
-(void)gestureControllerWillStartPanning:(id)arg1 ;
-(void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)gestureControllerDidStopPanningDecelerating:(id)arg1 ;
-(void)gestureControllerWillStartZooming:(id)arg1 animated:(BOOL)arg2 ;
-(void)gestureControllerDidStopZooming:(id)arg1 direction:(long long)arg2 willDecelerate:(BOOL)arg3 ;
-(void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(long long)arg2 ;
-(void)gestureControllerWillStartTwoFingerLongPress:(id)arg1 ;
-(void)gestureControllerDidStopTwoFingerLongPress:(id)arg1 ;
-(void)gestureControllerWillStartRotating:(id)arg1 ;
-(void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)gestureControllerDidStopRotatingDecelerating:(id)arg1 ;
-(void)gestureControllerWillStartTilting:(id)arg1 ;
-(void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)gestureControllerDidStopTiltingDecelerating:(id)arg1 ;
-(double)gestureController:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3 ;
-(void)addAnnotationRepresentation:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(void)removeAnnotationRepresentation:(id)arg1 ;
-(void)deselectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 ;
-(void)moveAnnotationRepresentation:(id)arg1 fromCoordinate:(SCD_Struct_MK1)arg2 animated:(BOOL)arg3 duration:(double)arg4 ;
-(void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2 ;
-(id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2 ;
-(void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2 ;
-(void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2 ;
-(void)annotationManager:(id)arg1 willDeselectAnnotationRepresentation:(id)arg2 ;
-(id)_initWithFrame:(CGRect)arg1 gestureRecognizerHostView:(id)arg2 showsAttribution:(BOOL)arg3 ;
-(id)initFromIBWithFrame:(CGRect)arg1 ;
-(void)_setSafeDelegate:(id)arg1 ;
-(void)setBackdropViewQualityChangingDisabled:(BOOL)arg1 ;
-(id)_mapLayer;
-(id)_viewportDictionary;
-(void)_restoreViewportFromDictionary:(id)arg1 ;
-(BOOL)_isVectorKitConsoleEnabled;
-(void)_setVectorKitConsoleEnabled:(BOOL)arg1 ;
-(BOOL)_showsTraffic;
-(void)_setShowsTraffic:(BOOL)arg1 ;
-(BOOL)showsAttribution;
-(void)setShowsAttribution:(BOOL)arg1 ;
-(BOOL)showsAttributionBadge;
-(void)setShowsAttributionBadge:(BOOL)arg1 ;
-(BOOL)_showsPressedLabelMarkerEffect;
-(void)_setShowsPressedLabelMarkerEffect:(BOOL)arg1 ;
-(id)_panningGestureRecognizer;
-(id)_selectingTapGestureRecognizer;
-(id)_longPressGestureRecognizer;
-(BOOL)_isHandlingNonselectingTap;
-(BOOL)_annotationViewsAreAddedImmediately;
-(void)set_annotationViewsAreAddedImmediately:(BOOL)arg1 ;
-(BOOL)_allowsPopoverWhenNotInWindow;
-(void)_setAllowsPopoverWhenNotInWindow:(BOOL)arg1 ;
-(id)_defaultLocationTimer;
-(BOOL)_isShowingFlyover;
-(unsigned long long)_mapDisplayStyle;
-(void)_setMapDisplayStyle:(unsigned long long)arg1 ;
-(BOOL)_isVectorKitStyleDebugEnabled;
-(void)_setVectorKitStyleDebugEnabled:(BOOL)arg1 ;
-(id)_startEffectsTimer;
-(void)setScaleEnabled:(BOOL)arg1 ;
-(BOOL)isScaleEnabled;
-(BOOL)isRegionChanging;
-(CGPoint)_centerPoint;
-(id)_mapRegionOfInterest;
-(id)debugView;
-(BOOL)_canZoomIn;
-(BOOL)_canZoomOut;
-(BOOL)_panWithMomentum;
-(void)_setPanWithMomentum:(BOOL)arg1 ;
-(void)_setTracePlaybackSpeedMultiplier:(double)arg1 ;
-(void)_setShouldDelayLocationUpdatesUntilInitialRendering:(BOOL)arg1 ;
-(BOOL)_shouldDelayLocationUpdatesUntilInitialRendering;
-(BOOL)isUserLocationVisible;
-(BOOL)hasRenderedSomething;
-(BOOL)canRotateForHeading;
-(BOOL)_isCalloutExpanded;
-(CGRect)_calloutContentRect;
-(/*^block*/id)_debugConsoleAdditionalInfoProvider;
-(void)_setDebugConsoleAdditionalInfoProvider:(/*^block*/id)arg1 ;
-(BOOL)_showsCurrentEnvironmentName;
-(void)_setShowsCurrentEnvironmentName:(BOOL)arg1 ;
-(BOOL)_userInteractionPausesLocationUpdates;
-(void)_setUserInteractionPausesLocationUpdates:(BOOL)arg1 ;
-(BOOL)_isLocationPulseEnabled;
-(void)_setLocationPulseEnabled:(BOOL)arg1 ;
-(BOOL)_shouldSplitRouteLine;
-(void)_setShouldSplitRouteLine:(BOOL)arg1 ;
-(BOOL)_shouldAnimatePositionWithRouteMatch;
-(void)_setShouldAnimatePositionWithRouteMatch:(BOOL)arg1 ;
-(UIEdgeInsets)_labelEdgeInsets;
-(void)_setLabelEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)showAnnotations:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)callsDelegateForAllRegionChanges;
-(void)setCallsDelegateForAllRegionChanges:(BOOL)arg1 ;
-(BOOL)compassVisible;
-(id)_annotationViews;
-(void)setSelectedAnnotations:(NSArray *)arg1 ;
-(CGRect)convertRegion:(SCD_Struct_MK2)arg1 toRectToView:(id)arg2 ;
-(BOOL)_canSelectPOIs;
-(void)_setCanSelectPOIs:(BOOL)arg1 ;
-(BOOL)_canSelectAllLabels;
-(void)_setCanSelectAllLabels:(BOOL)arg1 ;
-(void)_selectLabelMarker:(id)arg1 animated:(BOOL)arg2 ;
-(void)_addAnnotations:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(void)_replaceAnnotation:(id)arg1 withAnnotation:(id)arg2 ;
-(void)_addViewsForAnnotations:(id)arg1 ;
-(void)_enter3DMode;
-(void)_exit3DMode;
-(BOOL)_canEnterNightMode;
-(long long)_userTrackingZoomStyle;
-(void)_setUserTrackingZoomStyle:(long long)arg1 ;
-(int)_applicationState;
-(void)_setApplicationState:(int)arg1 ;
-(void)_addVectorOverlay:(id)arg1 ;
-(void)_removeVectorOverlay:(id)arg1 ;
-(void)_addPersistentVectorOverlay:(id)arg1 ;
-(void)_removePersistentVectorOverlay:(id)arg1 ;
-(void)_setVisibleMapRect:(SCD_Struct_MK2)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setVisibleMapRect:(SCD_Struct_MK2)arg1 duration:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performFlyoverAnimation:(id)arg1 ;
-(BOOL)_canShowAnimationForSearchResultWithMapRegion:(id)arg1 ;
-(void)_showAnimationAtCoordinate:(SCD_Struct_MK1)arg1 withMapRegion:(id)arg2 ;
-(void)_zoomIn;
-(void)_zoomOut;
-(void)_startPanningAtPoint:(CGPoint)arg1 ;
-(void)_updatePanWithTranslation:(CGPoint)arg1 ;
-(void)_stopPanningAtPoint:(CGPoint)arg1 ;
-(unsigned long long)_currentFlyoverAnimationID;
-(void)_setCurrentFlyoverAnimationID:(unsigned long long)arg1 ;
-(id)viewForAnnotation:(id)arg1 ;
-(NSArray *)annotations;
-(NSArray *)selectedAnnotations;
-(void)setRotateEnabled:(BOOL)arg1 ;
-(void)setPitchEnabled:(BOOL)arg1 ;
-(void)setShowsUserLocation:(BOOL)arg1 ;
-(void)selectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(MKUserLocation *)userLocation;
-(id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1 ;
-(SCD_Struct_MK2)mapRectThatFits:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)mapRectThatFits:(SCD_Struct_MK2)arg1 edgePadding:(UIEdgeInsets)arg2 ;
-(void)setVisibleMapRect:(SCD_Struct_MK2)arg1 animated:(BOOL)arg2 ;
-(void)removeAnnotations:(id)arg1 ;
-(void)addAnnotations:(id)arg1 ;
-(void)addAnnotation:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(SCD_Struct_MK2)convertRect:(CGRect)arg1 toRegionFromView:(id)arg2 ;
-(BOOL)isSuspended;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)_clearGestureRecognizers;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(BOOL)isScrollEnabled;
-(void)setCenter:(CGPoint)arg1 ;
-(long long)_interfaceOrientation;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)layoutMarginsDidChange;
-(void)willMoveToWindow:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(BOOL)isZoomEnabled;
-(double)_zoomScale;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(void)setRegion:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)region;
-(void)drawRect:(CGRect)arg1 forViewPrintFormatter:(id)arg2 ;
-(void)setSuspended:(BOOL)arg1 ;
-(void)_updateInsets;
-(BOOL)_isVisible;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(BOOL)hasUserLocation;
-(void)setUserTrackingMode:(long long)arg1 ;
-(long long)userTrackingMode;
-(/*^block*/id)annotationRectTest;
-(/*^block*/id)annotationCoordinateTest;
-(unsigned long long)mapType;
-(BOOL)isShowingNoDataPlaceholders;
-(void)setMapType:(unsigned long long)arg1 ;
-(BOOL)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(BOOL)showsBuildings;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(BOOL)rendersInBackground;
-(void)setRendersInBackground:(BOOL)arg1 ;
-(MKMapCamera *)camera;
-(void)mapLayer:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2 ;
-(void)mapLayer:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2 ;
-(void)mapLayer:(id)arg1 showingFlyoverDidChange:(BOOL)arg2 ;
-(void)mapLayer:(id)arg1 willChangeRegionAnimated:(BOOL)arg2 ;
-(void)mapLayerDidChangeVisibleRegion:(id)arg1 ;
-(void)mapLayer:(id)arg1 didChangeRegionAnimated:(BOOL)arg2 ;
-(id)mapRegion;
-(void)setCenterCoordinate:(SCD_Struct_MK1)arg1 animated:(BOOL)arg2 ;
-(SCD_Struct_MK1)centerCoordinate;
-(void)mapLayer:(id)arg1 didStopFlyoverTourCompleted:(BOOL)arg2 ;
-(void)mapLayer:(id)arg1 flyoverTourLabelDidChange:(id)arg2 ;
-(void)mapLayerWillStartFlyoverTour:(id)arg1 ;
-(BOOL)shouldHideOffscreenSelectedAnnotation;
-(void)mapLayerDidStartLoadingTiles:(id)arg1 ;
-(void)mapLayerDidFinishLoadingTiles:(id)arg1 ;
-(void)mapLayerDidFailLoadingTiles:(id)arg1 withError:(id)arg2 ;
-(id)mapLayer:(id)arg1 presentationForAnnotation:(id)arg2 ;
-(id)mapLayer:(id)arg1 painterForOverlay:(id)arg2 ;
-(void)mapLayerDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2 ;
-(void)mapLayerDidBecomePartiallyDrawn:(id)arg1 ;
-(void)mapLayer:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(void)mapLayer:(id)arg1 canZoomInDidChange:(BOOL)arg2 ;
-(void)mapLayer:(id)arg1 canZoomOutDidChange:(BOOL)arg2 ;
-(void)mapLayer:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)mapLayer:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4 ;
-(void)mapLayerDidDraw:(id)arg1 ;
-(void)mapLayer:(id)arg1 didUpdateVerticalYawTo:(double)arg2 ;
-(void)setCenterCoordinate:(SCD_Struct_MK1)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)setCamera:(MKMapCamera *)arg1 ;
@end

