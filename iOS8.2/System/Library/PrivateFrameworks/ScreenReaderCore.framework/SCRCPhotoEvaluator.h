/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCPhotoEvaluator : NSObject
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(id)retain;
-(void)dealloc;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(id)evaluateImage:(CGImageRef)arg1 forCriteria:(int)arg2 inRect:(CGRect)arg3 ;
@end
