/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray, SABaseCommand, NSString;

@interface ADRetryManager : NSObject {

	int _retryCount;
	NSMutableArray* _requestCommands;
	BOOL _needsToRetryNakedCommands;
	NSMutableArray* _nakedCommands;
	SABaseCommand* _originalRequest;
	NSString* _latestMappedRequestId;

}

@property (nonatomic,copy) NSString * latestMappedRequestId;              //@synthesize latestMappedRequestId=_latestMappedRequestId - In the implementation block
-(id)nakedCommandsToRetry;
-(void)appendCommandToRequest:(id)arg1 ;
-(void)beginRetryableRequest:(id)arg1 ;
-(void)endRetryableRequestForCommand:(id)arg1 ;
-(void)clearNakedCommands;
-(void)setLastReceivedCommand:(id)arg1 ;
-(BOOL)shouldRetryOnConnectionFailure;
-(void)setNeedsToRetryNakedCommands;
-(NSString *)latestMappedRequestId;
-(id)retryRequestId;
-(id)commandsToRetry;
-(void)setLatestMappedRequestId:(NSString *)arg1 ;
-(void)_clearRequestCommands;
-(BOOL)_commandRefsOrIsCurrentRequest:(id)arg1 ;
-(BOOL)commandRefsRestartCommand:(id)arg1 ;
-(id)originalRequestId;
@end
