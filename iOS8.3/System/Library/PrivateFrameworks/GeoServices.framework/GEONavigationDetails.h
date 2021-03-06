/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:51:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOComposedRoute, NSString, GEOLocation, GEORouteMatch, GEONavigationRouteSummary, GEONavigationGuidanceState, GEOCompanionRouteDetails, GEOCompanionRouteStatus;

@interface GEONavigationDetails : NSObject {

	GEOComposedRoute* _route;
	NSString* _destinationName;
	GEOLocation* _location;
	GEORouteMatch* _routeMatch;
	double _distanceToManeuverStart;
	double _distanceToManeuverEnd;
	double _distanceToRoute;
	double _distanceRemainingOnRoute;
	double _remainingTime;
	char _locationUnreliable;
	unsigned _annoucementStage;
	unsigned _nextAnnoucementStage;
	double _timeUntilNextAnnouncement;
	GEONavigationRouteSummary* _routeSummary;
	GEONavigationGuidanceState* _guidanceState;
	GEOCompanionRouteDetails* _companionRoute;
	GEOCompanionRouteStatus* _companionStatus;

}

@property (nonatomic,retain) GEOComposedRoute * route;                                  //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) NSString * destinationName;                              //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,retain) GEOLocation * location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) GEORouteMatch * routeMatch;                                //@synthesize routeMatch=_routeMatch - In the implementation block
@property (assign,nonatomic) double distanceToManeuverStart;                            //@synthesize distanceToManeuverStart=_distanceToManeuverStart - In the implementation block
@property (assign,nonatomic) double distanceToManeuverEnd;                              //@synthesize distanceToManeuverEnd=_distanceToManeuverEnd - In the implementation block
@property (assign,nonatomic) double distanceToRoute;                                    //@synthesize distanceToRoute=_distanceToRoute - In the implementation block
@property (assign,nonatomic) double distanceRemainingOnRoute;                           //@synthesize distanceRemainingOnRoute=_distanceRemainingOnRoute - In the implementation block
@property (assign,nonatomic) double remainingTime;                                      //@synthesize remainingTime=_remainingTime - In the implementation block
@property (assign,nonatomic) char locationUnreliable;                                   //@synthesize locationUnreliable=_locationUnreliable - In the implementation block
@property (assign,nonatomic) int navigationState; 
@property (assign,nonatomic) unsigned announcementStage;                                //@synthesize annoucementStage=_annoucementStage - In the implementation block
@property (nonatomic,readonly) unsigned nextAnnouncementStage;                          //@synthesize nextAnnoucementStage=_nextAnnoucementStage - In the implementation block
@property (nonatomic,readonly) double timeUntilNextAnnouncement;                        //@synthesize timeUntilNextAnnouncement=_timeUntilNextAnnouncement - In the implementation block
@property (nonatomic,readonly) GEONavigationRouteSummary * routeSummary;                //@synthesize routeSummary=_routeSummary - In the implementation block
@property (nonatomic,readonly) GEONavigationGuidanceState * guidanceState;              //@synthesize guidanceState=_guidanceState - In the implementation block
@property (nonatomic,readonly) GEOCompanionRouteDetails * companionRoute;               //@synthesize companionRoute=_companionRoute - In the implementation block
@property (nonatomic,readonly) GEOCompanionRouteStatus * companionStatus;               //@synthesize companionStatus=_companionStatus - In the implementation block
-(NSString *)destinationName;
-(void)dealloc;
-(GEOLocation *)location;
-(GEOCompanionRouteStatus *)companionStatus;
-(GEOCompanionRouteDetails *)companionRoute;
-(id)initWithRoute:(id)arg1 destinationName:(id)arg2 ;
-(GEONavigationRouteSummary *)routeSummary;
-(void)setRemainingTime:(double)arg1 ;
-(double)distanceToManeuverStart;
-(double)distanceToManeuverEnd;
-(double)distanceToRoute;
-(double)distanceRemainingOnRoute;
-(double)remainingTime;
-(int)navigationState;
-(char)locationUnreliable;
-(void)setNavigationState:(int)arg1 ;
-(GEONavigationGuidanceState *)guidanceState;
-(unsigned)announcementStage;
-(void)setAnnouncementStage:(unsigned)arg1 ;
-(unsigned)nextAnnouncementStage;
-(void)setNextAnnouncementStage:(unsigned)arg1 andTime:(double)arg2 ;
-(double)timeUntilNextAnnouncement;
-(void)setLocationUnreliable:(char)arg1 ;
-(void)setDistanceToManeuverStart:(double)arg1 ;
-(void)setDistanceToManeuverEnd:(double)arg1 ;
-(void)setDistanceToRoute:(double)arg1 ;
-(void)setDistanceRemainingOnRoute:(double)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(GEOComposedRoute *)route;
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
@end

