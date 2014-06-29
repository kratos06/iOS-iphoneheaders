/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoutingControllerDelegate.h>

@class MPAVRoutingController;

@interface RCAudioRouteController : NSObject <MPAVRoutingControllerDelegate> {

	bool _reportUserDefaultForRouteSetting;
	bool _defaultSettingsApplied;
	MPAVRoutingController* _routingController;
	long long _lastPickedRCRoute;
	bool _voiceMemoSettingsEnabled;
	bool _expectsFaceContactWhenHandsetSelected;
	unsigned long long _availableRoutesMask;

}

@property (assign,nonatomic) bool voiceMemoSettingsEnabled;                           //@synthesize voiceMemoSettingsEnabled=_voiceMemoSettingsEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long availableRoutesMask;                //@synthesize availableRoutesMask=_availableRoutesMask - In the implementation block
@property (assign,nonatomic) bool expectsFaceContactWhenHandsetSelected;              //@synthesize expectsFaceContactWhenHandsetSelected=_expectsFaceContactWhenHandsetSelected - In the implementation block
@property (nonatomic,readonly) bool speakerRouteIsPicked; 
@property (nonatomic,readonly) bool wirelessRouteIsPicked; 
+(id)sharedRouteController;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(bool)speakerRouteIsPicked;
-(bool)wirelessRouteIsPicked;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(unsigned long long)availableRoutesMask;
-(void)showAvailableRoutes;
-(void)toggleSpeaker;
-(void)setExpectsFaceContactWhenHandsetSelected:(bool)arg1 ;
-(void)setVoiceMemoSettingsEnabled:(bool)arg1 ;
-(bool)voiceMemoSettingsEnabled;
-(void)applyVoiceMemoSettings;
-(void)_initializeRouteControllers;
-(void)_AVAudioSessionRouteChangeNotification:(id)arg1 ;
-(bool)_speakerIsUserDefaultRoute;
-(void)_setShouldRouteToSpeakerUserDefaultValue:(bool)arg1 ;
-(void)_pickAudioDeviceRouteType:(long long)arg1 ;
-(bool)_AVAudioSessionSpeakerRouteIsPickedOutputType;
-(bool)_AVAudioSessionWirelessRouteIsPickedOutputType;
-(void)_updateProximitySetting;
-(unsigned long long)_availableRoutesMask;
-(void)_applyUserDefaultAudioRoute;
-(void)_initializePreviewControllerOutputRouteCategoryIfNecessaryWithCompletionBlock:(/*^block*/ id)arg1 ;
-(unsigned long long)_updatedCachedRouteMask;
-(unsigned long long)_RCAudioRouteMaskForPickedAVAudioSessionOutputType;
-(void)_updateSpeakerRouteDefault;
-(bool)_AVAudioSessionHandsetRouteIsPickedOutputType;
-(long long)_voiceMemosRouteTypeForRoute:(id)arg1 ;
-(bool)_routeDefaultBoolForKey:(id)arg1 nonVoiceMemoAppValue:(bool)arg2 ;
-(bool)_AVAudioSessionReceiverRouteIsPickedOutputType;
-(void)_pickSpeakerAudioDeviceRoute;
-(void)_pickHandsetAudioDeviceRoute;
-(bool)expectsFaceContactWhenHandsetSelected;
@end
