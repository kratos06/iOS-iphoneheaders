/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, ACAccountCredential;

@interface SignInResponse : NSObject {

	NSString* _password;
	long long _responseType;
	ACAccountCredential* _singleSignOnCredential;
	NSString* _userName;

}

@property (assign,nonatomic) long long signInResponseType;                              //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,copy) NSString * password;                                         //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) ACAccountCredential * singleSignOnCredential;              //@synthesize singleSignOnCredential=_singleSignOnCredential - In the implementation block
@property (nonatomic,copy) NSString * userName;                                         //@synthesize userName=_userName - In the implementation block
+(BOOL)deviceSupportsSingleSignOn;
-(long long)signInResponseType;
-(void)setSignInResponseType:(long long)arg1 ;
-(void)setSingleSignOnCredential:(ACAccountCredential *)arg1 ;
-(id)initWithResponseType:(long long)arg1 ;
-(ACAccountCredential *)singleSignOnCredential;
-(NSString *)userName;
-(void)setUserName:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
@end

