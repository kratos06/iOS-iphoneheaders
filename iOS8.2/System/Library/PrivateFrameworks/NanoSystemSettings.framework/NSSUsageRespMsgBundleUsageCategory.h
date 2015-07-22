/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/nanosystemsettingsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanosystemsettingsd/nanosystemsettingsd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <nanosystemsettingsd/NSCopying.h>

@class NSString;

@interface NSSUsageRespMsgBundleUsageCategory : PBCodable <NSCopying> {

	unsigned long long _usageInBytes;
	NSString* _name;

}

@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long usageInBytes;              //@synthesize usageInBytes=_usageInBytes - In the implementation block
-(unsigned long long)usageInBytes;
-(void)setUsageInBytes:(unsigned long long)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
@end
