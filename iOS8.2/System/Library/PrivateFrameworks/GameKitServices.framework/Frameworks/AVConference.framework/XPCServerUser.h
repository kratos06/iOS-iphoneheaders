/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface XPCServerUser : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id block;

}

@property (assign) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,copy) id block; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end
