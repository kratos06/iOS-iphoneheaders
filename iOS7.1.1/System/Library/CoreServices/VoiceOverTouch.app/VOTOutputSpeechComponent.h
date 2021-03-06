/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:00:25 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <vot/VOTOutputComponent.h>
#import <AssistantUI/VSSpeechSynthesizerDelegate.h>

@class SCRCThread, VSSpeechSynthesizer, SCRCIndexMap, NSString, NSMutableDictionary, AXDialectMap, VSSpeechRequest;

@interface VOTOutputSpeechComponent : VOTOutputComponent <VSSpeechSynthesizerDelegate> {

	SCRCThread* _speechThread;
	VSSpeechSynthesizer* _synthesizer;
	SCRCIndexMap* _letterPunctuationTable;
	SCRCIndexMap* _wordPunctuationTable;
	SCRCIndexMap* _specialPunctionTable;
	NSString* _spokenLanguage;
	SCRCIndexMap* _languageExceptions;
	BOOL _isSpeaking;
	BOOL _userStopped;
	BOOL _isPaused;
	BOOL _isVolumeCapped;
	float _rawVolume;
	NSMutableDictionary* _speechStatistics;
	NSMutableDictionary* _emoticonReplacements;
	AXDialectMap* _supportedLanguageMap;
	double _lastTimeSpeechStarted;
	SCRCIndexMap* _currentActionVariants;
	VSSpeechRequest* _currentRequest;

}

@property (nonatomic,readonly) BOOL isSpeaking;              //@synthesize isSpeaking=_isSpeaking - In the implementation block
@property (nonatomic,readonly) BOOL isPaused;                //@synthesize isPaused=_isPaused - In the implementation block
-(void)_setAudioSessionProperties:(id)arg1 ;
-(id)currentLanguageMap;
-(void)preprocessAction:(id)arg1 ;
-(void)setUseCompactVoice:(BOOL)arg1 ;
-(void)stopSpeakingAtBoundary:(int)arg1 allRequests:(BOOL)arg2 ;
-(id)pauseStringForType:(int)arg1 ;
-(void)_handlePerformAction:(id)arg1 ;
-(void)setShouldOutputToHearingAid:(BOOL)arg1 ;
-(void)_initializeSynthesizer;
-(void)_loadSpecialPunctuation;
-(void)_loadPunctuationTable:(id)arg1 withLevel:(int)arg2 ;
-(void)_saveSpeechStats;
-(void)_setVoice:(id)arg1 ;
-(void)_handleStopSpeaking:(id)arg1 ;
-(void)_handlePauseSpeaking:(id)arg1 ;
-(void)_handleContinueSpeaking:(id)arg1 ;
-(BOOL)_stringMatchesSpecialCases:(id)arg1 forSymbol:(id)arg2 ranges:(id*)arg3 ;
-(void)_applyTelephoneFormatting:(id)arg1 withRanges:(id)arg2 ;
-(id)_determineLanguageForEvent:(id)arg1 ;
-(id)_stringForNormalText:(id)arg1 action:(id)arg2 allowPausingAtBoundaries:(BOOL)arg3 ignoreLeadingCommas:(BOOL)arg4 ;
-(void)_appendLiteralCharacterString:(id)arg1 toString:(id)arg2 hasPhoneContext:(BOOL)arg3 hasMathContext:(BOOL)arg4 action:(id)arg5 languageCode:(id)arg6 ;
-(id)_stringForLiteralText:(id)arg1 action:(id)arg2 ;
-(BOOL)_characterSearchesForSingularForms:(unsigned short)arg1 ;
-(id)_parseNumberInString:(id)arg1 beforeCharacterAtIndex:(int)arg2 ;
-(id)_replacePunctuation:(id)arg1 level:(int)arg2 hasMathContext:(BOOL)arg3 hasPhoneContext:(BOOL)arg4 isText:(BOOL)arg5 replaceCommas:(BOOL)arg6 languageCode:(id)arg7 ;
-(id)_secureTextDescription:(id)arg1 ;
-(void)_speakAllDigits:(id)arg1 ;
-(void)_replaceEmoticonsWithText:(id)arg1 ;
-(void)_replacePunctuation:(id)arg1 withAction:(id)arg2 replaceCommas:(BOOL)arg3 languageCode:(id)arg4 ;
-(void)_formatIPAddress:(id)arg1 ;
-(void)_formatDetectedDates:(id)arg1 ;
-(void)_formatExplicitTimeDuration:(id)arg1 isMMSS:(BOOL)arg2 ;
-(void)_formatTimeDuration:(id)arg1 didMatch:(BOOL*)arg2 ;
-(void)_formatTelephoneNumber:(id)arg1 ;
-(void)_applyTextualWorkarounds:(id)arg1 ;
-(void)_insertEmoji:(id)arg1 ;
-(void)_insertLongerPausesForSymbol:(id)arg1 withText:(id)arg2 allowPausingAtBoundaries:(BOOL)arg3 ;
-(void)_removeRunsOfNewLines:(id)arg1 ;
-(void)_speakAsLiteralText:(id)arg1 ;
-(void)_speakAsPhoneticText:(id)arg1 ;
-(void)_speakAsMixOfLiteralAndNormalText:(id)arg1 withLiteralRanges:(id)arg2 ;
-(void)_speakAsNormalText:(id)arg1 ;
-(BOOL)_stringIsInSupportedCharacters:(id)arg1 ;
-(void)_notifyDidFinishSpeakingWithFakeRequestForEvent:(id)arg1 ;
-(void)_capVolumeForLanguage:(id)arg1 ;
-(void)_didFinishSpeaking:(id)arg1 finishedSpeaking:(id)arg2 error:(id)arg3 ;
-(void)_uncapVolume;
-(void)_replaceEmbeddedTTSCommands:(id)arg1 ;
-(id)replacePunctuation:(id)arg1 level:(int)arg2 replaceCommas:(BOOL)arg3 languageCode:(id)arg4 ;
-(BOOL)isPaused;
-(void)dealloc;
-(id)init;
-(void)handleEvent:(id)arg1 ;
-(float)rate;
-(double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned long)arg4 count:(unsigned long)arg5 objects:(id)arg6 ;
-(double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned long)arg3 objects:(id)arg4 ;
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 withError:(id)arg4 ;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 forRequest:(id)arg3 ;
-(BOOL)isSpeaking;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(void)setVoice:(id)arg1 ;
-(void)pauseSpeakingAtBoundary:(int)arg1 ;
-(void)continueSpeaking;
-(void)stopSpeakingAtBoundary:(int)arg1 ;
-(void)_setVolume:(id)arg1 ;
-(void)_setRate:(id)arg1 ;
@end

