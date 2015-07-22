/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <companioncamerad/IDSServiceDelegate.h>

@protocol NMSMessageCenterDelegate, OS_dispatch_queue;
@class NSString, IDSService, NSMutableDictionary, NSObject;

@interface NMSMessageCenter : NSObject <IDSServiceDelegate> {

	NSString* _serviceIdentifier;
	NSString* _launchNotification;
	IDSService* _service;
	NSMutableDictionary* _requestHandlers;
	NSMutableDictionary* _pendingRequests;
	NSMutableDictionary* _pendingResponses;
	NSMutableDictionary* _pbMapping;
	BOOL _previouslyConnected;
	double _lastDataReceived;
	id<NMSMessageCenterDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<NMSMessageCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IDSService * idsService; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) double timeSinceLastDataReceived; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> actionQ; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIDSServiceIdentifier:(id)arg1 launchOnDemandNotification:(id)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forMessageID:(unsigned short)arg3 ;
-(double)timeSinceLastDataReceived;
-(void)_checkConnected;
-(void)_handleError:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleError:(id)arg1 forResponse:(id)arg2 ;
-(id)_findPendingRequestByIdentifier:(id)arg1 ;
-(void)_invalidateOutgoingRequest:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(void)setDelegate:(id<NMSMessageCenterDelegate>)arg1 ;
-(NSString *)description;
-(id<NMSMessageCenterDelegate>)delegate;
-(void)resume;
-(id)_queue;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3 ;
-(id)_pbMappingForMessageID:(unsigned short)arg1 ;
-(NSObject*<OS_dispatch_queue>)actionQ;
-(void)dropExtantMessages;
-(void)_sendResponse:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(IDSService *)idsService;
-(BOOL)isConnected;
@end
