/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@interface __NSCFArray : NSMutableArray
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)retain;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(void)removeLastObject;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(void)finalize;
@end

