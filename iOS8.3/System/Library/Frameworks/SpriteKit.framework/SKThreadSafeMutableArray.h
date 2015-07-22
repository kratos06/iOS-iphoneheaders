/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:16:20 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/NSCopying.h>
#import <SpriteKit/NSMutableCopying.h>
#import <SpriteKit/NSSecureCoding.h>
#import <SpriteKit/NSFastEnumeration.h>

@class NSMutableArray, NSArray;

@interface SKThreadSafeMutableArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {

	int _storageLock;
	NSMutableArray* _storage;

}

@property (__weak,readonly) NSArray * arrayRepresentation; 
-(id)initWithNSMutableArray:(id)arg1 ;
-(id)init;
-(id)description;
-(void)removeObjectsInArray:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSArray *)arrayRepresentation;
@end
