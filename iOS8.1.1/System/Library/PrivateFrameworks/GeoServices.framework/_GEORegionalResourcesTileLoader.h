/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, GEORegionalResourceTileData, GEOResourceManifestConfiguration;

@interface _GEORegionalResourcesTileLoader : NSObject {

	NSMutableArray* _pendingDownloads;
	GEORegionalResourceTileData* _tile;
	/*^block*/id _finishedHandler;
	/*^block*/id _errorHandler;
	BOOL _canceled;
	GEOResourceManifestConfiguration* _manifestConfiguration;

}
-(void)cancel;
-(void)dealloc;
-(void)_loadNextResource;
-(void)loadResourcesForTileKey:(const GEOTileKey*)arg1 manifestConfiguration:(id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(id)_destinationPathForResource:(id)arg1 ;
-(BOOL)_loadRegionalResourceFromFilesystemIfPossible:(id)arg1 resourceChecksum:(id)arg2 ;
-(void)_addDownloadForName:(id)arg1 ofType:(long long)arg2 baseURLString:(id)arg3 expectedChecksum:(id)arg4 ;
@end

