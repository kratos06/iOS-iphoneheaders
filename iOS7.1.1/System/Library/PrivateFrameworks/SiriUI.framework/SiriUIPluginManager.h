/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SVSBundleIdentifierMap;

@interface SiriUIPluginManager : NSObject {

	SVSBundleIdentifierMap* _identifierMap;

}
+(id)sharedInstance;
-(void).cxx_destruct;
-(void)_loadBundleMapsIfNecessary;
-(id)_createDebugViewControllerForAceObject:(id)arg1 ;
-(id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2 ;
-(id)_bundleSearchPaths;
-(id)transcriptItemForObject:(id)arg1 ;
-(id)speakableProviderForObject:(id)arg1 ;
@end

