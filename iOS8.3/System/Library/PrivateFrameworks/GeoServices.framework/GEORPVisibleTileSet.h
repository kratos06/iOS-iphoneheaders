/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:38 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEORPVisibleTileSet : PBCodable <NSCopying> {

	SCD_Struct_GE193* _tileKeys;
	unsigned _tileKeysCount;
	unsigned _tileKeysSpace;
	unsigned _identifier;
	int _style;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) char hasStyle; 
@property (assign,nonatomic) int style;                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) char hasIdentifier; 
@property (assign,nonatomic) unsigned identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned tileKeysCount; 
@property (nonatomic,readonly) SCD_Struct_GE193* tileKeys; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasIdentifier;
-(void)clearTileKeys;
-(void)setHasIdentifier:(char)arg1 ;
-(SCD_Struct_GE193*)tileKeys;
-(void)setTileKeys:(SCD_Struct_GE193*)arg1 count:(unsigned)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)tileKeysCount;
-(SCD_Struct_GE193)tileKeyAtIndex:(unsigned)arg1 ;
-(void)addTileKey:(SCD_Struct_GE193)arg1 ;
-(void)setHasStyle:(char)arg1 ;
-(char)hasStyle;
@end

