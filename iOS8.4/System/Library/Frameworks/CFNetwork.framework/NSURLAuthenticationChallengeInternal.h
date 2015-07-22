/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLAuthenticationChallengeSender;
@class NSURLProtectionSpace, NSURLCredential, NSURLResponse, NSError;

@interface NSURLAuthenticationChallengeInternal : NSObject {

	NSURLProtectionSpace* space;
	NSURLCredential* proposedCredential;
	long long previousFailureCount;
	NSURLResponse* failureResponse;
	NSError* error;
	id<NSURLAuthenticationChallengeSender> sender;

}
-(id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6 ;
-(void)dealloc;
@end
