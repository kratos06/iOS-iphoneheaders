/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UITargetedProxy.h>
#import <SpringBoardServices/XPCProxyTarget.h>

@class NSMutableArray;

@interface _UIQueueingProxy : _UITargetedProxy <XPCProxyTarget> {

	int _lock;
	unsigned long long _suspensionCount;
	NSMutableArray* _queuedInvocations;
	/*^block*/ id _shouldSuspendInvocationBlock;

}
+(id)proxyWithTarget:(id)arg1 ;
+(id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(/*^block*/ id)arg2 ;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
-(void)dealloc;
-(bool)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(void)suspend;
-(void)forwardInvocation:(id)arg1 ;
-(void)resume;
-(void)_dispatchSuspendedMessages;
-(void)removeAllEnqueuedInvocations;
@end

