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

@class NSString;

@interface GEOPhotoInfo : PBCodable <NSCopying> {

	int _size;
	NSString* _url;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasSize; 
@property (assign,nonatomic) int size;                    //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) char hasUrl; 
@property (nonatomic,retain) NSString * url;              //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(int)size;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasUrl;
-(id)initWithPlaceDataPhotoContent:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasSize;
-(void)setHasSize:(char)arg1 ;
@end
