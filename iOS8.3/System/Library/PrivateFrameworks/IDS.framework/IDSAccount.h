/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:03:40 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _IDSAccount, NSString, NSArray, NSDictionary, NSData, NSDate;

@interface IDSAccount : NSObject {

	_IDSAccount* _internal;

}

@property (nonatomic,retain) NSString * loginID; 
@property (nonatomic,retain,readonly) NSString * serviceName; 
@property (nonatomic,readonly) char isActive; 
@property (nonatomic,readonly) char canSend; 
@property (nonatomic,retain,readonly) NSArray * devices; 
@property (nonatomic,retain,readonly) NSArray * nearbyDevices; 
@property (nonatomic,retain,readonly) NSArray * aliases; 
@property (nonatomic,retain,readonly) NSArray * aliasStrings; 
@property (nonatomic,retain,readonly) NSArray * vettedAliases; 
@property (nonatomic,retain,readonly) NSDictionary * profileInfo; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,retain,readonly) NSString * uniqueID; 
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) NSArray * registeredURIs; 
@property (nonatomic,readonly) NSData * registrationCertificate; 
@property (nonatomic,readonly) NSDate * dateRegistered; 
@property (nonatomic,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSString * regionID; 
@property (nonatomic,readonly) NSString * regionBasePhoneNumber; 
@property (nonatomic,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,readonly) NSString * profileID; 
@property (nonatomic,retain,readonly) NSString * primaryServiceName; 
-(id)_internal;
-(void)dealloc;
-(id)description;
-(char)isActive;
-(char)_isEnabled;
-(NSString *)displayName;
-(NSString *)regionID;
-(int)accountType;
-(void)setAuthToken:(id)arg1 ;
-(NSString *)serviceName;
-(void)setPassword:(id)arg1 ;
-(NSData *)pushToken;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSArray *)devices;
-(void)removeDelegate:(id)arg1 ;
-(NSArray *)aliasStrings;
-(id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(void)setAccountInfo:(NSDictionary *)arg1 ;
-(void)_setIsEnabled:(char)arg1 ;
-(void)setLoginID:(NSString *)arg1 ;
-(NSString *)primaryServiceName;
-(char)canSend;
-(NSArray *)nearbyDevices;
-(NSDate *)nextRegistrationDate;
-(NSDate *)dateRegistered;
-(NSString *)regionBasePhoneNumber;
-(NSDictionary *)regionServerContext;
-(NSString *)profileID;
-(void)_callNearbyDevicesChanged;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(NSDictionary *)profileInfo;
-(NSArray *)aliases;
-(NSArray *)vettedAliases;
-(void)authenticateAccount;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)registerAccount;
-(void)unregisterAccount;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(NSString *)loginID;
-(void)passwordUpdated;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(NSDictionary *)accountInfo;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(NSArray *)registeredURIs;
-(void)deactivateAndPurgeIdentify;
-(void)_reregisterAndReidentify:(char)arg1 ;
-(NSData *)registrationCertificate;
-(int)registrationStatus;
-(NSString *)uniqueID;
@end

