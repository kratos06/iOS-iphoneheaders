/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioTermsCheckRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	unsigned long long _acceptedTermsVersion;

}

@property (assign,nonatomic) unsigned long long acceptedTermsVersion;              //@synthesize acceptedTermsVersion=_acceptedTermsVersion - In the implementation block
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)cancel;
-(unsigned long long)acceptedTermsVersion;
-(void)setAcceptedTermsVersion:(unsigned long long)arg1 ;
-(void).cxx_destruct;
@end

