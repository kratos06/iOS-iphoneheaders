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

@class GEOAddress, NSMutableArray, GEOPDIndexQueryNode, NSString, GEOPDViewportInfo, NSData;

@interface GEOPDSiriSearchParameters : PBCodable <NSCopying> {

	GEOAddress* _address;
	NSMutableArray* _businessCategoryFilters;
	GEOPDIndexQueryNode* _indexFilter;
	unsigned _maxResultCount;
	NSString* _searchString;
	NSMutableArray* _searchSubstringDescriptors;
	int _sortOrder;
	GEOPDViewportInfo* _viewportInfo;
	NSData* _zilchPoints;
	char _isStrictMapRegion;
	char _structuredSearch;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) char hasSortOrder; 
@property (assign,nonatomic) int sortOrder;                                            //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) char hasMaxResultCount; 
@property (assign,nonatomic) unsigned maxResultCount;                                  //@synthesize maxResultCount=_maxResultCount - In the implementation block
@property (nonatomic,readonly) char hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                                  //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) char hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;                         //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (nonatomic,readonly) char hasAddress; 
@property (nonatomic,retain) GEOAddress * address;                                     //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSMutableArray * businessCategoryFilters;                 //@synthesize businessCategoryFilters=_businessCategoryFilters - In the implementation block
@property (assign,nonatomic) char hasIsStrictMapRegion; 
@property (assign,nonatomic) char isStrictMapRegion;                                   //@synthesize isStrictMapRegion=_isStrictMapRegion - In the implementation block
@property (nonatomic,readonly) char hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                                     //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (assign,nonatomic) char hasStructuredSearch; 
@property (assign,nonatomic) char structuredSearch;                                    //@synthesize structuredSearch=_structuredSearch - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchSubstringDescriptors;              //@synthesize searchSubstringDescriptors=_searchSubstringDescriptors - In the implementation block
@property (nonatomic,readonly) char hasIndexFilter; 
@property (nonatomic,retain) GEOPDIndexQueryNode * indexFilter;                        //@synthesize indexFilter=_indexFilter - In the implementation block
-(char)hasSearchString;
-(GEOAddress *)address;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setZilchPoints:(NSData *)arg1 ;
-(char)hasZilchPoints;
-(NSData *)zilchPoints;
-(void)setAddress:(GEOAddress *)arg1 ;
-(char)hasAddress;
-(void)setIndexFilter:(GEOPDIndexQueryNode *)arg1 ;
-(void)setIsStrictMapRegion:(char)arg1 ;
-(void)setHasIsStrictMapRegion:(char)arg1 ;
-(char)hasIsStrictMapRegion;
-(void)setStructuredSearch:(char)arg1 ;
-(void)setHasStructuredSearch:(char)arg1 ;
-(char)hasStructuredSearch;
-(char)hasIndexFilter;
-(char)isStrictMapRegion;
-(char)structuredSearch;
-(GEOPDIndexQueryNode *)indexFilter;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(char)hasViewportInfo;
-(void)setHasSortOrder:(char)arg1 ;
-(char)hasSortOrder;
-(void)setBusinessCategoryFilters:(NSMutableArray *)arg1 ;
-(void)setSearchSubstringDescriptors:(NSMutableArray *)arg1 ;
-(void)addBusinessCategoryFilter:(id)arg1 ;
-(void)addSearchSubstringDescriptor:(id)arg1 ;
-(unsigned)businessCategoryFiltersCount;
-(void)clearBusinessCategoryFilters;
-(id)businessCategoryFilterAtIndex:(unsigned)arg1 ;
-(unsigned)searchSubstringDescriptorsCount;
-(void)clearSearchSubstringDescriptors;
-(id)searchSubstringDescriptorAtIndex:(unsigned)arg1 ;
-(unsigned)maxResultCount;
-(void)setMaxResultCount:(unsigned)arg1 ;
-(void)setHasMaxResultCount:(char)arg1 ;
-(char)hasMaxResultCount;
-(NSMutableArray *)businessCategoryFilters;
-(NSMutableArray *)searchSubstringDescriptors;
-(GEOPDViewportInfo *)viewportInfo;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
