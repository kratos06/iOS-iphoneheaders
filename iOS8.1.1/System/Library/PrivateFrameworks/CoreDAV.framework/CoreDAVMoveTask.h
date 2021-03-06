/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@class NSString;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask {

	NSString* _previousETag;

}

@property (assign,nonatomic) id<CoreDAVMoveTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousETag;                           //@synthesize previousETag=_previousETag - In the implementation block
-(void)dealloc;
-(id)description;
-(id)httpMethod;
-(id)additionalHeaderValues;
-(NSString *)previousETag;
-(void)setPreviousETag:(NSString *)arg1 ;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
@end

