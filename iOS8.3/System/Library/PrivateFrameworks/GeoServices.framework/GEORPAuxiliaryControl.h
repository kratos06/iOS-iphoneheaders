/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:13 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEORPCarPlayAuxiliaryControl, GEORPWatchAuxiliaryControl;

@interface GEORPAuxiliaryControl : PBCodable <NSCopying> {

	GEORPCarPlayAuxiliaryControl* _car;
	GEORPWatchAuxiliaryControl* _watch;

}

@property (nonatomic,readonly) char hasWatch; 
@property (nonatomic,retain) GEORPWatchAuxiliaryControl * watch;              //@synthesize watch=_watch - In the implementation block
@property (nonatomic,readonly) char hasCar; 
@property (nonatomic,retain) GEORPCarPlayAuxiliaryControl * car;              //@synthesize car=_car - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setWatch:(GEORPWatchAuxiliaryControl *)arg1 ;
-(void)setCar:(GEORPCarPlayAuxiliaryControl *)arg1 ;
-(char)hasWatch;
-(char)hasCar;
-(GEORPWatchAuxiliaryControl *)watch;
-(GEORPCarPlayAuxiliaryControl *)car;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
