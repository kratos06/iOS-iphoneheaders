/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSTimer, NSRecursiveLock;

@interface IDSTrafficMonitor : NSObject {

	NSMutableDictionary* _traffic;
	NSTimer* _hourlyTimer;
	NSTimer* _dailyTimer;
	NSRecursiveLock* _lock;

}
+(id)sharedInstance;
-(void)logState;
-(void)_setDailyTimer;
-(void)_setHourlyTimer;
-(void)_dailyTimer:(id)arg1 ;
-(void)_hourlyTimer:(id)arg1 ;
-(char)_noteActionType:(id)arg1 forService:(id)arg2 serviceType:(unsigned)arg3 requestor:(id)arg4 ;
-(char)noteQueryForService:(id)arg1 requestor:(id)arg2 ;
-(char)noteQueryRequestForService:(id)arg1 requestor:(id)arg2 ;
-(void)noteIncomingMessageForService:(id)arg1 ;
-(void)noteIncomingLocalMessageForService:(id)arg1 ;
-(char)noteOutgoingMessageForService:(id)arg1 serviceType:(unsigned)arg2 requestor:(id)arg3 ;
-(char)noteOutgoingFallbackMessageForService:(id)arg1 serviceType:(unsigned)arg2 requestor:(id)arg3 ;
-(char)noteOutgoingServerMessageForService:(id)arg1 serviceType:(unsigned)arg2 requestor:(id)arg3 ;
-(void)dealloc;
-(id)init;
@end
