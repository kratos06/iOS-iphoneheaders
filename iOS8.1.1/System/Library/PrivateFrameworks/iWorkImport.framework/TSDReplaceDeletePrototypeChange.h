/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDPrototypeChange.h>

@class NSString;

@interface TSDReplaceDeletePrototypeChange : NSObject <TSDPrototypeChange> {

	BOOL mPrototypeIsBeingReplaced;
	BOOL mPrototypeIsBeingDeleted;
	id mReplacement;
	id mPrototype;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL prototypeIsBeingReplaced; 
@property (readonly) BOOL prototypeIsBeingModified; 
@property (readonly) BOOL prototypeIsBeingDeleted; 
@property (retain,readonly) id prototype; 
@property (retain,readonly) id replacement; 
@property (retain,readonly) id<TSSPropertySource> propertiesBeforeChange; 
@property (retain,readonly) id<TSSPropertySource> propertiesAfterChange; 
-(BOOL)prototypeIsBeingDeleted;
-(BOOL)prototypeIsBeingReplaced;
-(id)initReplacePrototypeChangeForPrototype:(id)arg1 toReplacement:(id)arg2 ;
-(BOOL)prototypeIsBeingModified;
-(id)changedPropertySet;
-(id)initDeletePrototypeChangeForPrototype:(id)arg1 replacement:(id)arg2 ;
-(id)prototype;
-(BOOL)propertyIsChanging:(int)arg1 ;
-(BOOL)propertiesAreChanging:(id)arg1 ;
-(id<TSSPropertySource>)propertiesBeforeChange;
-(id<TSSPropertySource>)propertiesAfterChange;
-(void)dealloc;
-(NSString *)description;
-(id)replacement;
@end

