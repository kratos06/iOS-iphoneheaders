/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface WebService : SQLiteEntity
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)webServicesInDatabase:(id)arg1 matchingPredicate:(id)arg2 ;
+(id)webServicesInDatabase:(id)arg1 withPassType:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 withPassType:(id)arg2 serviceURL:(id)arg3 ;
+(id)insertWebServiceWithPassType:(id)arg1 serviceURL:(id)arg2 inDatabase:(id)arg3 ;
+(id)_insertionDictionaryWithPassType:(id)arg1 serviceURL:(id)arg2 ;
+(id)_updateDictionaryWithWebService:(id)arg1 ;
+(id)_propertySettersForWebService;
+(id)_predicateForPassType:(id)arg1 ;
+(id)_predicateForPassType:(id)arg1 serviceURL:(id)arg2 ;
+(id)databaseTable;
+(id)joinClauseForProperty:(id)arg1 ;
-(id)webService;
-(void)updateWithLastDeletionDate:(id)arg1 ;
-(void)updateWithWebService:(id)arg1 ;
-(id)lastDeletionDate;
-(id)lastUpdatedTag;
-(id)tagLastUpdateDate;
-(void)updateWithLastUpdatedTag:(id)arg1 ;
-(id)initWithPassType:(id)arg1 serviceURL:(id)arg2 inDatabase:(id)arg3 ;
@end

