/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:36:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	unsigned mode;
	unsigned passcodeWindowContextID;
	unsigned voiceOverItemChooserWindowContextID;
	unsigned tripleClickSheetWindowContextID;
	unsigned assistiveTouchPort;
	unsigned profileConfiguration;
	unsigned shouldBlockAllEvents : 1;
	unsigned restartingAndWasActiveBeforeRestart : 1;
	unsigned verifyingDeviceUnlockInSAM : 1;
	unsigned isPasscodeViewVisible : 1;
	unsigned isRestricted : 1;
	unsigned overrideAllowsAllTouchLockscreenUIIsShowing : 1;
	unsigned overrideAllowsAllTouchSBMiniAlertIsShowing : 1;
	unsigned overrideAllowsAllTouchCallStateIsChanging : 1;
	unsigned overrideAllowsAllTouchMakingEmergencyCall : 1;
	unsigned overrideIgnoresAllTouchFrontmostAppIsChanging : 1;
	unsigned overrideIgnoresAllTouchWhitelistedAppNotFound : 1;
	unsigned overrideIgnoresAllTouchVerifyingIntegrity : 1;
	unsigned whitelistedLockscreenUIIsShowing : 1;
	unsigned allowsTouch : 1;
	unsigned allowsLockButton : 1;
	unsigned allowsAppExit : 1;
	unsigned allowsHomeButton : 1;
	unsigned allowsVolumeButtons : 1;
	unsigned allowsRingerSwitch : 1;
	unsigned allowsMotion : 1;
	unsigned allowsAutolock : 1;
	unsigned allowsKeyboardTextInput : 1;
	unsigned allowsProximity : 1;
} SCD_Struct_GA0;

typedef struct {
	char field1;
	char field2;
	char field3;
	char field4;
	char field5;
	char field6;
} SCD_Struct_GA1;

typedef struct UIOffset {
	float horizontal;
	float vertical;
} UIOffset;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGPath* CGPathRef;
