/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSSQLCore, NSSQLModel, NSSQLAdapter, NSMappingModel, NSSQLConnection, NSMutableDictionary;

@interface _NSSQLiteStoreMigrator : NSObject {

	NSSQLCore* _store;
	NSSQLModel* _dstModel;
	NSSQLModel* _srcModel;
	NSSQLAdapter* _adapter;
	NSMappingModel* _mappingModel;
	NSSQLConnection* _connection;
	NSMutableDictionary* _reindexedEntities;
	NSMutableDictionary* _reindexedPropertiesByEntity;
	NSMutableDictionary* _sourceToDestinationEntityMap;
	NSMutableDictionary* _addedEntityMigrations;
	NSMutableDictionary* _removedEntityMigrations;
	NSMutableDictionary* _transformedEntityMigrations;
	NSMutableDictionary* _copiedEntityMigrations;
	NSMutableDictionary* _tableMigrationDescriptionsByEntity;
	BOOL _hasPKTableChanges;

}

@property (readonly) NSSQLAdapter * adapter;              //@synthesize adapter=_adapter - In the implementation block
+(BOOL)_annotatesMigrationMetadata;
+(void)_setAnnotatesMigrationMetadata:(BOOL)arg1 ;
-(id)adapter;
-(id)initWithStore:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3 ;
-(BOOL)performMigration:(id*)arg1 ;
-(id)entityMigrationDescriptionForEntity:(id)arg1 ;
-(id)tableMigrationDescriptionForEntity:(id)arg1 ;
-(id)createIndexStatementsForEntity:(id)arg1 ;
-(id)createEntityMigrationStatements;
-(id)createStatementsForUpdatingEntityKeys;
-(BOOL)validateMigratedDataFromEntityMapping:(id)arg1 error:(id*)arg2 ;
-(long long)_countNullsInColumn:(id)arg1 forEntity:(id)arg2 ;
-(long long)_countUnreferencedPrimaryKeysForEntity:(id)arg1 inForeignKeyColumnName:(id)arg2 fromTable:(id)arg3 ;
-(BOOL)validateMandatoryAttribute:(id)arg1 onEntity:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateMandatoryRelationship:(id)arg1 onEntity:(id)arg2 error:(id*)arg3 ;
-(void)_populateTableMigrationDescriptions;
-(void)_determinePropertyDependenciesOnIDForEntity:(id)arg1 ;
-(void)_determineReindexedEntitiesAndAffectedProperties;
-(void)_populateEntityMigrationDescriptionsAndEntityMap;
-(void)_addEntityMigration:(id)arg1 toTableMigrationForRootEntity:(id)arg2 tableMigrationType:(int)arg3 ;
-(void)_addReindexedProperty:(id)arg1 toSetForEntity:(id)arg2 ;
-(void)dealloc;
@end

