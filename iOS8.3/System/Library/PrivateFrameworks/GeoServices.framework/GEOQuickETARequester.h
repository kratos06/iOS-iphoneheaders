/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:38 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOQuickETARequest, GEOETARequest, GEODirectionsRouteRequest, NSString;

@interface GEOQuickETARequester : NSObject {

	GEOQuickETARequest* _request;
	GEOETARequest* _simpleETARequest;
	GEODirectionsRouteRequest* _directionsETARequest;
	NSString* _loggingFacility;

}

@property (nonatomic,copy) NSString * loggingFacility;              //@synthesize loggingFacility=_loggingFacility - In the implementation block
-(void)calculateETALocalizedDescriptionFromOrigin:(id)arg1 toPLOI:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(id)initWithRequest:(id)arg1 ;
-(void)_calculateSimpleETAWithHandler:(/*^block*/id)arg1 ;
-(void)_calculateRoutingETAWithHandler:(/*^block*/id)arg1 ;
-(void)calculateETAWithResponseHandler:(/*^block*/id)arg1 ;
-(NSString *)loggingFacility;
-(void)setLoggingFacility:(NSString *)arg1 ;
@end

