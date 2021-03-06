/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceHeaderBackgroundView.h>
#import <MapKit/MKMapViewDelegate.h>

@class MKMapView, MKMapCamera, CLLocation, NSString;

@interface MKPlaceHeaderBackgroundView_Snapshot : MKPlaceHeaderBackgroundView <MKMapViewDelegate> {

	MKMapView* _mapView;
	BOOL _orbiting;
	BOOL _settingUpOrbitAnimation;
	BOOL _showsPin;
	BOOL _useSatellite;
	MKMapCamera* _orbitCamera;
	double _zoomLevel;
	unsigned long long _pinColor;
	CLLocation* _location;

}

@property (assign,nonatomic) unsigned long long pinColor;               //@synthesize pinColor=_pinColor - In the implementation block
@property (nonatomic,retain) MKMapCamera * orbitCamera;                 //@synthesize orbitCamera=_orbitCamera - In the implementation block
@property (assign,nonatomic) BOOL orbiting;                             //@synthesize orbiting=_orbiting - In the implementation block
@property (nonatomic,retain) CLLocation * location;                     //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL settingUpOrbitAnimation;              //@synthesize settingUpOrbitAnimation=_settingUpOrbitAnimation - In the implementation block
@property (assign,nonatomic) double zoomLevel;                          //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) BOOL showsPin;                             //@synthesize showsPin=_showsPin - In the implementation block
@property (assign,nonatomic) BOOL useSatellite;                         //@synthesize useSatellite=_useSatellite - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)pinColor;
-(id)initWithFrame:(CGRect)arg1 mapItem:(id)arg2 ;
-(void)setBackgroundType:(long long)arg1 ;
-(void)prepareForPresentation;
-(void)setUseSatellite:(BOOL)arg1 ;
-(BOOL)useSatellite;
-(void)setOrbitCamera:(MKMapCamera *)arg1 ;
-(void)pauseOrbit;
-(void)requestSnapshot;
-(void)mapFinishedLoading:(BOOL)arg1 ;
-(BOOL)orbiting;
-(BOOL)settingUpOrbitAnimation;
-(void)_orbitNextThird;
-(void)setOrbiting:(BOOL)arg1 ;
-(void)setSettingUpOrbitAnimation:(BOOL)arg1 ;
-(MKMapCamera *)orbitCamera;
-(BOOL)showsPin;
-(void)setShowsPin:(BOOL)arg1 ;
-(void)beginOrbit;
-(void)setMapItem:(id)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)mapViewDidFinishLoadingMap:(id)arg1 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)dealloc;
-(void)resume;
-(void)reset;
-(void)present;
-(CLLocation *)location;
-(void)pause;
-(void)setPinColor:(unsigned long long)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setZoomLevel:(double)arg1 ;
-(double)zoomLevel;
@end

