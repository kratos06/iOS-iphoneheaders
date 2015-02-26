/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <MobileBackup/NSCopying.h>
#import <MobileBackup/NSCoding.h>

@class NSString, NSDate;

@interface MBSnapshot : NSObject <NSCopying, NSCoding> {

	unsigned long long _snapshotID;
	NSString* _deviceName;
	NSDate* _date;
	int _state;
	BOOL _isCompatible;
	NSString* _systemVersion;
	unsigned long long _quotaReserved;

}

@property (nonatomic,readonly) unsigned long long snapshotID;                 //@synthesize snapshotID=_snapshotID - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) int state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL isCompatible;                             //@synthesize isCompatible=_isCompatible - In the implementation block
@property (nonatomic,readonly) NSString * systemVersion;                      //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long quotaReserved;              //@synthesize quotaReserved=_quotaReserved - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)state;
-(NSDate *)date;
-(NSString *)systemVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceName;
-(id)initWithSnapshotID:(unsigned long long)arg1 deviceName:(id)arg2 date:(id)arg3 state:(int)arg4 isCompatible:(BOOL)arg5 systemVersion:(id)arg6 quotaReserved:(unsigned long long)arg7 ;
-(unsigned long long)snapshotID;
-(BOOL)isCompatible;
-(unsigned long long)quotaReserved;
@end
