/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:42:49 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Support/EscrowSecurityAlert.app/EscrowSecurityAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EscrowSecurityAlertDelegateProtocol;
@interface EscrowSecurityAlert : NSObject {

	<EscrowSecurityAlertDelegateProtocol>* _delegate;
	long long _updateInterval;

}

@property (retain) <EscrowSecurityAlertDelegateProtocol> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long updateInterval;                                      //@synthesize updateInterval=_updateInterval - In the implementation block
-(void)handleTimerEvent:(id)arg1 ;
-(BOOL)inCircle;
-(void)handleNotification:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(long long)updateInterval;
-(void)setUpdateInterval:(long long)arg1 ;
-(void).cxx_destruct;
@end

