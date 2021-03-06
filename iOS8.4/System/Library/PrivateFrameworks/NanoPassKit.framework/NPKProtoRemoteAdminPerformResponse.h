/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoPassKit/NSCopying.h>

@class NSData;

@interface NPKProtoRemoteAdminPerformResponse : PBCodable <NSCopying> {

	NSData* _responseDictionary;
	unsigned _resultCode;

}

@property (assign,nonatomic) unsigned resultCode;                       //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,readonly) BOOL hasResponseDictionary; 
@property (nonatomic,retain) NSData * responseDictionary;               //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)resultCode;
-(void)setResultCode:(unsigned)arg1 ;
-(BOOL)hasResponseDictionary;
-(NSData *)responseDictionary;
-(void)setResponseDictionary:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

