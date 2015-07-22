/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSLock;

@interface PKInAppPaymentService : NSObject {

	NSXPCConnection* _connection;
	NSLock* _connectionLock;

}
-(void)dealloc;
-(id)init;
-(id)_connection;
-(void)_registerForApplicationLifeCycleNotifications;
-(void)_unregisterForApplicationLifeCycleNotifications;
-(/*^block*/id)_errorHandlerWithCompletion:(/*^block*/id)arg1 ;
-(void)_sendResumed;
-(void)_sendSuspended;
-(void)_registerForInAppPaymentServiceNotifications;
-(void)_establishPaymentServiceConnection;
-(void)_tearDownPaymentServiceConnection;
-(void)_unregisterForPaymentServiceNotifications;
-(id)_connectionWithTeardownExisting:(char)arg1 createNewIfNecessary:(char)arg2 ;
-(void)registerPaymentListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostIdentifier:(id)arg2 orientation:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
