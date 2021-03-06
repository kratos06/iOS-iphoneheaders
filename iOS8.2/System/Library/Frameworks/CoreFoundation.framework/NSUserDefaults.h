/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSUserDefaults : NSObject {

	id _private;
	void** _reserved[4];

}
+(void)mf_setCompositionServicesPreferenceValue:(id)arg1 forKey:(id)arg2 ;
+(id)mf_copyCompositionServicesPreferenceValueForKey:(id)arg1 ;
+(id)_webkit_preferredLanguageCode;
+(id)_IMAppObjectForKey:(id)arg1 ;
+(id)_IMObjectForKey:(id)arg1 inDomain:(id)arg2 ;
+(id)_IMAgentObjectForKey:(id)arg1 ;
+(void)_IMSetObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
+(void)_ensureAndLockPreferredLanguageLock;
+(void)_web_addDefaultsChangeObserver;
+(void)_web_defaultsDidChange;
+(id)_web_preferredLanguageCode;
+(void)setStandardUserDefaults:(id)arg1 ;
+(void)resetStandardUserDefaults;
+(id)standardUserDefaults;
-(id)volatileDomainForName:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(id)_initWithSuiteName:(id)arg1 container:(id)arg2 ;
-(id)initWithUser:(id)arg1 ;
-(void)setPersistentDomain:(id)arg1 forName:(id)arg2 ;
-(id)objectForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 inDomain:(id)arg2 ;
-(long long)longForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(void)setInteger:(int)arg1 forKey:(id)arg2 ;
-(void)setLong:(long long)arg1 forKey:(id)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(id)searchList;
-(void)setSearchList:(id)arg1 ;
-(void)addSuiteNamed:(id)arg1 ;
-(void)removeSuiteNamed:(id)arg1 ;
-(id)volatileDomainNames;
-(void)setVolatileDomain:(id)arg1 forName:(id)arg2 ;
-(void)removeVolatileDomainForName:(id)arg1 ;
-(id)persistentDomainNames;
-(void)removePersistentDomainForName:(id)arg1 ;
-(char)objectIsForcedForKey:(id)arg1 ;
-(char)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2 ;
-(char)boolForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)persistentDomainForName:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(char)synchronize;
-(id)initWithSuiteName:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(int)integerForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)registerDefaults:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(oneway void)release;
-(id)stringArrayForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
@end

