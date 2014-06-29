/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsChromeTopBarContent.h>

@protocol DirectionsInfoBarDelegate;
@class NSArray, UIBarButtonItem, RouteStartStepView, RouteInfoLabelView, TopBarTitleView, MainChromeViewController;

@interface DirectionsInfoBar : NSObject <MapsChromeTopBarContent> {

	NSArray* _itemsForDirections;
	NSArray* _itemsForNavigation;
	NSArray* _itemsForLoading;
	UIBarButtonItem* _paddingItem1;
	UIBarButtonItem* _paddingItem2;
	UIBarButtonItem* _startButton;
	RouteStartStepView* _routeInfoView;
	RouteInfoLabelView* _routeInfoLabelView;
	TopBarTitleView* _loadingTitleView;
	int _directionsInfoBarMode;
	<DirectionsInfoBarDelegate>* delegate;
	MainChromeViewController* _chromeViewController;
	NSArray* _items;

}

@property (assign,nonatomic,__weak) <DirectionsInfoBarDelegate> * delegate; 
@property (assign,nonatomic) int directionsInfoBarMode;                                    //@synthesize directionsInfoBarMode=_directionsInfoBarMode - In the implementation block
@property (nonatomic,retain) NSArray * _items;                                             //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) MainChromeViewController * chromeViewController;              //@synthesize chromeViewController=_chromeViewController - In the implementation block
+(float)defaultHeight;
-(void)setBackdropLightness:(int)arg1 animation:(id)arg2 ;
-(void)_handleLocaleChangeNotification:(id)arg1 ;
-(id)toolbarItemsForIdiom:(int)arg1 ;
-(void)topBarSizeWillChange:(CGSize)arg1 ;
-(id)chromeViewController;
-(void)setChromeViewController:(id)arg1 ;
-(void)setShowsDimmedDisplay:(BOOL)arg1 animation:(id)arg2 ;
-(int)directionsInfoBarMode;
-(void)setDirectionsInfoBarMode:(int)arg1 animated:(BOOL)arg2 ;
-(void)setAlternateRoutesCount:(unsigned)arg1 ;
-(void)setSelectedRoute:(id)arg1 withIndex:(unsigned)arg2 destinationName:(id)arg3 ;
-(void)refreshRouteInfoView;
-(void)setTimeEstimate:(double)arg1 andDistanceEstimate:(double)arg2 ;
-(void)_updateRouteInfoLabelView;
-(void)_startButtonTapped;
-(id)_startButton;
-(void)_clearDirectionsTapped;
-(id)_routeInfoView;
-(void)_endNavigationButtonTapped;
-(void)_resumeNavigationButtonTapped;
-(id)_routeInfoLabelView;
-(void)_equalizeWidthIfPossibleOfButtonItem:(id)arg1 withButtonItem:(id)arg2 ;
-(void)_cancelDirectionsLoadingTapped;
-(id)_loadingTitleView;
-(id)_itemsForDirections;
-(id)_itemsForNavigation;
-(id)_itemsForLoading;
-(void)set_items:(id)arg1 ;
-(float)overviewWidth;
-(void)setDirectionsInfoBarMode:(int)arg1 ;
-(id)initWithMode:(int)arg1 ;
-(void)setDestinationName:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)_items;
-(void).cxx_destruct;
-(BOOL)isDimmed;
@end
