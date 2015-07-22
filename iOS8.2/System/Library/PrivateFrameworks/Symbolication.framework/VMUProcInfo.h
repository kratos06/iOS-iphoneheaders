/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSArray;

@interface VMUProcInfo : NSObject {

	unsigned _task;
	char _needTaskPortDealloc;
	NSString* _name;
	NSArray* _arguments;
	NSArray* _envVars;
	NSString* _procTableName;
	NSString* _realAppName;
	NSString* _requestedAppName;
	NSString* _firstArg;
	int _pid;
	int _ppid;
	timeval _startTime;

}
+(id)getProcessIds;
+(char)isProcessRunning:(int)arg1 ;
+(int)processParentId:(int)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(char)terminate;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)name;
-(int)compare:(id)arg1 ;
-(void)update;
-(char)isRunning;
-(timeval)startTime;
-(unsigned)task;
-(id)initWithPid:(int)arg1 ;
-(int)pid;
-(id)arguments;
-(int)cpuType;
-(char)isApp;
-(id)realAppName;
-(id)userAppName;
-(id)_infoFromCommandLine:(int)arg1 ;
-(id)procTableName;
-(id)envVars;
-(id)firstArgument;
-(id)requestedAppName;
-(char)isCFM;
-(id)valueForEnvVar:(id)arg1 ;
-(int)ppid;
-(char)isMachO;
-(char)isNative;
-(char)signal:(int)arg1 ;
-(int)compareByName:(id)arg1 ;
-(int)compareByUserAppName:(id)arg1 ;
-(void)finalize;
@end
