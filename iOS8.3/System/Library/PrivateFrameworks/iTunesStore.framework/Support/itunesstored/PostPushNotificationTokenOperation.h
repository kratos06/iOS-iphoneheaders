/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/ISStoreURLOperationDelegate.h>

@class SSAuthenticationContext, NSString, NSData;

@interface PostPushNotificationTokenOperation : ISOperation <ISStoreURLOperationDelegate> {

	SSAuthenticationContext* _authenticationContext;
	NSString* _environmentName;
	NSData* _tokenData;

}

@property (readonly) NSString * environmentName; 
@property (readonly) NSData * tokenData; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEnvironmentName:(id)arg1 tokenData:(id)arg2 ;
-(char)_postTokenToURL:(id)arg1 error:(id*)arg2 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(NSData *)tokenData;
-(NSString *)environmentName;
-(SSAuthenticationContext *)authenticationContext;
-(char)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
@end
