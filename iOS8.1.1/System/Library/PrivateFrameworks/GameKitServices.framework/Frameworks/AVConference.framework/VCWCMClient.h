/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, WCMClientDelegate;
@class NSObject;

@interface VCWCMClient : NSObject {

	NSObject*<OS_xpc_object> connection;
	NSObject*<OS_dispatch_queue> connectionQueue;
	id<WCMClientDelegate> wcmClientDelegate;

}

@property (readonly) NSObject*<OS_xpc_object> connection; 
@property (readonly) NSObject*<OS_dispatch_queue> connectionQueue; 
@property (nonatomic,retain) id<WCMClientDelegate> wcmClientDelegate; 
-(void)dealloc;
-(id)init;
-(NSObject*<OS_xpc_object>)connection;
-(void)setWcmClientDelegate:(id<WCMClientDelegate>)arg1 ;
-(void)startWCMClient;
-(void)stopWCMClient;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(id<WCMClientDelegate>)wcmClientDelegate;
@end

