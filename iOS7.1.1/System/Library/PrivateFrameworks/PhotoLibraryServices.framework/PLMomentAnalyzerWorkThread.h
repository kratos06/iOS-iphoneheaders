/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@class NSPort;

@interface PLMomentAnalyzerWorkThread : NSThread {

	NSPort* _dummyPort;

}
-(void)dealloc;
-(id)init;
-(void)cancel;
-(void)main;
-(void)removeDummyPort;
@end
