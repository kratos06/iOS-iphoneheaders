/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DMMigratorServiceProtocol <NSObject>
@required
-(void)orderedPluginIdentifiersWithCompletion:(/*^block*/id)arg1;
-(void)migrateWithCompletion:(/*^block*/id)arg1;
-(void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end
