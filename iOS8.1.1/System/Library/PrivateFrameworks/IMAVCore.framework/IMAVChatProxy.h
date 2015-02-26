/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSDate, NSArray, IMHandle, NSNumber;

@interface IMAVChatProxy : NSObject {

	NSDictionary* _info;

}

@property (nonatomic,retain,readonly) NSString * GUID; 
@property (nonatomic,readonly) unsigned sessionID; 
@property (nonatomic,readonly) long long callID; 
@property (nonatomic,retain,readonly) NSString * conferenceID; 
@property (nonatomic,readonly) unsigned state; 
@property (nonatomic,retain,readonly) NSDate * dateConnected; 
@property (nonatomic,retain,readonly) NSDate * dateEnded; 
@property (nonatomic,retain,readonly) NSArray * remoteParticipants; 
@property (nonatomic,retain,readonly) IMHandle * initiatorIMHandle; 
@property (nonatomic,retain,readonly) IMHandle * otherIMHandle; 
@property (nonatomic,readonly) unsigned endedReason; 
@property (nonatomic,readonly) int endedError; 
@property (nonatomic,readonly) BOOL isCaller; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isStateFinal; 
@property (nonatomic,readonly) BOOL isSendingAudio; 
@property (assign,setter=setMute:,nonatomic) BOOL isMute; 
@property (nonatomic,retain,readonly) NSNumber * dataUploaded; 
@property (nonatomic,retain,readonly) NSNumber * dataDownloaded; 
@property (assign,nonatomic) double invitationTimeoutTime; 
@property (assign,nonatomic) double connectionTimeoutTime; 
-(void)dealloc;
-(id)description;
-(unsigned)state;
-(BOOL)isActive;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)isVideo;
-(id)account;
-(long long)callID;
-(BOOL)isCaller;
-(unsigned)sessionID;
-(NSString *)conferenceID;
-(IMHandle *)otherIMHandle;
-(NSArray *)remoteParticipants;
-(void)cancelInvitation;
-(void)endChat;
-(IMHandle *)initiatorIMHandle;
-(void)inviteAll;
-(void)invite:(id)arg1 additionalPeers:(id)arg2 ;
-(void)setInvitationTimeoutTime:(double)arg1 ;
-(void)setConnectionTimeoutTime:(double)arg1 ;
-(void)setMute:(BOOL)arg1 ;
-(void)updateWithInfo:(id)arg1 ;
-(unsigned)endedReason;
-(int)endedError;
-(NSDate *)dateConnected;
-(NSDate *)dateEnded;
-(BOOL)_isProxy;
-(NSNumber *)dataUploaded;
-(NSNumber *)dataDownloaded;
-(BOOL)isSendingAudio;
-(BOOL)isStateFinal;
-(BOOL)isMute;
-(double)invitationTimeoutTime;
-(double)connectionTimeoutTime;
-(void)finalUpdate;
-(void)acceptInvitation;
-(void)declineInvitation;
-(NSString *)GUID;
@end
