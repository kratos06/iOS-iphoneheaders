/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>
#import <VoiceTrigger/MCProfileConnectionObserver.h>

@class NSString;

@interface _VTLockscreenPolicy : _VTStatePolicy <MCProfileConnectionObserver> {

	BOOL _siriRestrictedOnLockScreen;
	unsigned char _lockedState;
	int _lockscreenNotifyToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEnabled;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_registerForLockscreenUpdates;
-(void)_unregisterForLockscreenUpdates;
@end
