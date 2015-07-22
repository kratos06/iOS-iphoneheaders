/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOPlaceSearchRequest.h>

@interface GEOGeocodeRequest : GEOPlaceSearchRequest {

	unsigned short _geocodeProvider;

}

@property (assign,nonatomic) unsigned short geocodeProvider;              //@synthesize geocodeProvider=_geocodeProvider - In the implementation block
-(id)initReverseGeocodeWithCoordinate:(SCD_Struct_GE14)arg1 ;
-(id)initForwardGeocodeWithAddress:(id)arg1 ;
-(id)initReverseGeocodeWithCoordinate:(SCD_Struct_GE14)arg1 includeBusinessOptions:(char)arg2 ;
-(id)initForwardGeocodeWithAddressDictionary:(id)arg1 ;
-(id)initForwardGeocodeWithAddressString:(id)arg1 ;
-(unsigned short)geocodeProvider;
-(void)setGeocodeProvider:(unsigned short)arg1 ;
-(id)initWithAddress:(id)arg1 maxResults:(int)arg2 traits:(id)arg3 ;
-(id)initWithCoordinate:(SCD_Struct_GE14)arg1 includeEntryPoints:(char)arg2 traits:(id)arg3 ;
@end
