/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOMapItem;
@class RTPredictedLocationOfInterest, RTLOIDisplayInfo;

@interface RTPLOIETA : NSObject {

	RTPredictedLocationOfInterest* _ploi;
	id<GEOMapItem> _origin;
	unsigned _responseETASeconds;
	unsigned _baselineETASeconds;
	RTLOIDisplayInfo* _displayInfo;

}

@property (nonatomic,readonly) RTPredictedLocationOfInterest * ploi;              //@synthesize ploi=_ploi - In the implementation block
-(id)description;
-(id)localizedDescription;
-(id)_preferredName;
-(id)_displayInfoForDate:(id)arg1 ;
-(id)displayInfo;
-(id)initWithPLOI:(id)arg1 origin:(id)arg2 responseETASeconds:(unsigned)arg3 baselineETASeconds:(unsigned)arg4 ;
-(id)_urlName;
-(BOOL)etaExceedsMinimumETA:(unsigned)arg1 ;
-(BOOL)hasEquivalentDisplayTo:(id)arg1 ;
-(RTPredictedLocationOfInterest *)ploi;
-(id)mapsURL;
@end
