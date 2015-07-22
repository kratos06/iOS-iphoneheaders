/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDServerEnvironmentURLRequest : CKDURLRequest {

	long long _environment;

}

@property (assign,nonatomic) long long environment;              //@synthesize environment=_environment - In the implementation block
-(id)url;
-(long long)environment;
-(void)setEnvironment:(long long)arg1 ;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)requiresSignature;
-(BOOL)allowsAnonymousAccount;
-(BOOL)allowsAuthedAccount;
-(long long)serverType;
-(long long)partitionType;
-(BOOL)hasRequestBody;
-(void)requestDidParseJSONObject:(id)arg1 ;
@end
