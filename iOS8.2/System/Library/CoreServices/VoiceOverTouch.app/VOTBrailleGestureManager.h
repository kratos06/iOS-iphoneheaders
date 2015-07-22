/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vot/VOTGesturedTextInputManager.h>
#import <vot/VOTBrailleGestureTranslatorDelegate.h>
#import <vot/BKSAccelerometerDelegate.h>

@protocol VOTBrailleGestureManagerDelegate;
@class NSMutableArray, VOTBrailleGestureTranslator, VOTBrailleGestureSpellingSuggestionHandler, BKSAccelerometer, NSMutableDictionary, NSString, NSDictionary, AXTimer, NSArray;

@interface VOTBrailleGestureManager : VOTGesturedTextInputManager <VOTBrailleGestureTranslatorDelegate, BKSAccelerometerDelegate> {

	NSMutableArray* _queuedSeriesOfTouchPoints;
	VOTBrailleGestureTranslator* _gestureTranslator;
	VOTBrailleGestureSpellingSuggestionHandler* _spellingSuggestionHandler;
	BKSAccelerometer* _accelerometer;
	NSMutableDictionary* _allTouchLocationsByIdentifier;
	NSMutableDictionary* _firstTouchLocationsByIdentifier;
	char _shouldUpdateDotPositions;
	char _exploring;
	char _didMoveFingersTooFarForInput;
	char _didAnnounceExplorationMode;
	char _didAnnounceBrailleTypingProperties;
	char _didStartFullGesture;
	char _didEnterInvalidGesture;
	id<VOTBrailleGestureManagerDelegate> _brailleGestureManagerDelegate;
	int _keyboardOrientation;
	int _typingMode;
	NSString* _lastPrintBrailleCharacter;
	NSDictionary* _lastTouchLocationsByIdentifier;
	AXTimer* _speakingDelayTimer;
	AXTimer* _brailleTypingPropertiesAnnouncementTimer;
	AXTimer* _warningTonesTimer;
	NSArray* _calibrationStartTouchPoints;

}

@property (assign,nonatomic) id<VOTBrailleGestureManagerDelegate> brailleGestureManagerDelegate;              //@synthesize brailleGestureManagerDelegate=_brailleGestureManagerDelegate - In the implementation block
@property (assign,nonatomic) char shouldUpdateDotPositions;                                                   //@synthesize shouldUpdateDotPositions=_shouldUpdateDotPositions - In the implementation block
@property (assign,getter=isExploring,nonatomic) char exploring;                                               //@synthesize exploring=_exploring - In the implementation block
@property (assign,nonatomic) char didMoveFingersTooFarForInput;                                               //@synthesize didMoveFingersTooFarForInput=_didMoveFingersTooFarForInput - In the implementation block
@property (assign,nonatomic) char didAnnounceExplorationMode;                                                 //@synthesize didAnnounceExplorationMode=_didAnnounceExplorationMode - In the implementation block
@property (assign,nonatomic) char didAnnounceBrailleTypingProperties;                                         //@synthesize didAnnounceBrailleTypingProperties=_didAnnounceBrailleTypingProperties - In the implementation block
@property (assign,nonatomic) int keyboardOrientation;                                                         //@synthesize keyboardOrientation=_keyboardOrientation - In the implementation block
@property (assign,nonatomic) int typingMode;                                                                  //@synthesize typingMode=_typingMode - In the implementation block
@property (nonatomic,copy) NSString * lastPrintBrailleCharacter;                                              //@synthesize lastPrintBrailleCharacter=_lastPrintBrailleCharacter - In the implementation block
@property (nonatomic,retain) NSDictionary * lastTouchLocationsByIdentifier;                                   //@synthesize lastTouchLocationsByIdentifier=_lastTouchLocationsByIdentifier - In the implementation block
@property (nonatomic,retain) AXTimer * speakingDelayTimer;                                                    //@synthesize speakingDelayTimer=_speakingDelayTimer - In the implementation block
@property (nonatomic,retain) AXTimer * brailleTypingPropertiesAnnouncementTimer;                              //@synthesize brailleTypingPropertiesAnnouncementTimer=_brailleTypingPropertiesAnnouncementTimer - In the implementation block
@property (nonatomic,retain) AXTimer * warningTonesTimer;                                                     //@synthesize warningTonesTimer=_warningTonesTimer - In the implementation block
@property (assign,nonatomic) char didStartFullGesture;                                                        //@synthesize didStartFullGesture=_didStartFullGesture - In the implementation block
@property (assign,nonatomic) char didEnterInvalidGesture;                                                     //@synthesize didEnterInvalidGesture=_didEnterInvalidGesture - In the implementation block
@property (nonatomic,retain) NSArray * calibrationStartTouchPoints;                                           //@synthesize calibrationStartTouchPoints=_calibrationStartTouchPoints - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_languageCode;
-(char)_shouldUseEightDotBraille;
-(void)didInputBackspace;
-(char)_shouldUseContractedBraille;
-(void)setTypingMode:(int)arg1 ;
-(void)clearCurrentString;
-(char)shouldAllowRotorEvents;
-(char)isNextSuggestionEvent:(id)arg1 ;
-(char)isPreviousSuggestionEvent:(id)arg1 ;
-(char)isReturnKeyEvent:(id)arg1 ;
-(void)pressReturnKeyForElement:(id)arg1 ;
-(char)isSpaceEvent:(id)arg1 ;
-(void)inputSpaceForElement:(id)arg1 ;
-(char)isBackspaceEvent:(id)arg1 ;
-(char)performCustomBackspace;
-(void)applyPreviousSuggestionToElement:(id)arg1 ;
-(void)applyNextSuggestionToElement:(id)arg1 ;
-(char)isLaunchAppEvent:(id)arg1 ;
-(id)hintForAppLaunch;
-(char)processTapWithFingerCount:(unsigned)arg1 ;
-(char)processEvent:(id)arg1 ;
-(void)setBrailleGestureManagerDelegate:(id<VOTBrailleGestureManagerDelegate>)arg1 ;
-(char)processTouchLocations:(id)arg1 isFirstTouch:(char)arg2 ;
-(void)setDidStartFullGesture:(char)arg1 ;
-(void)setDidAnnounceBrailleTypingProperties:(char)arg1 ;
-(void)_updateShouldUseContractedBraille;
-(void)_updateBrailleTypingPropertiesAndDelayAnnouncement:(char)arg1 ;
-(int)keyboardOrientation;
-(void)_handleCalibrationTimeout;
-(void)_cleanUpTouchesIncludingCalibrationStartPoints:(char)arg1 ;
-(char)_isNextBrailleModeEvent:(id)arg1 ;
-(void)_handleChangeBrailleMode:(char)arg1 ;
-(char)_isPreviousBrailleModeEvent:(id)arg1 ;
-(char)_isTranslateImmediatelyEvent:(id)arg1 ;
-(void)_handleTranslateImmediately;
-(char)didStartFullGesture;
-(NSDictionary *)lastTouchLocationsByIdentifier;
-(void)setLastTouchLocationsByIdentifier:(NSDictionary *)arg1 ;
-(char)_handleAllFingersLifted;
-(void)setShouldUpdateDotPositions:(char)arg1 ;
-(void)_handleFingersOnScreen:(id)arg1 didAddOrRemoveFingers:(char)arg2 ;
-(void)_sendQueuedSeriesOfTouchPoints;
-(void)_playBonk;
-(void)_speakText:(id)arg1 useKeyboardLanguage:(char)arg2 ;
-(void)_flashInsertedTextIfAllowed:(id)arg1 ;
-(void)_clearQueuedSeriesOfTouchPoints;
-(void)_handleChosenSuggestion:(id)arg1 ;
-(void)_speakPrintBrailleForContractedInputTouchPoints:(id)arg1 isInsert:(char)arg2 isDelete:(char)arg3 ;
-(id)_spokenStringForPrintBraille:(id)arg1 useLongForm:(char)arg2 ;
-(void)_speakText:(id)arg1 useKeyboardLanguage:(char)arg2 shouldQueue:(char)arg3 isInsert:(char)arg4 isDelete:(char)arg5 ;
-(void)_updateBrailleUI;
-(char)_deviceSupportsMoreThanFiveTouches;
-(void)_appendOrientationToAnnouncement:(id)arg1 ;
-(id)_descriptionForCurrentBrailleMode;
-(char)_hasContractedBraillePreference;
-(char)_canUseContractedBraille;
-(void)_speakText:(id)arg1 hint:(id)arg2 ;
-(AXTimer *)brailleTypingPropertiesAnnouncementTimer;
-(void)setKeyboardOrientation:(int)arg1 ;
-(id<VOTBrailleGestureManagerDelegate>)brailleGestureManagerDelegate;
-(char)didAnnounceBrailleTypingProperties;
-(void)setBrailleTypingPropertiesAnnouncementTimer:(AXTimer *)arg1 ;
-(void)_announceBrailleTypingPropertiesIncludingOrientation:(char)arg1 typingMode:(char)arg2 brailleMode:(char)arg3 ;
-(char)_patternIncludesEveryFinger:(id)arg1 ;
-(void)setExploring:(char)arg1 ;
-(void)_speakPrintBrailleForExploration;
-(char)shouldUpdateDotPositions;
-(NSString *)lastPrintBrailleCharacter;
-(void)_updateDotNumberCirclesForPrintBraille:(id)arg1 ;
-(void)setDidAnnounceExplorationMode:(char)arg1 ;
-(void)_cancelWarningTones;
-(AXTimer *)speakingDelayTimer;
-(void)setSpeakingDelayTimer:(AXTimer *)arg1 ;
-(id)_spokenStringForPrintBraille:(id)arg1 ;
-(char)didAnnounceExplorationMode;
-(id)_stringWithFirstPart:(id)arg1 secondPart:(id)arg2 ;
-(void)_enumerateDotNumbersForPrintBraille:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSArray *)calibrationStartTouchPoints;
-(void)_inputBrailleFromTouchPoints:(id)arg1 ;
-(void)setCalibrationStartTouchPoints:(NSArray *)arg1 ;
-(char)isExploring;
-(char)didMoveFingersTooFarForInput;
-(char)didEnterInvalidGesture;
-(id)_printBrailleForTouchPoints:(id)arg1 ;
-(char)_isCalibrationEndPattern:(id)arg1 ;
-(id)_touchPointsForCalibrationGivenFirstPoints:(id)arg1 lastPoints:(id)arg2 ;
-(void)_calibrateWithTouchPoints:(id)arg1 ;
-(void)_inputBrailleFromSeriesOfTouchPoints:(id)arg1 ;
-(char)_isCalibrationStartPattern:(id)arg1 ;
-(void)setDidMoveFingersTooFarForInput:(char)arg1 ;
-(void)setDidEnterInvalidGesture:(char)arg1 ;
-(void)setLastPrintBrailleCharacter:(NSString *)arg1 ;
-(void)_endExploringDotPatterns;
-(id)_newBrailleInput;
-(void)_scheduleExploringModeIfNeeded;
-(AXTimer *)warningTonesTimer;
-(void)setWarningTonesTimer:(AXTimer *)arg1 ;
-(void)_beginExploringDotPatterns;
-(void)_playWarningTones:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(id)_languageCodeWithValidLanguageCodes:(id)arg1 ;
-(void)_speakText:(id)arg1 useKeyboardLanguage:(char)arg2 shouldQueue:(char)arg3 ;
-(void)_speakText:(id)arg1 hint:(id)arg2 useKeyboardLanguage:(char)arg3 shouldQueue:(char)arg4 isInsert:(char)arg5 isDelete:(char)arg6 ;
-(void)_playWarningTone;
-(unsigned)_numberOfDots;
-(int)typingMode;
-(void)dealloc;
-(id)init;
-(void)setActive:(char)arg1 ;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2 ;
-(void)updateWithString:(id)arg1 ;
@end
