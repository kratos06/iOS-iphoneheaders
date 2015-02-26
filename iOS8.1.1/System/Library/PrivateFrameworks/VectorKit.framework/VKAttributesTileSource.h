/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorTileSource.h>

@interface VKAttributesTileSource : VKVectorTileSource
-(long long)tileSize;
-(id)initWithTileSet:(id)arg1 tileGroupIdentifier:(unsigned)arg2 locale:(id)arg3 ;
-(BOOL)minimumZoomLevelBoundsCamera;
-(BOOL)maximumZoomLevelBoundsCamera;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(unsigned)minimumDownloadZoomLevel;
-(unsigned)maximumDownloadZoomLevel;
-(long long)zEquivalenceClass;
@end
