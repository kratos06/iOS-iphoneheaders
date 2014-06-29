/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIAlertView, NSURL;

@interface _RCMemoAlertContext : NSObject {

	bool _keyboardInputHandled;
	bool _returnKeyConfirms;
	UIAlertView* _alertView;
	NSURL* _targetRecordingURI;
	/*^block*/ id _completionBlock;

}

@property (assign,nonatomic,__weak) UIAlertView * alertView;              //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,copy) NSURL * targetRecordingURI;                    //@synthesize targetRecordingURI=_targetRecordingURI - In the implementation block
@property (nonatomic,copy) id completionBlock;                            //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) bool keyboardInputHandled;                   //@synthesize keyboardInputHandled=_keyboardInputHandled - In the implementation block
@property (assign,nonatomic) bool returnKeyConfirms;                      //@synthesize returnKeyConfirms=_returnKeyConfirms - In the implementation block
-(void)setAlertView:(id)arg1 ;
-(id)alertView;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)completionBlock;
-(void).cxx_destruct;
-(id)targetRecordingURI;
-(void)setTargetRecordingURI:(id)arg1 ;
-(bool)keyboardInputHandled;
-(void)setKeyboardInputHandled:(bool)arg1 ;
-(bool)returnKeyConfirms;
-(void)setReturnKeyConfirms:(bool)arg1 ;
@end
