/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/ind
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSLock, INRegistrationDigestCache;

@interface INRegistrar : NSObject {

	NSMutableDictionary* _inflightRegistrationRequestsByAccountID;
	NSMutableArray* _unregisteredAccountIDs;
	NSLock* _inflightRegistrationLock;
	NSLock* _unregisteredAcountsLock;
	INRegistrationDigestCache* _registrationDigestCache;

}
-(void)_handleRegistrationResponse:(id)arg1 forRequest:(id)arg2 digest:(id)arg3 account:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handleUnregistrationResponse:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerForPushNotificationsWithAccount:(id)arg1 pushToken:(id)arg2 reason:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)unregisterFromPushNotificationsForAccount:(id)arg1 pushToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
@end

