/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSTask.h>

@protocol OS_dispatch_semaphore, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSPort;

@interface NSConcreteTask : NSTask {

	NSObject*<OS_dispatch_semaphore> _lock;
	NSMutableDictionary* _dictionary;
	/*^block*/id _terminationHandler;
	NSObject*<OS_dispatch_source> _dsrc;
	NSPort* _tmpPort;
	int _suspendCount;
	int _pid;
	int _platformExitInfo;
	char _hasExeced;
	char _isRunning;
	char _hasPostedDeathNotification;
	char _terminationRun;
	char _qos;

}
-(void)terminate;
-(id)currentDirectoryPath;
-(void)setArguments:(id)arg1 ;
-(void)launchWithDictionary:(id)arg1 ;
-(int)terminationStatus;
-(int)terminationReason;
-(void)launch;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(void)setLaunchPath:(id)arg1 ;
-(void)interrupt;
-(int)suspendCount;
-(id)launchPath;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(id)standardInput;
-(id)standardOutput;
-(id)standardError;
-(void)_setTerminationHandler:(/*^block*/id)arg1 ;
-(void)_withTaskDictionary:(/*^block*/id)arg1 ;
-(int)_platformExitInformation;
-(void)waitUntilExit;
-(void)setPreferredArchitectures:(id)arg1 ;
-(id)preferredArchitectures;
-(void)setTaskDictionary:(id)arg1 ;
-(id)taskDictionary;
-(void)terminateTask;
-(int)_procid;
-(void)setStartsNewProcessGroup:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)environment;
-(char)suspend;
-(char)resume;
-(char)isRunning;
-(void)setTerminationHandler:(/*^block*/id)arg1 ;
-(int)processIdentifier;
-(/*^block*/id)terminationHandler;
-(void)setQualityOfService:(int)arg1 ;
-(int)qualityOfService;
-(void)setEnvironment:(id)arg1 ;
-(id)arguments;
-(void)finalize;
@end

