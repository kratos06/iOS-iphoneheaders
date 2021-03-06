/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol AXCameraTorchManager;
@class AXTimer, NSDictionary, NSArray, AXNotificationHandler;

@interface AXVisualAlertManager : NSObject {

	unsigned _alertTypes;
	<AXCameraTorchManager>* _cameraTorchManager;
	AXTimer* _timer;
	AXTimer* _torchForceShutdownTimer;
	NSDictionary* _patterns;
	NSDictionary* _activePattern;
	unsigned _activePatternCursor;
	BOOL _shouldRepeatPattern;
	NSDictionary* _patternToUseForVisualAlertAfterCaptureSessionStopsRunning;
	NSArray* _notificationHandlers;
	AXNotificationHandler* _deviceLockStateChangedNotificationHandler;
	AXNotificationHandler* _torchInControlCenterWasEnabledNotificationHandler;
	BOOL _torchDeviceOpen;
	BOOL _torchDeviceOn;
	BOOL _isDeviceLocked;
	BOOL _isQuietModeEnabled;
	BOOL _isTorchEnabledInControlCenter;
	BOOL _captureSessionRunning;
	BOOL _conferenceCallRinging;
	BOOL _skipAutomaticStopOnUserInteraction;
	unsigned _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;

}

@property (nonatomic,readonly) NSDictionary * _patterns; 
@property (setter=_setActivePattern:,nonatomic,retain) NSDictionary * _activePattern;                                                                                          //@synthesize activePattern=_activePattern - In the implementation block
@property (assign,setter=_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:,nonatomic) unsigned _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;              //@synthesize typeToUseForVisualAlertAfterCaptureSessionStopsRunning=_typeToUseForVisualAlertAfterCaptureSessionStopsRunning - In the implementation block
@property (assign,setter=_setTorchDeviceOpen:,getter=_isTorchDeviceOpen,nonatomic) BOOL _torchDeviceOpen;                                                                      //@synthesize torchDeviceOpen=_torchDeviceOpen - In the implementation block
@property (assign,setter=_setTorchDeviceOn:,getter=_isTorchDeviceOn,nonatomic) BOOL _torchDeviceOn;                                                                            //@synthesize torchDeviceOn=_torchDeviceOn - In the implementation block
+(void)initialize;
+(id)sharedVisualAlertManager;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)stop;
-(void)_stop;
-(void)startForAlertTypes:(unsigned)arg1 cameraTorchManager:(id)arg2 ;
-(void)_handleVisualAlertForIncomingMessage;
-(void)_handleVisualAlertForRegularNotification;
-(void)_handleEndVisualAlertForAlarm;
-(void)_handleBeginVisualAlertForAlarmWithSound:(BOOL)arg1 ;
-(BOOL)_isTorchEnabledInControlCenter;
-(void)_insertCustomLogicForSystemWideServer;
-(BOOL)_axShouldHandleVisualAlertsForConferenceCallsInConferenceFramework;
-(void)_handleBeginVisualAlertForIncomingCall;
-(void)_handleBeginVisualAlertForIncomingConferenceCall;
-(void)_handleEndVisualAlertForIncomingCall;
-(void)_handleEndVisualAlertForIncomingConferenceCall;
-(void)_handleVisualAlertForExternalApplication;
-(void)_handleLockButtonPressed;
-(void)_handleVolumeChanged;
-(void)_handleDeviceWasLocked;
-(void)_handleDeviceWasUnlocked;
-(void)_handleQuietModeWasEnabled;
-(void)_handleQuietModeWasDisabled;
-(void)_handleTorchInControlCenterWasEnabled;
-(void)_handleTorchInControlCenterWasDisabled;
-(void)_handleCaptureSessionDidStartRunning;
-(void)_handleCaptureSessionDidStopRunning;
-(void)_handleSecondaryVisualAlertManagerDidStart;
-(BOOL)_axHasConferenceCameraTorchManager;
-(void)_handleFaceTimeCallRinging;
-(void)_endVisualAlert;
-(void)_startForAlertTypes:(unsigned)arg1 cameraTorchManager:(id)arg2 ;
-(void)_beginVisualAlertForType:(unsigned)arg1 repeat:(BOOL)arg2 skipAutomaticStopOnUserInteraction:(BOOL)arg3 ;
-(void)_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:(unsigned)arg1 ;
-(id)_patterns;
-(BOOL)_isTorchDeviceOpen;
-(BOOL)_isTorchDeviceOn;
-(id)_normalizedStrobePatternForOriginalPattern:(id)arg1 ;
-(void)_setActivePattern:(id)arg1 ;
-(void)_setTorchDeviceOpen:(BOOL)arg1 ;
-(void)_processNextVisualAlertComponent;
-(void)_setTorchDeviceOn:(BOOL)arg1 ;
-(id)_activePattern;
-(void)_beginVisualAlertForType:(unsigned)arg1 repeat:(BOOL)arg2 ;
-(unsigned)_typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
@end

