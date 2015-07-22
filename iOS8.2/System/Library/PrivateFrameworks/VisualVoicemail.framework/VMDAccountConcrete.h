/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/vmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VMDAccountConcrete <NSObject>
@required
-(char)isSubscribed;
-(id)identifier;
-(id)voicemailWithIdentifier:(long long)arg1;
-(unsigned)capabilities;
-(unsigned)unreadCount;
-(char)mailboxRequiresSetup;
-(void)setProvisionalPassword:(id)arg1;
-(int)mailboxUsage;
-(char)isOnline;
-(void)synchronize:(char)arg1;
-(char)isMessageWaiting;
-(void)displayPasswordRequestIfNecessary;
-(unsigned)trashedCount;
-(void)updateLoggingSettings;
-(char)isOfflineDueToRoaming;
-(void)clearActivationError;
-(id)provisionalPassword;
-(void)handlePasswordRequestCancellation;
-(void)handlePasswordNotificationResponse:(id)arg1;
-(int)maximumGreetingDuration;
-(int)minimumPasswordLength;
-(int)maximumPasswordLength;
-(char)passwordChangeRequiresEnteringOldPassword;
-(int)mailboxGreetingType;
-(char)taskOfTypeExists:(int)arg1;
-(char)headerChangesPending;
-(char)synchronizationPending;
-(char)greetingFetchExistsProgressiveLoadInProgress:(char*)arg1;
-(void)changePassword:(id)arg1 fromPassword:(id)arg2;
-(void)retrieveGreeting;
-(char)greetingAvailable;
-(void)setGreetingType:(int)arg1 withData:(id)arg2 duration:(unsigned)arg3;
-(id)allVoicemailsWithFlags:(unsigned)arg1 withoutFlags:(unsigned)arg2 sinceIdentifier:(long long)arg3;
-(void)progressiveDataLengthsForVoicemail:(id)arg1 expected:(unsigned*)arg2 current:(unsigned*)arg3;
-(char)dataForVoicemailPending:(id)arg1 progressiveLoadInProgress:(char*)arg2;
-(void)retrieveDataForVoicemail:(id)arg1;
-(void)moveVoicemailToTrash:(id)arg1;
-(void)moveVoicemailFromTrash:(id)arg1;
-(unsigned)countOfVoicemailsWithFlags:(unsigned)arg1 withoutFlags:(unsigned)arg2;
-(long long)identifierOfLastInsert;
-(id)greetingPath;

@end
