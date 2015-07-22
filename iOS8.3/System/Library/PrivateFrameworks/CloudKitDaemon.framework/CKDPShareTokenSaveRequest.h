/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData, CKDPShareIdentifier;

@interface CKDPShareTokenSaveRequest : PBRequest <NSCopying> {

	NSData* _protectedFullToken;
	CKDPShareIdentifier* _shareId;
	NSData* _shortTokenHash;

}

@property (nonatomic,readonly) char hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;              //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) char hasShortTokenHash; 
@property (nonatomic,retain) NSData * shortTokenHash;                    //@synthesize shortTokenHash=_shortTokenHash - In the implementation block
@property (nonatomic,readonly) char hasProtectedFullToken; 
@property (nonatomic,retain) NSData * protectedFullToken;                //@synthesize protectedFullToken=_protectedFullToken - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)protectedFullToken;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)setShortTokenHash:(NSData *)arg1 ;
-(void)setProtectedFullToken:(NSData *)arg1 ;
-(char)hasShareId;
-(char)hasShortTokenHash;
-(char)hasProtectedFullToken;
-(CKDPShareIdentifier *)shareId;
-(NSData *)shortTokenHash;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
