/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:07:58 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceServices/NSSecureCoding.h>

@class NSString, NSAttributedString, NSURL;

@interface VSSpeechRequest : NSObject <NSSecureCoding> {

	char _useCustomVoice;
	char _maintainsInput;
	char _audioSessionIDIsValid;
	NSString* _text;
	NSAttributedString* _attributedText;
	NSString* _languageCode;
	NSString* _voiceName;
	int _footprint;
	int _gender;
	NSURL* _outputPath;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	/*^block*/id _stopHandler;
	/*^block*/id _pauseHandler;
	double _rate;
	double _pitch;
	double _volume;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                          //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * voiceName;                             //@synthesize voiceName=_voiceName - In the implementation block
@property (assign,nonatomic) int footprint;                                  //@synthesize footprint=_footprint - In the implementation block
@property (assign,nonatomic) char useCustomVoice;                            //@synthesize useCustomVoice=_useCustomVoice - In the implementation block
@property (assign,nonatomic) int gender;                                     //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy) NSURL * outputPath;                               //@synthesize outputPath=_outputPath - In the implementation block
@property (assign,nonatomic) double rate;                                    //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) double pitch;                                   //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double volume;                                  //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) char maintainsInput;                            //@synthesize maintainsInput=_maintainsInput - In the implementation block
@property (assign,nonatomic) char audioSessionIDIsValid;                     //@synthesize audioSessionIDIsValid=_audioSessionIDIsValid - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                        //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (assign,nonatomic) unsigned audioQueueFlags;                       //@synthesize audioQueueFlags=_audioQueueFlags - In the implementation block
@property (nonatomic,copy) id stopHandler;                                   //@synthesize stopHandler=_stopHandler - In the implementation block
@property (nonatomic,copy) id pauseHandler;                                  //@synthesize pauseHandler=_pauseHandler - In the implementation block
+(char)supportsSecureCoding;
-(int)gender;
-(void)setGender:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(NSString *)languageCode;
-(void)setVoiceName:(NSString *)arg1 ;
-(NSString *)voiceName;
-(unsigned)audioSessionID;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(void)setUseCustomVoice:(char)arg1 ;
-(void)setFootprint:(int)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(double)rate;
-(void)setRate:(double)arg1 ;
-(double)pitch;
-(int)footprint;
-(void)setPitch:(double)arg1 ;
-(char)useCustomVoice;
-(NSURL *)outputPath;
-(void)setOutputPath:(NSURL *)arg1 ;
-(char)maintainsInput;
-(void)setMaintainsInput:(char)arg1 ;
-(char)audioSessionIDIsValid;
-(void)setAudioSessionIDIsValid:(char)arg1 ;
-(unsigned)audioQueueFlags;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(id)stopHandler;
-(void)setStopHandler:(id)arg1 ;
-(id)pauseHandler;
-(void)setPauseHandler:(id)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
@end

