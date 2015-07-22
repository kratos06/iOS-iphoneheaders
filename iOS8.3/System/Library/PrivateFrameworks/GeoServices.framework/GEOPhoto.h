/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:23 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOPhoto : PBCodable <NSCopying> {

	NSMutableArray* _photoInfos;
	int _photoType;
	NSString* _uid;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasPhotoType; 
@property (assign,nonatomic) int photoType;                            //@synthesize photoType=_photoType - In the implementation block
@property (nonatomic,retain) NSMutableArray * photoInfos;              //@synthesize photoInfos=_photoInfos - In the implementation block
@property (nonatomic,readonly) char hasUid; 
@property (nonatomic,retain) NSString * uid;                           //@synthesize uid=_uid - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uid;
-(void)setUid:(NSString *)arg1 ;
-(char)hasUid;
-(void)setPhotoType:(int)arg1 ;
-(id)initWithPlaceDataPhoto:(id)arg1 ;
-(void)addPhotoInfo:(id)arg1 ;
-(id)_photoInfoForSize:(int)arg1 includeSmallerSizes:(char)arg2 ;
-(void)setPhotoInfos:(NSMutableArray *)arg1 ;
-(unsigned)photoInfosCount;
-(void)clearPhotoInfos;
-(id)photoInfoAtIndex:(unsigned)arg1 ;
-(void)setHasPhotoType:(char)arg1 ;
-(char)hasPhotoType;
-(int)photoType;
-(NSMutableArray *)photoInfos;
-(id)_bestURLForSize:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
