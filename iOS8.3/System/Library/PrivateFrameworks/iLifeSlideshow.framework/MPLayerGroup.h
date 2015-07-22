/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MPActionableSupportInternal.h>
#import <iLifeSlideshow/MPNavigatorSupportInternal.h>
#import <iLifeSlideshow/MPLayerableSupportInternal.h>
#import <iLifeSlideshow/NSCoding.h>
#import <iLifeSlideshow/NSCopying.h>
#import <iLifeSlideshow/MPAnimationSupport.h>
#import <iLifeSlideshow/MPActionableSupport.h>
#import <iLifeSlideshow/MPAudioSupport.h>
#import <iLifeSlideshow/MPLayerableSupport.h>
#import <iLifeSlideshow/MPNavigatorSupport.h>
#import <iLifeSlideshow/MPGeometrySupport.h>
#import <iLifeSlideshow/MPTimingSupport.h>
#import <iLifeSlideshow/MPActionSupport.h>
#import <iLifeSlideshow/MPAutomaticLayerSupport.h>
#import <iLifeSlideshow/MPManualLayerSupport.h>

@class MPLayerGroupInternal, NSMutableArray, MCPlugParallel, MCContainerParallelizer, MPAudioPlaylist, NSMutableDictionary, NSArray, NSString, NSDictionary;

@interface MPLayerGroup : NSObject <MPActionableSupportInternal, MPNavigatorSupportInternal, MPLayerableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPActionableSupport, MPAudioSupport, MPLayerableSupport, MPNavigatorSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport, MPAutomaticLayerSupport, MPManualLayerSupport> {

	MPLayerGroupInternal* _internal;
	NSMutableArray* _userProvidedVideoPaths;
	NSMutableArray* _userProvidedAudioPaths;
	MCPlugParallel* _plug;
	MCContainerParallelizer* _parallelizer;
	MPAudioPlaylist* _audioPlaylist;
	NSMutableArray* _layers;
	NSMutableDictionary* _layerDictionary;
	id _parent;
	NSMutableDictionary* _authoringOptions;
	NSMutableDictionary* _animationPaths;
	NSMutableDictionary* _actions;

}

@property (assign,nonatomic) unsigned loopingMode; 
@property (assign,nonatomic) CGColorRef backgroundCGColor; 
@property (nonatomic,copy) NSArray * videoPaths; 
@property (nonatomic,copy) NSArray * audioPaths; 
@property (assign,nonatomic) char autoAdjustDuration; 
@property (nonatomic,readonly) NSString * uuid; 
@property (assign,nonatomic) NSDictionary * initialState; 
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(double)videoDuration;
-(void)removeActionForKey:(id)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(double)duration;
-(id)actions;
-(void)setDuration:(double)arg1 ;
-(float)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setContainer:(id)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setScale:(float)arg1 ;
-(id)container;
-(id)observer;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(void)setZPosition:(float)arg1 ;
-(NSString *)uuid;
-(void)cleanup;
-(int)zIndex;
-(void)setZIndex:(int)arg1 ;
-(float)rotationAngle;
-(void)setRotationAngle:(float)arg1 ;
-(id)objectID;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(id)allEffects;
-(void)addLayer:(id)arg1 ;
-(id)layers;
-(void)finalize;
-(float)zPosition;
-(id)parentDocument;
-(id)actionableObjectForID:(id)arg1 ;
-(void)configureActions;
-(id)plugID;
-(void)copyActions:(id)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(char)isTriggered;
-(void)setIsTriggered:(char)arg1 ;
-(id)animationPaths;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(void)copyStruct:(id)arg1 ;
-(id)audioPlaylist;
-(char)autoAdjustDuration;
-(void)resetDuration;
-(unsigned)loopingMode;
-(void)setAudioPlaylist:(id)arg1 ;
-(void)setPlug:(id)arg1 ;
-(id)authoringOptions;
-(int)countOfLayers;
-(NSArray *)videoPaths;
-(void)setAuthoringOption:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)audioPaths;
-(void)setAudioPaths:(NSArray *)arg1 ;
-(void)removeAllLayers;
-(void)addLayers:(id)arg1 ;
-(void)setUsedAllPaths:(char)arg1 ;
-(void)setLastSlideUsed:(int)arg1 ;
-(id)navigatorKey;
-(void)setLayer:(id)arg1 forKey:(id)arg2 ;
-(id)authoredVersionInfo;
-(id)styleID;
-(void)setBackgroundCGColor:(CGColorRef)arg1 ;
-(id)mainLayers;
-(void)removeLayersAtIndices:(id)arg1 ;
-(void)setAuthoredVersionInfo:(id)arg1 ;
-(void)reconnectAll;
-(void)reconfigureLoopingMode;
-(void)setLoopingMode:(unsigned)arg1 ;
-(id)objectInLayersAtIndex:(int)arg1 ;
-(void)setVideoPaths:(NSArray *)arg1 ;
-(char)detectFacesInBackground;
-(id)orderedVideoPaths;
-(void)setAuthoringOptions:(id)arg1 ;
-(unsigned)setStyleID:(id)arg1 ;
-(id)authoringOptionForKey:(id)arg1 ;
-(double)numberOfLoops;
-(void)setNumberOfLoops:(double)arg1 ;
-(void)cachePaths;
-(id)allSlides:(char)arg1 ;
-(void)addVideoPath:(id)arg1 ;
-(void)addVideoPaths:(id)arg1 ;
-(void)addAudioPath:(id)arg1 ;
-(void)addAudioPaths:(id)arg1 ;
-(void)removePath:(id)arg1 ;
-(void)removePaths:(id)arg1 ;
-(void)removeAllVideoPaths;
-(void)removeAllAudioPaths;
-(void)insertLayers:(id)arg1 atIndex:(int)arg2 ;
-(void)removeLayerForKey:(id)arg1 ;
-(void)moveLayersFromIndices:(id)arg1 toIndex:(int)arg2 ;
-(id)layerForKey:(id)arg1 ;
-(id)plug;
-(CGColorRef)backgroundCGColor;
-(id)keyedLayers;
-(id)allEffectContainers;
-(id)allSongs;
-(double)posterTime;
-(void)setIsDocumentLayerGroup:(char)arg1 ;
-(id)absoluteVideoPaths;
-(char)nearingEndWithOptions:(id)arg1 ;
-(double)aspectRatioDidChange:(float)arg1 atTime:(double)arg2 ;
-(char)layersCanPositionZIndex;
-(id)valueInLayersWithName:(id)arg1 ;
-(void)insertObject:(id)arg1 inLayersAtIndex:(int)arg2 ;
-(void)removeObjectFromLayersAtIndex:(int)arg1 ;
-(void)replaceObjectInLayersAtIndex:(int)arg1 withObject:(id)arg2 ;
-(float)xRotationAngle;
-(float)yRotationAngle;
-(void)copyAudioPlaylist:(id)arg1 ;
-(void)setXRotationAngle:(float)arg1 ;
-(void)setYRotationAngle:(float)arg1 ;
-(void)setBackgroundColorString:(id)arg1 ;
-(void)setStartsPaused:(char)arg1 ;
-(void)setDurationPadding:(double)arg1 ;
-(double)timeIn;
-(char)startsPaused;
-(id)layerKeyDictionary;
-(id)layerKey;
-(double)durationPadding;
-(id)liveLock;
-(void)setAutoAdjustDuration:(char)arg1 ;
-(NSDictionary *)initialState;
-(void)setInitialState:(NSDictionary *)arg1 ;
-(void)copyLayers:(id)arg1 ;
-(void)copyLayerDictionary:(id)arg1 ;
-(int)lastSlideUsed;
@end
