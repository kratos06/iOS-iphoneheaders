/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:39 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, NSDictionary;

@interface GEOBatchRevGeocodeResponse : PBCodable <NSCopying> {

	double _timestamp;
	NSMutableArray* _batchPlaceResults;
	NSMutableArray* _clusters;
	int _statusCode;
	unsigned _ttl;
	unsigned _version;
	NSMutableArray* _versionDomains;
	SCD_Struct_GE49 _has;

}

@property (nonatomic,retain) NSDictionary * httpHeaders; 
@property (assign,nonatomic) char hasStatusCode; 
@property (assign,nonatomic) int statusCode;                                  //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * clusters;                       //@synthesize clusters=_clusters - In the implementation block
@property (nonatomic,retain) NSMutableArray * batchPlaceResults;              //@synthesize batchPlaceResults=_batchPlaceResults - In the implementation block
@property (assign,nonatomic) char hasTtl; 
@property (assign,nonatomic) unsigned ttl;                                    //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,retain) NSMutableArray * versionDomains;                 //@synthesize versionDomains=_versionDomains - In the implementation block
@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) unsigned version;                                //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(char)hasTimestamp;
-(NSDictionary *)httpHeaders;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(unsigned)ttl;
-(NSMutableArray *)versionDomains;
-(unsigned)batchPlaceResultsCount;
-(NSMutableArray *)batchPlaceResults;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(char)arg1 ;
-(char)hasStatusCode;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(void)addVersionDomain:(id)arg1 ;
-(unsigned)versionDomainsCount;
-(void)clearVersionDomains;
-(id)versionDomainAtIndex:(unsigned)arg1 ;
-(void)setTtl:(unsigned)arg1 ;
-(void)setHasTtl:(char)arg1 ;
-(char)hasTtl;
-(void)setClusters:(NSMutableArray *)arg1 ;
-(void)setBatchPlaceResults:(NSMutableArray *)arg1 ;
-(void)addCluster:(id)arg1 ;
-(void)addBatchPlaceResult:(id)arg1 ;
-(unsigned)clustersCount;
-(void)clearClusters;
-(id)clusterAtIndex:(unsigned)arg1 ;
-(void)clearBatchPlaceResults;
-(id)batchPlaceResultAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)clusters;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasVersion:(char)arg1 ;
-(char)hasVersion;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

