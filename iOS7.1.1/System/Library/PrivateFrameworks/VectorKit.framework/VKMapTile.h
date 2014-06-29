/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>
#import <CoreFoundation/NSCopying.h>

@class VKTile, VKRasterTile;

@interface VKMapTile : VKTile <NSCopying> {

	VKTile* _tiles[29];
	unsigned long long _states[29];
	double _stateDates[29];
	id _stateMetas[29];
	VGLColor _localBounds[29];
	VKRasterTile* _rasterized;
	bool _needsRasterization;
	float _maximumStyleZ;
	shared_ptr<vk::InfoMapTile>* _infoMapTile;

}

@property (nonatomic,readonly) float maximumStyleZ;                                 //@synthesize maximumStyleZ=_maximumStyleZ - In the implementation block
@property (nonatomic,retain) VKRasterTile * rasterized;                             //@synthesize rasterized=_rasterized - In the implementation block
@property (assign,nonatomic) bool needsRasterization;                               //@synthesize needsRasterization=_needsRasterization - In the implementation block
@property (assign,nonatomic) shared_ptr<vk::InfoMapTile>* infoMapTile;              //@synthesize infoMapTile=_infoMapTile - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)initWithKey:(const VKTileKey*)arg1 ;
-(void)updateViewDependentStateWithContext:(id)arg1 ;
-(id)detailedDescription;
-(id)tileForLayer:(unsigned long long)arg1 ;
-(float)maximumStyleZ;
-(id)rasterized;
-(unsigned long long)tileStateForLayer:(unsigned long long)arg1 ;
-(shared_ptr<vk::InfoMapTile>*)infoMapTile;
-(void)setInfoMapTile:(shared_ptr<vk::InfoMapTile>*)arg1 ;
-(void)setRasterized:(id)arg1 ;
-(void)setTile:(id)arg1 state:(unsigned long long)arg2 metadata:(id)arg3 forLayer:(unsigned long long)arg4 ;
-(void)setNeedsRasterization:(bool)arg1 ;
-(bool)needsRasterization;
-(void)_setTile:(id)arg1 state:(unsigned long long)arg2 metadata:(id)arg3 forLayer:(unsigned long long)arg4 timestamp:(double)arg5 ;
-(VGLColor)localBoundsForLayer:(unsigned long long)arg1 ;
@end
