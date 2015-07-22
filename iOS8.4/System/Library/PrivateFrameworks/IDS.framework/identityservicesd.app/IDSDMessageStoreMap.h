/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSMutableDictionary, NSArray;

@interface IDSDMessageStoreMap : NSObject {

	opaque_pthread_mutex_t _mutex;
	NSMutableDictionary* _messageStores;

}

@property (copy,readonly) NSArray * messageStores; 
+(id)sharedInstance;
-(id)getOrCreateMessageStoreForDataProtectionClass:(unsigned)arg1 ;
-(NSArray *)messageStores;
-(void)dealloc;
-(id)init;
@end
