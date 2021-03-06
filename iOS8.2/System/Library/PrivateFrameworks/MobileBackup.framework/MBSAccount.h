/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSMutableArray;

@interface MBSAccount : PBCodable {

	NSString* _accountID;
	NSMutableArray* _backupUDIDs;
	char _loggingEnabled;
	SCD_Struct_MB4 _has;

}

@property (nonatomic,readonly) char hasAccountID; 
@property (nonatomic,retain) NSString * accountID;                      //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSMutableArray * backupUDIDs;              //@synthesize backupUDIDs=_backupUDIDs - In the implementation block
@property (assign,nonatomic) char hasLoggingEnabled; 
@property (assign,nonatomic) char loggingEnabled;                       //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
-(NSMutableArray *)backupUDIDs;
-(unsigned)backupUDIDsCount;
-(char)hasLoggingEnabled;
-(void)setBackupUDIDs:(NSMutableArray *)arg1 ;
-(void)addBackupUDID:(id)arg1 ;
-(char)hasAccountID;
-(void)clearBackupUDIDs;
-(id)backupUDIDAtIndex:(unsigned)arg1 ;
-(void)setHasLoggingEnabled:(char)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)loggingEnabled;
-(void)setLoggingEnabled:(char)arg1 ;
@end

