/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString, NSDictionary;

@interface MBFileInfo : NSObject <NSCopying, NSCoding> {

	bool _isDirectory;
	NSString* _path;
	long long _priority;
	NSDictionary* _extendedAttributes;

}

@property (nonatomic,copy) NSString * path;                                //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) bool isDirectory;                             //@synthesize isDirectory=_isDirectory - In the implementation block
@property (assign,nonatomic) long long priority;                           //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSDictionary * extendedAttributes;              //@synthesize extendedAttributes=_extendedAttributes - In the implementation block
+(id)fileInfoWithPath:(id)arg1 extendedAttributes:(id)arg2 ;
-(bool)isDirectory;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)path;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setPath:(id)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setIsDirectory:(bool)arg1 ;
-(id)initWithPath:(id)arg1 extendedAttributes:(id)arg2 ;
-(id)extendedAttributes;
-(void)setExtendedAttributes:(id)arg1 ;
@end

