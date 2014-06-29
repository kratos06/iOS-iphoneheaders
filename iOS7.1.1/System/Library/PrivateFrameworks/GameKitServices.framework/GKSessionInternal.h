/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GKSessionDelegate, GKSessionPrivateDelegate, GKSessionDataReceiveHandler, GKSessionDOOBReceiveHandler;
#import <GameKitServices/GameKitServices-Structs.h>
@class GKSession, NSString, GKConnection, GKTable, GKAutoPeerIDTable, GKList, GKVoiceChatSessionListener;

@interface GKSessionInternal : NSObject {

	GKSession* _session;
	NSString* domain;
	NSString* serviceType;
	unsigned long long _port;
	NSString* _displayName;
	unsigned _pid;
	unsigned long long maxPeers;
	OpaqueGCKSessionRef sessionRef;
	OpaqueAGPSessionRef agpSessionRef;
	GKConnection* _connection;
	<GKSessionDelegate>* _delegate;
	<GKSessionPrivateDelegate>* _privateDelegate;
	<GKSessionDataReceiveHandler>* _dataReceiveHandler;
	void* _dataReceiveHandlerContext;
	<GKSessionDOOBReceiveHandler>* _doobReceiveHandler[2];
	void** _doobReceiveHandlerContext[2];
	GKTable* _peerInfoTable;
	GKTable* _peerNameTable;
	GKAutoPeerIDTable* _peerIDTable;
	GKList* _peersAvailable;
	GKList* _peersConnected;
	GKList* _peersForCleanup;
	GKList* _peersPendingIncomingInvitation;
	GKList* _peersPendingOutgoingInvitation;
	opaque_pthread_mutex_t _lock;
	opaque_pthread_mutex_t _delegateLock;
	bool _isSearching;
	bool _isPublishing;
	bool _sessionStarted;
	int _mode;
	bool _isBusy;
	NSString* sessionID;
	NSString* displayName;
	double disconnectTimeout;
	DNSServiceRef_tRef _dnsServiceConnection;
	DNSServiceRef_tRef _dnsServiceResolveConnection;
	int _sReset;
	DNSServiceRef_tRef _serviceBrowser;
	DNSServiceRef_tRef _service;
	DNSServiceRef_tRef _oldService;
	bool _handleEventsRunning;
	bool _stopHandlingEvents;
	bool _wifiEnabled;
	bool _shutdown;
	GKVoiceChatSessionListener* _voiceChatListener;

}

@property (assign,nonatomic) OpaqueGCKSessionRef sessionRef; 
@property (assign,nonatomic) OpaqueAGPSessionRef agpSessionRef; 
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * serviceType; 
@property (assign,nonatomic) unsigned long long maxPeers; 
@property (assign,nonatomic) unsigned long long port;                         //@synthesize port=_port - In the implementation block
@property (readonly) GKConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id dataReceiveHandler; 
@property (assign) <GKSessionDelegate> * delegate; 
@property (readonly) NSString * sessionID; 
@property (readonly) NSString * displayName; 
@property (readonly) int sessionMode;                                         //@synthesize mode=_mode - In the implementation block
@property (readonly) NSString * peerID; 
@property (assign) double disconnectTimeout; 
@property (getter=isAvailable) bool available; 
@property (assign) <GKSessionPrivateDelegate> * privateDelegate; 
@property (getter=isBusy) bool busy; 
@property (assign) bool wifiEnabled; 
-(void)sendCallbacksToDelegate:(SCD_Struct_GC4*)arg1 remotePeer:(unsigned)arg2 ;
-(id)serviceName;
-(void)lock;
-(void)unlock;
-(bool)isShuttingDown;
-(void)tellDelegate_sessionDidFailWithError:(id)arg1 ;
-(void)stopResolvingAllPeers;
-(id)createNSErrorFromHRESULT:(int)arg1 description:(id)arg2 reason:(id)arg3 ;
-(id)createNSErrorFromGKSessionError:(int)arg1 description:(id)arg2 reason:(id)arg3 ;
-(void)printDictionaries;
-(void)setDisplayName:(id)arg1 forPeer:(unsigned)arg2 ;
-(void)tellDelegate_didConnectPeer:(id)arg1 ;
-(void)tellDelegate_didDisconnectPeer:(id)arg1 ;
-(void)tellDelegate_isConnectingPeer:(id)arg1 ;
-(void)tellDelegate_peerDidBecomeAvailable:(id)arg1 ;
-(void)tellDelegate_peerDidBecomeUnavailable:(id)arg1 ;
-(void)tellDelegate_didReceiveBand_RetryICE:(id)arg1 ;
-(void)tellDelegate_didReceiveData:(id)arg1 ;
-(void)tellDelegate_gotInvited:(id)arg1 ;
-(void)tellDelegate_connectionRequestToPeerFailed:(id)arg1 ;
-(void)tellDelegate_peerDidBecomeBusy:(id)arg1 ;
-(void)tellDelegate_initiateRelay:(id)arg1 ;
-(void)tellDelegate_updateRelay:(id)arg1 ;
-(void)tellDelegate_networkStatisticsChanged:(id)arg1 ;
-(bool)parseServiceName:(const char*)arg1 intoDisplayName:(id*)arg2 pid:(unsigned*)arg3 state:(id*)arg4 ;
-(void)didPublishWithError:(int)arg1 ;
-(bool)isAvailable;
-(id)peerID;
-(void)setPort:(unsigned long long)arg1 ;
-(void)publish;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)domain;
-(void)reset;
-(id)displayName;
-(id)connection;
-(id)sessionID;
-(id)privateDelegate;
-(void)receiveDOOB:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void*)arg4 ;
-(id)dataReceiveHandler;
-(OpaqueAGPSessionRef)agpSessionRef;
-(id)stringForGCKID:(unsigned)arg1 ;
-(void)disconnectFromAllPeers;
-(void)browse;
-(void)setDOOBReceiveHandler:(id)arg1 withContext:(void*)arg2 inBand:(unsigned)arg3 ;
-(void)setServiceType:(id)arg1 ;
-(id)serviceType;
-(bool)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 isAudio:(bool)arg4 error:(id*)arg5 ;
-(bool)passesSendDataSanityCheck:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4 ;
-(id)displayNameForPeer:(id)arg1 ;
-(bool)checkDNSConnection;
-(void)handleEvents;
-(void)setBusy:(bool)arg1 ;
-(bool)filterService:(const char*)arg1 withPID:(unsigned)arg2 ;
-(void)processTXTRecordForPeer:(id)arg1 txtLen:(unsigned short)arg2 txtRecord:(const void*)arg3 ;
-(void)cleanupExAvailablePeers;
-(void)didUpdateTXTRecordForPeer:(id)arg1 fromIF:(const char*)arg2 txtLen:(unsigned short)arg3 txtRecord:(const void*)arg4 withError:(int)arg5 moreComing:(bool)arg6 ;
-(bool)tryConnectToPeer:(id)arg1 ;
-(void)setPrivateDelegate:(id)arg1 ;
-(id)initWithConnection:(id)arg1 session:(id)arg2 delegate:(id)arg3 ;
-(id)initWithSessionID:(id)arg1 displayName:(id)arg2 session:(id)arg3 sessionMode:(int)arg4 ;
-(bool)sendAudioData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4 ;
-(bool)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4 ;
-(bool)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id*)arg3 ;
-(void)setDataReceiveHandler:(id)arg1 withContext:(void*)arg2 ;
-(void)timeoutConnectToPeer:(id)arg1 ;
-(void)connectToPeer:(id)arg1 withTimeout:(double)arg2 ;
-(void)cancelConnectToPeer:(id)arg1 ;
-(bool)acceptConnectionFromPeer:(id)arg1 error:(id*)arg2 ;
-(void)denyConnectionFromPeer:(id)arg1 ;
-(void)disconnectPeerFromAllPeers:(id)arg1 ;
-(void)setAvailable:(bool)arg1 ;
-(id)peersWithConnectionState:(int)arg1 ;
-(void)stopOldService;
-(bool)wifiEnabled;
-(void)setWifiEnabled:(bool)arg1 ;
-(bool)isPeerBusy:(id)arg1 ;
-(void)setDisconnectTimeout:(double)arg1 ;
-(double)disconnectTimeout;
-(void)didFindService:(const char*)arg1 fromIF:(const char*)arg2 withError:(int)arg3 moreComing:(bool)arg4 ;
-(void)didRemoveService:(const char*)arg1 fromIF:(const char*)arg2 withError:(int)arg3 moreComing:(bool)arg4 ;
-(void)didLookupHostname:(DNSServiceRef_tRef)arg1 forPeer:(id)arg2 hostName:(const char*)arg3 address:(const sockaddr_in*)arg4 interface:(unsigned)arg5 withError:(int)arg6 moreComing:(bool)arg7 ;
-(void)didResolveService:(DNSServiceRef_tRef)arg1 forPeer:(id)arg2 hostName:(const char*)arg3 port:(unsigned short)arg4 interface:(unsigned)arg5 txtLen:(unsigned short)arg6 txtRecord:(const void*)arg7 withError:(int)arg8 moreComing:(bool)arg9 ;
-(id)voiceChatSessionListener;
-(unsigned long long)maxPeers;
-(void)setMaxPeers:(unsigned long long)arg1 ;
-(OpaqueGCKSessionRef)sessionRef;
-(void)setSessionRef:(OpaqueGCKSessionRef)arg1 ;
-(void)setAgpSessionRef:(OpaqueAGPSessionRef)arg1 ;
-(int)sessionMode;
-(void)setDomain:(id)arg1 ;
-(bool)isBusy;
-(unsigned long long)port;
@end
