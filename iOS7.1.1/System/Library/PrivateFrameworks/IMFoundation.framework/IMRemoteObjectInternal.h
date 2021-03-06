/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSRecursiveLock, NSObject, Protocol, NSString;

@interface IMRemoteObjectInternal : NSObject {

	NSRecursiveLock* _lock;
	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_dispatch_queue>* _queue;
	long long _deathPostPredicate;
	Protocol* _protocol;
	NSString* _portName;
	bool _willBeTerminated;
	int _pid;

}
@end

