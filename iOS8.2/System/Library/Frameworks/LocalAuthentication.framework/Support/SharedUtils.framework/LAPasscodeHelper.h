/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface LAPasscodeHelper : NSObject
+(id)sharedInstance;
-(char)isPasscodeSetWithError:(id*)arg1 ;
-(int)verifyPassword:(id)arg1 acmContext:(id)arg2 ;
-(char)useLightOnDarkPasscodeScreenWithPolicy:(int)arg1 policyOptions:(id)arg2 ;
@end

