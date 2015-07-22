/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebBookmarksXPCConnectionDelegate, OS_xpc_object;
@class NSMutableDictionary, NSObject;

@interface WebBookmarksXPCConnection : NSObject {

	id<WebBookmarksXPCConnectionDelegate> _delegate;
	NSMutableDictionary* _messageHandlers;
	NSMutableDictionary* _entitlementLookupCache;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(NSObject*<OS_xpc_object>)connection;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 ;
-(void)sendMessage:(id)arg1 ;
-(id)initClientForMachService:(const char*)arg1 delegate:(id)arg2 ;
-(id)messageWithName:(const char*)arg1 ;
-(void)setHandler:(/*^block*/id)arg1 forMessageNamed:(const char*)arg2 ;
-(void)sendMessage:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(id)sendMessageWithSynchronousReply:(id)arg1 ;
-(void)_handleMessage:(id)arg1 ;
-(void)setMessageHandlers:(id)arg1 ;
-(BOOL)hasBoolEntitlement:(id)arg1 ;
-(id)messageReplyingTo:(id)arg1 ;
@end
