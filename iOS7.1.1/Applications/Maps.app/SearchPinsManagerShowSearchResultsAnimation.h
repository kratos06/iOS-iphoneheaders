/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, GEOMapRegion, MKMapView;

@interface SearchPinsManagerShowSearchResultsAnimation : NSObject {

	NSArray* _results;
	GEOMapRegion* _mapRegion;
	MKMapView* _mapView;
	BOOL _started;
	BOOL _canProceedToDropPins;
	BOOL _viewportAllowsDroppingPins;
	BOOL _hasDroppedPins;
	BOOL _cancelled;
	/*^block*/ id _completion;

}
-(id)initWithSearchResults:(id)arg1 mapRegion:(id)arg2 mapView:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)proceedWithDroppingPins:(BOOL)arg1 ;
-(void)_proceedWithDroppingPins;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(void).cxx_destruct;
@end

