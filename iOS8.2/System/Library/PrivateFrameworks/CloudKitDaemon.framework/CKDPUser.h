/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPUserAlias, NSString, CKDPIdentifier;

@interface CKDPUser : PBCodable <NSCopying> {

	CKDPUserAlias* _alias;
	NSString* _firstName;
	CKDPIdentifier* _identifier;
	NSString* _lastName;

}

@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char hasAlias; 
@property (nonatomic,retain) CKDPUserAlias * alias;                    //@synthesize alias=_alias - In the implementation block
@property (nonatomic,readonly) char hasFirstName; 
@property (nonatomic,retain) NSString * firstName;                     //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) char hasLastName; 
@property (nonatomic,retain) NSString * lastName;                      //@synthesize lastName=_lastName - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(CKDPIdentifier *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(CKDPIdentifier *)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasIdentifier;
-(void)setAlias:(CKDPUserAlias *)arg1 ;
-(char)hasAlias;
-(CKDPUserAlias *)alias;
-(char)hasFirstName;
-(char)hasLastName;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

