/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SDBundleTracker : NSObject {

	NSMutableDictionary* _trackingInfos;

}
+(id)sharedBundleTracker;
+(id)trackerKeyForBundleIdentifier:(id)arg1 category:(id)arg2 ;
-(id)_infoForKey:(id)arg1 ;
-(void)_saveInfoForBundleWithKey:(id)arg1 ;
-(char)shouldRunIndexerForBundleWithKey:(id)arg1 ;
-(char)shouldContinueIndexingBundleWithKey:(id)arg1 transitionedToState:(int)arg2 ;
-(void)recordEvent:(int)arg1 info:(id)arg2 forBundleWithKey:(id)arg3 inState:(int)arg4 ;
-(void)dealloc;
-(id)init;
@end
