/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:58:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataTypeSourceOrderEntity : HDHealthEntity
+(id)createTableSQL;
+(int)protectionClass;
+(id)_predicateForSourceID:(id)arg1 ;
+(char)saveOrderedSourceIDs:(id)arg1 type:(id)arg2 userOrdered:(char)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)orderedSourceIDsForType:(id)arg1 userOrdered:(char*)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(char)removeSourceID:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)databaseTable;
@end
