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

@interface _NMRMediaRemoteGetStateMessageProfobuf : PBCodable <NSCopying> {

	double _timestamp;
	NSData* _applicationInfoDigest;
	NSData* _knownDigest;
	NSData* _nowPlayingInfoDigest;
	int _state;
	NSData* _supportedCommandsDigest;
	SCD_Struct_NM2 _has;

}

@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasKnownDigest; 
@property (nonatomic,retain) NSData * knownDigest;                           //@synthesize knownDigest=_knownDigest - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasNowPlayingInfoDigest; 
@property (nonatomic,retain) NSData * nowPlayingInfoDigest;                  //@synthesize nowPlayingInfoDigest=_nowPlayingInfoDigest - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationInfoDigest; 
@property (nonatomic,retain) NSData * applicationInfoDigest;                 //@synthesize applicationInfoDigest=_applicationInfoDigest - In the implementation block
@property (nonatomic,readonly) BOOL hasSupportedCommandsDigest; 
@property (nonatomic,retain) NSData * supportedCommandsDigest;               //@synthesize supportedCommandsDigest=_supportedCommandsDigest - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setNowPlayingInfoDigest:(NSData *)arg1 ;
-(void)setApplicationInfoDigest:(NSData *)arg1 ;
-(void)setSupportedCommandsDigest:(NSData *)arg1 ;
-(NSData *)nowPlayingInfoDigest;
-(NSData *)applicationInfoDigest;
-(NSData *)supportedCommandsDigest;
-(void)setKnownDigest:(NSData *)arg1 ;
-(BOOL)hasKnownDigest;
-(BOOL)hasNowPlayingInfoDigest;
-(BOOL)hasApplicationInfoDigest;
-(BOOL)hasSupportedCommandsDigest;
-(NSData *)knownDigest;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

