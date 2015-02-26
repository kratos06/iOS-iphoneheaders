/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol IDSDuetInterfaceDelegate;
@class CDSession, CDAttribute, NSMutableDictionary, IMTimer;

@interface IDSDuetInterface : NSObject {

	CDSession* _session;
	CDAttribute* _attribute;
	NSMutableDictionary* _allowedBundleIDs;
	unsigned long long _duetPacketCount;
	IMTimer* _duetNotifyTimer;
	id<IDSDuetInterfaceDelegate> _delegate;

}

@property (assign,nonatomic) id<IDSDuetInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 ;
-(id)_localDevice;
-(id)_pairedDevice;
-(id)_deviceToSendTo;
-(void)_checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_sendMeteringUpdateToDuet;
-(void)checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)meteringUpdate:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IDSDuetInterfaceDelegate>)arg1 ;
-(id)init;
-(id<IDSDuetInterfaceDelegate>)delegate;
@end
