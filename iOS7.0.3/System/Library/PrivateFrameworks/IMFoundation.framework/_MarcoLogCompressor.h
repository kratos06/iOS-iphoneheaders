/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMLoggingAgent
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface _MarcoLogCompressor : NSObject {

	NSMutableArray* _archivers;

}
+(id)sharedInstance;
-(void)compressDirectory:(id)arg1 intoArchive:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)init;
@end
