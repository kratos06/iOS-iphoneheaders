/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoMediaRemote/NSCopying.h>

@class NSData;

@interface _NMRMediaRemoteSetArtworkMessage : PBCodable <NSCopying> {

	double _timestamp;
	NSData* _jpegData;
	NSData* _originalDigest;
	SCD_Struct_NM1 _has;

}

@property (nonatomic,readonly) BOOL hasJpegData; 
@property (nonatomic,retain) NSData * jpegData;                     //@synthesize jpegData=_jpegData - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalDigest; 
@property (nonatomic,retain) NSData * originalDigest;               //@synthesize originalDigest=_originalDigest - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setJpegData:(NSData *)arg1 ;
-(void)setOriginalDigest:(NSData *)arg1 ;
-(BOOL)hasJpegData;
-(BOOL)hasOriginalDigest;
-(NSData *)jpegData;
-(NSData *)originalDigest;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
