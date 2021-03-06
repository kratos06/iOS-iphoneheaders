/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@class GEOVoltaireRasterTileTrafficData, NSMutableArray, VKSharedResources, NSArray;

@interface VKRasterTrafficTile : VKTile {

	GEOVoltaireRasterTileTrafficData* _modelTile;
	NSMutableArray* _incidents;
	VKSharedResources* _sharedResources;
	unique_ptr<vk::TrafficLayer, std::__1::default_delete<vk::TrafficLayer> >* _trafficLayer;

}

@property (nonatomic,readonly) NSArray * incidents;                     //@synthesize incidents=_incidents - In the implementation block
@property (nonatomic,readonly) TrafficLayer* trafficLayer; 
-(void)dealloc;
-(TrafficLayer*)trafficLayer;
-(NSArray *)incidents;
-(id)initWithKey:(const VKTileKey*)arg1 downloadKey:(const GEOTileKey*)arg2 sharedResources:(id)arg3 trafficData:(id)arg4 ;
-(void)_buildGGLLayer:(Device*)arg1 ;
-(void)_buildIncidents;
@end

