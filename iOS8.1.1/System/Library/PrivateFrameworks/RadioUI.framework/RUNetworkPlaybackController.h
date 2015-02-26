/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, AVAssetCache;

@interface RUNetworkPlaybackController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _highQualityAssetFlavor;
	double _minimumBitrateForHighQuality;
	AVAssetCache* _assetCache;

}

@property (nonatomic,readonly) AVAssetCache * assetCache;                           //@synthesize assetCache=_assetCache - In the implementation block
@property (nonatomic,copy,readonly) NSString * highQualityAssetFlavor; 
@property (nonatomic,readonly) double minimumBitrateForHighQuality; 
+(id)sharedController;
-(void)dealloc;
-(id)init;
-(id)_init;
-(AVAssetCache *)assetCache;
-(double)minimumBitrateForHighQuality;
-(NSString *)highQualityAssetFlavor;
-(void)_updateForLoadedStoreBag:(id)arg1 ;
-(void)_radioStoreBagDidLoadNotification:(id)arg1 ;
@end
