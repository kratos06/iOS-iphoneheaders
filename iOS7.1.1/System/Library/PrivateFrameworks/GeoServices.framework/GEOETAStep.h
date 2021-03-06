/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@interface GEOETAStep : PBCodable <NSCopying> {

	unsigned _expectedTime;
	unsigned _stepID;
	int _zilchPointIndex;
	SCD_Struct_GE61 _has;

}

@property (assign,nonatomic) bool hasStepID; 
@property (assign,nonatomic) unsigned stepID;                      //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) bool hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                //@synthesize expectedTime=_expectedTime - In the implementation block
@property (assign,nonatomic) bool hasZilchPointIndex; 
@property (assign,nonatomic) int zilchPointIndex;                  //@synthesize zilchPointIndex=_zilchPointIndex - In the implementation block
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setHasExpectedTime:(bool)arg1 ;
-(bool)hasExpectedTime;
-(unsigned)expectedTime;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasStepID:(bool)arg1 ;
-(bool)hasStepID;
-(int)zilchPointIndex;
-(void)setZilchPointIndex:(int)arg1 ;
-(void)setHasZilchPointIndex:(bool)arg1 ;
-(bool)hasZilchPointIndex;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)stepID;
@end

