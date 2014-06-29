/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, IMLocalObject;

@interface IMMessageContext : NSObject {

	NSObject<OS_xpc_object>* _xpcMessage;
	IMLocalObject* _localObject;

}

@property (retain) IMLocalObject * localObject;                       //@synthesize localObject=_localObject - In the implementation block
@property (assign) NSObject<OS_xpc_object> * xpcMessage;              //@synthesize xpcMessage=_xpcMessage - In the implementation block
-(void)dealloc;
-(void)setXpcMessage:(id)arg1 ;
-(void)setLocalObject:(id)arg1 ;
-(id)xpcMessage;
-(id)localObject;
@end
