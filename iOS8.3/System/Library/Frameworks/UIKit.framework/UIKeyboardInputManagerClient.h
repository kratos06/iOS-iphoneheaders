/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:11 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection;

@interface UIKeyboardInputManagerClient : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(char)instancesRespondToSelector:(SEL)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(char)isKindOfClass:(Class)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)handleRequest:(id)arg1 ;
-(void)handleError:(id)arg1 forRequest:(id)arg2 ;
@end
