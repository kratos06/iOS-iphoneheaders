/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class MBSCacheStmt;

@interface MBSCacheEnumerator : NSEnumerator {

	MBSCacheStmt* _stmt;
	/*^block*/id _block;
	BOOL _closed;

}
+(id)enumeratorWithStmt:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithStmt:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)nextObject;
-(void)close;
@end
