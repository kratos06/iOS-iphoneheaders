/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:13:14 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/XPCServices/IMTransferAgent.xpc/IMTransferAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FTMessageDelivery;

@interface IMTransferAgentDeliveryController : NSObject {

	FTMessageDelivery* _messageDelivery;

}
+(id)sharedInstance;
-(void)sendFTMessage:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)init;
@end
