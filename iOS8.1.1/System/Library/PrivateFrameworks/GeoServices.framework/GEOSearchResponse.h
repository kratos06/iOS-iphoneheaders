/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOPlaceSearchResponse.h>

@class NSMapTable;

@interface GEOSearchResponse : GEOPlaceSearchResponse {

	NSMapTable* _attributionKeysToInfo;

}
-(void)_mapItemsWithTraits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)_addAttributionInfo:(id)arg1 ;
-(id)attributionInfoForSourceIdentifier:(id)arg1 sourceVersion:(unsigned)arg2 ;
@end

